//#include <stdio.h>
//#include <stdlib.h>
//#include "ITP1_11_A.h"
//
///*
//アルゴリズム：
//N個のダイスの上面の目、上面に対する東西南北側の目と、下面の目を入力として受け取る。
//任意の二つのダイスが同じかをチェックし、一つでも同じダイスがあれば"No", すべての組み合わせが異なっているなら"Yes"
//
//二つのダイスの比較方法は、片方のダイスを動かしていき、
//もう片方のダイスと全く同じ配置が作れた（上面、下面、東西南北の面がすべて同じ）なら同じダイスだと判断する。
//例えば、上面を固定した場合、正面に来る面は4種類考えられるので、それぞれの配置で比較する。
//それを6面すべてが上面にある状態で行うことですべてのパターンで比較できると考えた。
//配置の変更は、ダイスの配置を付け替えることで実現した。
//例）
//ダイスを西方向に倒す場合、北と南の数値は変わらず、
//上面の数値は東の数値、東の数値は下面の数値、下面の数値は西の数値、西の数値は上面の数値に変化する。
//
//上面を固定して上面から見て時計回りに90度回転も同様に配置の付け替えで実現できる。
//
//*/
//
//// n個のダイスの目が与えられ、それらがすべて異なるダイスかどうか判定
//// すべて異なるならYes、一つでも同じならNoを出力
//int main()
//{
//	DICE* stDice;	// 受け取るダイス
//	int iInputDiceNum;	// ダイスの個数
//	int iCnt1, iCnt2;
//
//	scanf("%d", &iInputDiceNum);
//
//	stDice = (DICE*)malloc(sizeof(DICE) * iInputDiceNum);
//
//	// ダイスの目を入力
//	for (iCnt1 = 0; iCnt1 < iInputDiceNum; iCnt1++)
//	{
//		scanf("%d", &stDice[iCnt1].iTop);
//		scanf("%d", &stDice[iCnt1].iSouth);
//		scanf("%d", &stDice[iCnt1].iEast);
//		scanf("%d", &stDice[iCnt1].iWest);
//		scanf("%d", &stDice[iCnt1].iNorth);
//		scanf("%d", &stDice[iCnt1].iBottom);
//	}
//
//	// すべてのダイスの組み合わせでチェック
//	for (iCnt1 = 0; iCnt1 < iInputDiceNum - 1; iCnt1++)
//	{
//		for (iCnt2 = iCnt1 + 1; iCnt2 < iInputDiceNum; iCnt2++)
//		{
//			// どれか一つでも同じダイスならNoで終了
//			if (iIsEqual2Dice(stDice[iCnt1], stDice[iCnt2]) == OK)
//			{
//				printf("No\n");
//				free(stDice);
//				return 0;
//			}
//		}
//	}
//
//	// すべてのダイスが異なるのでYesで終了
//	printf("Yes\n");
//
//	free(stDice);
//
//	return 0;
//}