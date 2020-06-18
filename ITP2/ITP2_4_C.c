//#include <stdio.h>
//#include <stdlib.h>
//
//void swapRange(int* aiData);
//void vdSwap(int* iValue1, int* iValue2);
//
//// iInputN個の要素を持つ配列の要素を0以上(e−b)未満のそれぞれのkについて、
//// (b+k)にある要素と(t+k)にある要素を入れ替える動作をiInputQ回続ける
//// 最後に全要素を出力
//int main()
//{
//	int iInputN;
//	int* piData;
//	int iInputQ;
//	int iCnt;
//
//	scanf("%d", &iInputN);
//	piData = (int*)malloc(sizeof(int) * iInputN);
//	
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%d", &piData[iCnt]);
//	}
//
//	scanf("%d", &iInputQ);
//
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		swapRange(piData);
//	}
//
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		if (iCnt != iInputN - 1)
//		{
//			printf("%d ", piData[iCnt]);
//		}
//		else
//		{
//			printf("%d\n", piData[iCnt]);
//		}
//	}
//
//	return 0;
//}
//
//// 配列の要素を0以上(e−b)未満のそれぞれのkについて、(b+k)にある要素と(t+k)にある要素を入れ替え
//void swapRange(int* aiData)
//{
//	int iInputB;
//	int iInputE;
//	int iInputT;
//	int iCnt;
//
//	// 読み込み
//	scanf("%d %d %d", &iInputB, &iInputE, &iInputT);
//	
//	// 指定範囲でデータを一つずつ入れ替え
//	for (iCnt = 0; iCnt < iInputE - iInputB; iCnt++)
//	{
//		vdSwap(&aiData[iInputB + iCnt], &aiData[iInputT + iCnt]);
//	}
//
//	return;
//}
//
//// iValue1, iValue2を入れ替え
//void vdSwap(int* iValue1, int* iValue2)
//{
//	int iValueTmp = *iValue1;
//	*iValue1 = *iValue2;
//	*iValue2 = iValueTmp;
//
//	return;
//}