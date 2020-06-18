//#include <stdio.h>
//#include "ITP1_11_A.h"
//
//// ダイスの目とその上面と前面の整数が与えられ、右側の面の数字を出力
//int main()
//{
//	DICE stDice;
//	int iInputQuestionNum;
//	int iQTop, iQSouth;
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
//	scanf("%d", &iInputQuestionNum);
//	for (iCnt = 0; iCnt < iInputQuestionNum; iCnt++)
//	{
//		scanf("%d %d", &iQTop, &iQSouth);
//		// まずは上面を合わせる、左右の面に目的の上面の数字がないなら縦方向(N)に回転
//		if (stDice.iEast != iQTop && stDice.iWest != iQTop)
//		{
//			while (stDice.iTop != iQTop)
//			{
//				vdDiceRoll(&stDice, 'N');
//			}
//		}
//		else if(stDice.iEast == iQTop)	// 右面に目的の数字があるので横方向(W)に回転
//		{
//			vdDiceRoll(&stDice, 'W');
//		}
//		else // 左面に目的の数字があるので横方向(E)に回転
//		{
//			vdDiceRoll(&stDice, 'E');
//		}
//
//		// 上面を固定して前面をそろえる
//		while (stDice.iSouth != iQSouth)
//		{
//			vdDiceRollRight(&stDice);
//		}
//
//		printf("%d\n", stDice.iEast);
//	}
//
//	
//
//	return 0;
//	
//}
