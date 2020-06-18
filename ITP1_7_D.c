//#include <stdio.h>
//typedef long long int lli;
//
//// n*m行列Aとm*l行列Bの積であるn*l行列Cを出力
//int main()
//{
//	int iCnt1, iCnt2, iCnt3;
//	int iInputN, iInputM, iInputL;
//	lli** aiArrayA;
//	lli** aiArrayB;
//	lli** aiArrayC;
//	
//	scanf("%lld %lld %lld", &iInputN, &iInputM, &iInputL);
//	
//	// メモリ確保
//	aiArrayA = (lli**)malloc(sizeof(lli*) * iInputN);
//	aiArrayB = (lli**)malloc(sizeof(lli*) * iInputM);
//	aiArrayC = (lli**)malloc(sizeof(lli*) * iInputN);
//
//	// 各行のメモリ確保
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		aiArrayA[iCnt1] = (lli*)malloc(sizeof(lli) * iInputM);
//		aiArrayC[iCnt1] = (lli*)malloc(sizeof(lli) * iInputL);
//
//	}
//	for (iCnt1 = 0; iCnt1 < iInputM; iCnt1++)
//	{
//		aiArrayB[iCnt1] = (lli*)malloc(sizeof(lli) * iInputL);
//	}
//	
//	// 行列Aの入力
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputM; iCnt2++)
//		{
//			scanf("%d", &aiArrayA[iCnt1][iCnt2]);
//		}
//	}
//
//	// 行列Bの入力
//	for (iCnt1 = 0; iCnt1 < iInputM; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputL; iCnt2++)
//		{
//			scanf("%d", &aiArrayB[iCnt1][iCnt2]);
//		}
//	}
//
//	// 行列Cの初期化
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputL; iCnt2++)
//		{
//			aiArrayC[iCnt1][iCnt2] = 0;
//		}
//	}
//	
//	// 行列Cの計算
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputL; iCnt2++)
//		{
//			for (iCnt3 = 0; iCnt3 < iInputM; iCnt3++)
//			{
//				aiArrayC[iCnt1][iCnt2] += aiArrayA[iCnt1][iCnt3] * aiArrayB[iCnt3][iCnt2];
//			}
//		}
//	}
//
//	// 行列Cの表示
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputL - 1; iCnt2++)
//		{
//			printf("%lld ", aiArrayC[iCnt1][iCnt2]);
//		}
//		printf("%lld\n", aiArrayC[iCnt1][iCnt2]);
//	}
//
//	// メモリ解放
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		free(aiArrayA[iCnt1]);
//		free(aiArrayC[iCnt1]);
//	}
//	for (iCnt1 = 0; iCnt1 < iInputM; iCnt1++)
//	{
//		free(aiArrayB[iCnt1]);
//	}
//	free(aiArrayA);
//	free(aiArrayB);
//	free(aiArrayC);
//
//
//	return 0;
//}