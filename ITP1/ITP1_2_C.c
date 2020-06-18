//#include <stdio.h>
////#define scanf scanf_s
//typedef long long int lli;
//
//// ITP1_2_C
//// 3整数a,b,cを読み込み、昇順に出力
//int main()
//{
//
//	int iInputN[3];
//	int iCnt;
//	int iCnt2;
//	int iValueTmp;
//
//	for (iCnt = 0; iCnt < 3; iCnt++)
//	{
//		scanf("%d", &iInputN[iCnt]);
//	}
//
//	//バブルソート
//	for (iCnt = 0; iCnt < 2; iCnt++)
//	{
//		for (iCnt2 = iCnt + 1; iCnt2 < 3; iCnt2++)
//		{
//			if (iInputN[iCnt] > iInputN[iCnt2])
//			{
//				iValueTmp = iInputN[iCnt];
//				iInputN[iCnt] = iInputN[iCnt2];
//				iInputN[iCnt2] = iValueTmp;
//			}
//		}
//	}
//
//	for (iCnt = 0; iCnt < 2; iCnt++)
//	{
//		printf("%d ", iInputN[iCnt]);
//	}
//	printf("%d\n", iInputN[iCnt]);
//
//	return 0;
//}