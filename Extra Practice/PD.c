/*
* Sample code that detects a 4-bit sequence 1111.
* Now the goal is to detect an 8-bit sequence 01111110
* and eliminate (or minimize) the use of branches via 
* array of pointers or linked lists.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef enum ePD_STATE {
	DS_MATCH0, // 0 bit matched 
	DS_MATCH1, // 1 bit matched 
	DS_MATCH2, // 2 bits matched 
	DS_MATCH3, // 3 bits matched 
	DS_MATCH4, // 4 bits matched 
	DS_COUNT // # of states 
} PD_STATE;

typedef enum ePD_INPUT
{
	DI_STOP = -2, // stop 
	DI_INVALID = -1, // invalid input 
	DI_BIT0 = 0, // bit 0 
	DI_BIT1, // bit 1 
	DI_COUNT // # of valid inputs 
} PD_INPUT;

typedef const struct sPD_State {
	PD_STATE State;
	int Match;
} PD_State;

#define psM0 &stateList[DS_MATCH0] 
#define psM1 &stateList[DS_MATCH1] 
#define psM2 &stateList[DS_MATCH2] 
#define psM3 &stateList[DS_MATCH3] 
#define psM4 &stateList[DS_MATCH4]

PD_State stateList[DS_COUNT] = { { DS_MATCH0, 0 },{ DS_MATCH1, 1 },{ DS_MATCH2, 2 },{ DS_MATCH3, 3 },{ DS_MATCH4, 4 } };
PD_INPUT readInput();
PD_State* processInput(PD_State* currState, PD_INPUT input);

int main() {
	PD_State* currState = NULL;
	PD_State* nextState = NULL;
	PD_INPUT input = DI_STOP;

	// set initial state 
	currState = psM0;

	// main loop 
	while (1) {
		printf("\nCurrent match %d bits ", currState->Match);

		// read input 
		input = readInput();
		if (input == DI_STOP)
			break;
		else if (input == DI_INVALID)
			continue;

		// process input / handle state transition 
		nextState = processInput(currState, input);
		printf("\tNext match %d bits\n", nextState->Match);

		// update state 
		currState = nextState;
	}
	return 0;
}

PD_INPUT readInput() {
	PD_INPUT input = DI_INVALID;
	char str[80]; scanf("%s", str);
	switch (str[0]) {
	case '0':
		input = DI_BIT0;
		break;
	case '1':
		input = DI_BIT1;
		break;
	case 's':
		input = DI_STOP;
		break;
	}
	return input;
}

PD_State* processInput(PD_State* currState, PD_INPUT input) {
	PD_State* nextState = currState;
	switch (currState->State) {

	case DS_MATCH0:
		if (input == DI_BIT0)
			nextState = psM0;
		else if (input == DI_BIT1)
			nextState = psM1;
		break;

	case DS_MATCH1:
		if (input == DI_BIT0)
			nextState = psM0;
		else if (input == DI_BIT1)
			nextState = psM2;
		break;

	case DS_MATCH2:
		if (input == DI_BIT0)
			nextState = psM0;
		else if (input == DI_BIT1)
			nextState = psM3;
		break;

	case DS_MATCH3:
		if (input == DI_BIT0)
			nextState = psM0;
		else if (input == DI_BIT1)
			nextState = psM4;
		break;

	case DS_MATCH4:
		if (input == DI_BIT0)
			nextState = psM0;
		else if (input == DI_BIT1)
			nextState = psM1;
		break;
	}
	return nextState;
}
