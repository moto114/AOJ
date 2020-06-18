//#include <stdio.h>
////#define scanf scanf_s
//typedef long long int lli;
//
//// ITP1_5_A
//// H * Wの四角形を'#'で出力
//// H=0,W=0で終了
//int main()
//{
//	int iInputH, iInputW;
//	int iCnt1, iCnt2;
//
//	scanf("%d %d", &iInputH, &iInputW);
//
//	while (iInputH != 0 || iInputW != 0)
//	{
//		for (iCnt1 = 0; iCnt1 < iInputH; iCnt1++)
//		{
//			for (iCnt2 = 0; iCnt2 < iInputW; iCnt2++)
//			{
//				if (iCnt1 % 2 == 0)	// 偶数行
//				{
//					if (iCnt2 % 2 == 0)
//					{
//						printf("#");
//					}
//					else
//					{
//						printf(".");
//					}
//				}
//				else
//				{
//					if (iCnt2 % 2 == 0)
//					{
//						printf(".");
//					}
//					else
//					{
//						printf("#");
//					}
//				}
//			}
//			printf("\n");
//		}
//
//		printf("\n");
//		scanf("%d %d", &iInputH, &iInputW);
//	}
//
//	return 0;
//}