//#include <stdio.h>
//#include <math.h>
//
//#define INF -1
//
//double dRetMinkowski(int* aiVecX, int* aiVecY, int iVecSize, int iValueP);
//
//// 要素数Nの二つのベクトルが与えられ、ミンコフスキー距離(p=1,2,3,∞)をそれぞれ出力
//int main()
//{
//	int iInputN;
//	double dLength;
//	int* iInputVecX, * iInputVecY;
//	int iCnt;
//
//	scanf("%d", &iInputN);
//
//	// メモリ確保
//	iInputVecX = (int*)malloc(sizeof(int) * iInputN);
//	iInputVecY = (int*)malloc(sizeof(int) * iInputN);
//
//
//	// Xベクトル
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%d", iInputVecX + iCnt);
//	}
//	// Yベクトル
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%d", iInputVecY + iCnt);
//	}
//
//	// 距離計算
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, 1);
//	printf("%.6lf\n", dLength);
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, 2);
//	printf("%.6lf\n", dLength);
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, 3);
//	printf("%.6lf\n", dLength);
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, INF);
//	printf("%.6lf\n", dLength);
//
//	free(iInputVecX);
//	free(iInputVecY);
//
//	return 0;
//}
//
//// 引数iValuePに基づいてミンコフスキー距離を計算
//double dRetMinkowski(int* aiVecX, int *aiVecY, int iVecSize, int iValueP)
//{
//	int iCnt;
//	double dRetLength = 0;
//	double dAbs;
//
//	// p=∞の時
//	if (iValueP == INF)
//	{
//		for (iCnt = 0; iCnt < iVecSize; iCnt++)
//		{
//			dAbs = abs(*(aiVecX + iCnt) - *(aiVecY + iCnt));
//			if (dRetLength < dAbs)
//			{
//				dRetLength = dAbs;
//			}
//		}
//	}
//	else
//	{
//		for (iCnt = 0; iCnt < iVecSize; iCnt++)
//		{
//			dAbs = abs(*(aiVecX + iCnt) - *(aiVecY + iCnt));
//			dRetLength += pow(dAbs, iValueP);
//		}
//		dRetLength = pow(dRetLength, (double) 1 / iValueP);
//	}
//	
//
//	return dRetLength;
//}