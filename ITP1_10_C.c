//#include <stdio.h>
//#include <math.h>
//
//// データの個数と各データが与えられ、データセットの標準偏差を出力
//// 与えられるデータの個数が0なら終了
//int main()
//{
//	int iInputN, iInputS;
//	int iCnt;
//	double dAve;
//	int iSum, iNijouSum;
//
//	scanf("%d", &iInputN);
//
//	while (iInputN != 0)
//	{
//		iSum = 0;
//		iNijouSum = 0;
//		for (iCnt = 0; iCnt < iInputN; iCnt++)
//		{
//			scanf("%d", &iInputS);
//			iSum += iInputS;
//			iNijouSum += pow(iInputS, 2);
//		}
//		// 二乗の平均‐平均の二乗
//		dAve = (double)iSum / iInputN;
//		printf("%.8lf\n", sqrt((double)iNijouSum / iInputN - pow(dAve, 2)));
//
//		scanf("%d", &iInputN);
//	}
//
//	return 0;
//}