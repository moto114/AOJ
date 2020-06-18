//#include <stdio.h>
//#include <stdlib.h>
//
//// スタックを実装、操作は以下の３つでそれぞれ0,1,2で操作の種類を指定
//// ・push(t, x) : St に整数xを挿入する。
//// ・top(t) : Stから次に取り出される要素を報告する。ただし、Stが空の場合は何もしない。
//// ・pop(t) : Stから要素を取り出し削除する。ただし、Stが空の場合は何もしない。
//
//void push(int* piData, int* iElementNum);
//void top(int* piData, int* iElementNum);
//void pop(int* piData, int* iElementNum);
//
//int main()
//{
//	int iInputN;
//	int iInputQ;
//	int iInputT;
//	int iInputOrder;
//	int** ppiData;
//	int* iElementNum;
//	int iCnt;
//
//	scanf("%d %d", &iInputN, &iInputQ);
//
//	// 初期化
//	ppiData = (int**)malloc(sizeof(int*) * iInputN);
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		ppiData[iCnt] = (int*)malloc(sizeof(int) * iInputQ);
//	}
//	iElementNum = (int*)calloc(iInputN, sizeof(int));
//
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		scanf("%d %d", &iInputOrder, &iInputT);
//
//		switch (iInputOrder)
//		{
//		case 0:
//			push(ppiData[iInputT], &iElementNum[iInputT]);
//			break;
//		case 1:
//			top(ppiData[iInputT], &iElementNum[iInputT]);
//			break;
//		case 2:
//			pop(ppiData[iInputT], &iElementNum[iInputT]);
//			break;
//		default:
//			break;
//		}
//	}
//
//	return 0;
//}
//
//// スタックに整数挿入
//void push(int* piData, int* iElementNum)
//{
//	scanf("%d", &piData[*iElementNum]);
//	(*iElementNum)++;
//
//	return;
//}
//
//// 次に取り出される要素を出力
//void top(int* piData, int* iElementNum)
//{
//	if (*iElementNum <= 0)
//	{
//		return;
//	}
//	printf("%d\n", piData[(*iElementNum) - 1]);
//	return;
//}
//
//// 要素を取り出して削除
//void pop(int* piData, int* iElementNum)
//{
//	if (*iElementNum <= 0)
//	{
//		return;
//	}
//	(*iElementNum)--;
//
//	return;
//}