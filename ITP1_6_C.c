//#include <stdio.h>
//
//
//// 1フロア10部屋、3階建ての公舎4棟の入居、退去の情報を読み込んで入居者数を出力する
//// b棟f階r番目v追加 or -v退去
//int main()
//{
//	int aiRoom[4][3][10];
//
//	int iCnt1, iCnt2, iCnt3;
//
//	for (iCnt1 = 0; iCnt1 < 4; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < 3; iCnt2++)
//		{
//			for (iCnt3 = 0; iCnt3 < 10; iCnt3++)
//			{
//				aiRoom[iCnt1][iCnt2][iCnt3] = 0;
//			}
//		}
//	}
//
//	int iInputN, iInputB, iInputF, iInputR, iInputV;
//	scanf("%d", &iInputN);
//
//	while (iInputN > 0)
//	{
//		scanf("%d %d %d %d", &iInputB, &iInputF, &iInputR, &iInputV);
//		aiRoom[iInputB - 1][iInputF - 1][iInputR - 1] += iInputV;
//		iInputN--;
//	}
//
//	for (iCnt1 = 0; iCnt1 < 4; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < 3; iCnt2++)
//		{
//			for (iCnt3 = 0; iCnt3 < 10; iCnt3++)
//			{
//				printf(" %d", aiRoom[iCnt1][iCnt2][iCnt3]);
//			}
//			printf("\n");
//		}
//		if (iCnt1 != 3)
//		{
//			printf("####################\n");
//		}
//	}
//
//	return 0;
//}