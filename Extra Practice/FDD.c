/*
*	Authors:   Edgar Palapa and Blair Vidana
*	Project:   Frame Delimiter Detector
*   	Course:    EE2450
*	Date:      29 November 2017
*	Professor: Dr. Zhao
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef enum FDD_STATE {					 // enum #
	M0,		// No bits matched				 1
	M1,		// 1 bit  matched				 2
	M2,		// 2 bits matched				 3
	M3,		// 3 bits matched				 4
	M4,		// 4 bits matched				 5
	M5,		// 5 bits matched				 6
	M6,		// 6 bits matched				 7
	M7,		// 7 bits matched				 8
	M8,		// 8 bits matched				 9
	STATE_COUNT,	// number of states				10
} FDD_STATE;

typedef enum FDD_INPUT
{								 // enum #
	STOP = -2,		// stop					-2
	INVALID = -1,		// invalid input			-1
	BIT_0 = 0,		// bit 0				 0
	BIT_1 = 1,		// bit 1				 1
	COUNT = 2,		// # of valid inputs			 2
} FDD_INPUT;

typedef const struct FDD_State_Struct {
	FDD_STATE	  State;			// description of struct member
	int			  Match;		// description of struct member
	const struct FDD_State_Struct* Next[COUNT];
} FDD_State;

// present state list
#define psM0 &stateList[M0] 
#define psM1 &stateList[M1] 
#define psM2 &stateList[M2] 
#define psM3 &stateList[M3] 
#define psM4 &stateList[M4]
#define psM5 &stateList[M5]
#define psM6 &stateList[M6]
#define psM7 &stateList[M7]
#define psM8 &stateList[M8]

// list of states
FDD_State stateList[STATE_COUNT] =
{
	{ M0, 0,{ psM1, psM0 } },
	{ M1, 1,{ psM2, psM1 } },
	{ M2, 2,{ psM3, psM0 } },
	{ M3, 3,{ psM4, psM0 } },
	{ M4, 4,{ psM5, psM0 } },
	{ M5, 5,{ psM6, psM0 } },
	{ M6, 6,{ psM7, psM0 } },
	{ M7, 7,{ psM8, psM0 } },
	{ M8, 8,{ psM1, psM0 } },
};

// function prototypes
FDD_INPUT readInput();
FDD_State* processInput(FDD_State* currState, FDD_INPUT input);

int main(int argc, char* argsv[]) {
	FDD_State* currState = NULL;
	FDD_State* nextState = NULL;
	FDD_INPUT input = STOP;

	// set initial 
	currState = psM0;

	// main loop 
	while (1) {
		printf("\nCurrent match %d bits ", currState->Match);

		// read input 
		input = readInput();
		if (input == STOP)
			break;
		else if (input == INVALID)
			continue;

		// process input / handle state transition 
		nextState = processInput(currState, input);
		printf("\tNext match %d bits\n", nextState->Match);

		// update state 
		currState = nextState;
	}
	return 0;
}

FDD_INPUT readInput() {
	FDD_INPUT input = INVALID;
	char str[80];
	scanf("%s", str);

	switch (str[0]) {

	case '0':
		input = BIT_0;
		break;

	case '1':
		input = BIT_1;
		break;

	case 's':
		input = STOP;
		break;
	}
	return input;
}

// FIX ME PLZ
FDD_State* processInput(FDD_State* currState, FDD_INPUT input) {
	FDD_State* nextState = currState;


	return nextState;
}
