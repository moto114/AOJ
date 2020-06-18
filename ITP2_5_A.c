//#include <stdio.h>
//#include <stdlib.h>
//
//typedef long long int lli;
//
//typedef struct
//{
//	lli iValueX;
//	lli iValueY;
//}DATA;
//
//void vdBubbleSortX(DATA* pstData, int iInputN);
//void vdBubbleSortY(DATA* pstData, int iInputN);
//void vdQuickSortX(DATA* pstData, int iLeftIdx, int iRightIdx);
//void vdQuickSortY(DATA* pstData, int iLeftIdx, int iRightIdx);
//void vdSwapStruct(DATA* pstData1, DATA* pstData2);
//
//
//// N個の点を以下の優先順で出力
//// 1. xが小さい点を先に出力する
//// 2. xが同じ場合は、yが小さい点を先に出力する
//int main()
//{
//	int iInputN;
//	DATA* pstData;
//	int iCnt;
//
//	scanf("%d", &iInputN);
//
//	pstData = (DATA*)malloc(sizeof(DATA) * iInputN);
//	if (pstData == NULL)
//	{
//		// メモリ確保失敗
//		return -1;
//	}
//
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%lld %lld", &pstData[iCnt].iValueX, &pstData[iCnt].iValueY);
//	}
//	
//	// まずyでソート
//	//vdBubbleSortY(pstData, iInputN);
//	vdQuickSortY(pstData, 0, iInputN - 1);
//
//	//printf("\n");
//	//for (iCnt = 0; iCnt < iInputN; iCnt++)
//	//{
//	//	printf("%lld %lld\n", pstData[iCnt].iValueX, pstData[iCnt].iValueY);
//	//}
//	//printf("\n");
//
//	// 次にxでソート
//	vdBubbleSortX(pstData, iInputN);
//	//vdQuickSortX(pstData, 0, iInputN - 1);
//
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		printf("%lld %lld\n", pstData[iCnt].iValueX, pstData[iCnt].iValueY);
//	}
//
//	return 0;
//}
//
//void vdBubbleSortX(DATA* pstData, int iInputN)
//{
//	int iCnt1, iCnt2;
//	DATA pstDataTmp;
//
//	// バブルソート
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputN - iCnt1 - 1; iCnt2++)
//		{
//			if (pstData[iCnt2].iValueX > pstData[iCnt2 + 1].iValueX)
//			{
//				pstDataTmp = pstData[iCnt2];
//				pstData[iCnt2] = pstData[iCnt2 + 1];
//				pstData[iCnt2 + 1] = pstDataTmp;
//			}
//		}
//	}
//
//	return;
//}
//
//void vdBubbleSortY(DATA* pstData, int iInputN)
//{
//	int iCnt1, iCnt2;
//	DATA pstDataTmp;
//
//	// バブルソート
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputN - iCnt1 - 1; iCnt2++)
//		{
//			if (pstData[iCnt2].iValueY > pstData[iCnt2 + 1].iValueY)
//			{
//				pstDataTmp = pstData[iCnt2];
//				pstData[iCnt2] = pstData[iCnt2 + 1];
//				pstData[iCnt2 + 1] = pstDataTmp;
//			}
//		}
//	}
//	return;
//}
//
//void vdQuickSortX(DATA* pstData, int iLeftIdx, int iRightIdx)
//{
//	int iRefIdx;
//	int iLeft2Right;
//	int iRight2Left;
//
//	// 基準値を中心の値に設定
//	iRefIdx = (iRightIdx + iLeftIdx) / 2;
//
//	iLeft2Right = iLeftIdx;
//	iRight2Left = iRightIdx;
//
//	if (iLeftIdx < iRightIdx)
//	{
//
//
//		// 基準値を境目に左側と右側に分割
//		// 左から見ていった基準値より大きい値と
//		// 右から見ていった基準値より小さいを入れ替え
//		while (iLeft2Right < iRight2Left)
//		{
//			// 左から探索
//			while (pstData[iLeft2Right].iValueX < pstData[iRefIdx].iValueX)
//			{
//				iLeft2Right++;
//			}
//
//			// 右から探索
//			while (pstData[iRight2Left].iValueX > pstData[iRefIdx].iValueX)
//			{
//				iRight2Left--;
//			}
//
//			// すでに入れ替え済みではないなら見つかった要素を入れ替え
//			if (iLeft2Right < iRight2Left)
//			{
//				//printf("Check1: %d %d\n", iLeft2Right, iRight2Left);
//				vdSwapStruct(&pstData[iLeft2Right], &pstData[iRight2Left]);
//				iLeft2Right++;
//				iRight2Left--;
//			}
//		}
//
//		// 分割した左側で再帰的にクイックソート
//		vdQuickSortX(pstData, iLeftIdx, iRefIdx - 1);
//		// 分割した左側で再帰的にクイックソート
//		vdQuickSortX(pstData, iRefIdx + 1, iRightIdx);
//	}
//
//	return;
//}
//
//void vdQuickSortY(DATA* pstData, int iLeftIdx, int iRightIdx)
//{
//	int iRefIdx;
//	int iLeft2Right;
//	int iRight2Left;
//
//	// 基準値を中心の値に設定
//	iRefIdx = iRightIdx;
//
//	iLeft2Right = iLeftIdx;
//	iRight2Left = iRightIdx;
//
//	if (iLeftIdx < iRightIdx)
//	{
//		// 基準値を境目に左側と右側に分割
//		// 左から見ていった基準値より大きい値と
//		// 右から見ていった基準値より小さいを入れ替え
//		while (iLeft2Right < iRight2Left)
//		{
//			// 左から探索
//			while (pstData[iLeft2Right].iValueY < pstData[iRefIdx].iValueY)
//			{
//				iLeft2Right++;
//			}
//
//			// 右から探索
//			while (pstData[iRight2Left].iValueY > pstData[iRefIdx].iValueY
//				&& iLeft2Right < iRight2Left)
//			{
//				iRight2Left--;
//			}
//
//			// すでに入れ替え済みではないなら見つかった要素を入れ替え
//			if (iLeft2Right < iRight2Left)
//			{
//				//printf("Check1: %d %d\n", iLeft2Right, iRight2Left);
//				vdSwapStruct(&pstData[iLeft2Right], &pstData[iRight2Left]);
//				//iLeft2Right++;
//				//iRight2Left--;
//			}
//		}
//
//		vdSwapStruct(&pstData[iLeft2Right], &pstData[iRight2Left]);
//
//		// 分割した左側で再帰的にクイックソート
//		if (iLeftIdx < iLeft2Right - 1)
//		{
//			vdQuickSortY(pstData, iLeftIdx, iLeft2Right - 1);
//		}
//		
//		// 分割した左側で再帰的にクイックソート
//		if (iLeft2Right + 1 < iRightIdx)
//		{
//			vdQuickSortY(pstData, iLeft2Right + 1, iRightIdx);
//		}
//	}
//
//	return;
//}
//
//void vdSwapStruct(DATA* pstData1, DATA* pstData2)
//{
//	DATA pstDataTmp;
//
//	pstDataTmp = *pstData1;
//	*pstData1 = *pstData2;
//	*pstData2 = pstDataTmp;
//
//	return;
//}
