#pragma once

#define OK 1
#define NG -1

typedef struct
{
	int iTop;
	int iNorth;
	int iEast;
	int iSouth;
	int iWest;
	int iBottom;
}DICE;

void vdDiceRoll(DICE* stDice, char chOrder);
void vdDiceRollRight(DICE* stDice);
int iIsEqual2Dice(DICE stDice1, DICE stDice2);
int iIsEqual2DiceRound(DICE stDice1, DICE stDice2);