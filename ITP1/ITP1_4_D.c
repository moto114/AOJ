//#include <stdio.h>
////#define scanf scanf_s
//typedef long long int lli;
//
//// ITP1_4_D
//// n個の整数を入力し、それらの最小値、最大値、合計値を出力
//int main()
//{
//	int iInputN;
//	int iInputA;
//	int iMin = 1000000;
//	int iMax = -1000000;
//	lli iSum = 0;
//
//	scanf("%d", &iInputN);
//
//	for (; iInputN > 0; iInputN--)
//	{
//		scanf("%d", &iInputA);
//		iSum += iInputA;
//		if (iMin > iInputA)
//		{
//			iMin = iInputA;
//		}
//		if (iMax < iInputA)
//		{
//			iMax = iInputA;
//		}
//	}
//
//	printf("%d %d %lld\n", iMin, iMax, iSum);
//
//	return 0;
//}