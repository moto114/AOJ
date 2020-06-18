#include <stdio.h>
#include "ITP1_11_A.h"

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_A&lang=ja
// 6面ダイスの目と、転がす方角が与えられ、最終的な上面の整数を出力
// ダイスは上の面から見て東西南北の目と上下の面の目をもつ
//int main()
//{
//
//	DICE stDice;
//	char achOrders[100];	// 命令文字列
//	int iCnt;
//
//	// さいころの目を入力
//	scanf("%d", &stDice.iTop);
//	scanf("%d", &stDice.iSouth);
//	scanf("%d", &stDice.iEast);
//	scanf("%d", &stDice.iWest);
//	scanf("%d", &stDice.iNorth);
//	scanf("%d", &stDice.iBottom);
//
//	// 命令入力
//	scanf("%s", achOrders);
//	for (iCnt = 0; achOrders[iCnt] != '\0'; iCnt++)
//	{
//		vdDiceRoll(&stDice, achOrders[iCnt]);
//	}
//
//	printf("%d\n", stDice.iTop);
//
//	return 0;
//}

// chOrderの方角にダイスを倒す
void vdDiceRoll(DICE* stDice, char chOrder)
{
	int iTopTmp = stDice->iTop;	// Top退避用

	// 倒す方向に従ってダイスの配置を付け替え
	switch (chOrder)
	{
	case 'N':
		stDice->iTop = stDice->iSouth;
		stDice->iSouth = stDice->iBottom;
		stDice->iBottom = stDice->iNorth;
		stDice->iNorth = iTopTmp;
		break;
	case 'E':
		stDice->iTop = stDice->iWest;
		stDice->iWest = stDice->iBottom;
		stDice->iBottom = stDice->iEast;
		stDice->iEast = iTopTmp;
		break;
	case 'S':
		stDice->iTop = stDice->iNorth;
		stDice->iNorth = stDice->iBottom;
		stDice->iBottom = stDice->iSouth;
		stDice->iSouth = iTopTmp;
		break;
	case 'W':
		stDice->iTop = stDice->iEast;
		stDice->iEast = stDice->iBottom;
		stDice->iBottom = stDice->iWest;
		stDice->iWest = iTopTmp;
		break;
	default:
		// 上記以外は何もしない
		break;
	}

	return;
}

// 上面から見て時計回りにダイスを90度回転
void vdDiceRollRight(DICE* stDice)
{
	int iSouthTmp = stDice->iSouth;

	stDice->iSouth = stDice->iEast;
	stDice->iEast = stDice->iNorth;
	stDice->iNorth = stDice->iWest;
	stDice->iWest = iSouthTmp;
	return;
}


// stDice1とstDice2が同じダイスかどうか判定
// 出力：同じダイスならOK、異なるダイスならNG
int iIsEqual2Dice(DICE stDice1, DICE stDice2)
{
	int iCnt;

	// 1面ずつ上面に持ってきて同じダイスの配置かチェック
	// Eの方向に横回転した場合の4面をチェック
	for (iCnt = 0; iCnt < 4; iCnt++)
	{
		if (iIsEqual2DiceRound(stDice1, stDice2) == OK)
		{
			return OK;
		}
		vdDiceRoll(&stDice2, 'E');
	}
	// Nの方向に縦回転した場合の残り2面をチェック
	for (iCnt = 0; iCnt < 3; iCnt++)
	{
		vdDiceRoll(&stDice2, 'N');
		// 上の横回転時にチェック済みの状態以外が上面に来たらチェック
		if (iCnt != 1) {
			if (iIsEqual2DiceRound(stDice1, stDice2) == OK)
			{
				return OK;
			}
		}
	}

	return NG;
}

// stDice2の上面を固定した状態で、上から見て時計回りに90度回転させていき、
// その都度stDice1と同じ配置になっているかをチェック
// 出力：一つでも同じ配置ならOK、すべて異なるならNGを返す
int iIsEqual2DiceRound(DICE stDice1, DICE stDice2)
{
	int iCnt;

	// 上面固定で一回転して配置をチェック
	for (iCnt = 0; iCnt < 4; iCnt++)
	{
		if (stDice1.iTop == stDice2.iTop &&
			stDice1.iEast == stDice2.iEast &&
			stDice1.iWest == stDice2.iWest &&
			stDice1.iNorth == stDice2.iNorth &&
			stDice1.iSouth == stDice2.iSouth &&
			stDice1.iBottom == stDice2.iBottom
			)
		{
			return OK;
		}
		// 上面からみて時計回り90度回転
		vdDiceRollRight(&stDice2);
	}

	return NG;
}
