//#include <stdio.h>
//
////表計算を行うプログラム
//// 表の行数rと列数c、r × c の要素を持つ表を読み込んで、
//// 各行と列の合計を挿入した新しい表を出力する
//int main()
//{
//	int iInputR, iInputC;
//	int iInputValue;
//	int iSum;
//	int iCnt1, iCnt2;
//	int* aiSumCol;		// 各列の合計
//
//	scanf("%d %d", &iInputR, &iInputC);
//
//	// 各行の合計の合計も必要なので＋１してメモリ確保
//	aiSumCol = (int*)malloc(sizeof(int) * (iInputC + 1));
//
//	// 合計初期化
//	for (iCnt1 = 0; iCnt1 < iInputC + 1; iCnt1++)
//	{
//		aiSumCol[iCnt1] = 0;
//	}
//
//	// 各行の合計と各列の合計を計算
//	// 受け取った入力はそのまま表示
//	for (iCnt1 = 0; iCnt1 < iInputR; iCnt1++)
//	{
//		iSum = 0;
//		for (iCnt2 = 0; iCnt2 < iInputC; iCnt2++)
//		{
//			scanf("%d", &iInputValue);
//			printf("%d ", iInputValue);
//			aiSumCol[iCnt2] += iInputValue;
//			iSum += iInputValue;
//		}
//		aiSumCol[iCnt2] += iSum;
//		printf("%d\n", iSum);
//	}
//
//	// 最終行表示
//	for (iCnt1 = 0; iCnt1 < iInputC; iCnt1++)
//	{
//		printf("%d ", aiSumCol[iCnt1]);
//	}
//	printf("%d\n", aiSumCol[iCnt1]);
//
//	return 0;
//}