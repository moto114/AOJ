//#include <stdio.h>
////#define scanf scanf_s
//typedef long long int lli;
//
//// ITP1_5_A
//// H * Wの四角形を'#'で出力、ただし中心部分は'.'を出力
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
//
//		for (iCnt1 = 0; iCnt1 < iInputH; iCnt1++)
//		{
//			if (iCnt1 == 0 || iCnt1 == iInputH - 1)	// 一行目と最終行
//			{
//				for (iCnt2 = 0; iCnt2 < iInputW; iCnt2++)
//				{
//					printf("#");
//				}
//				printf("\n");
//			}
//			else	// 中心部分
//			{
//				for (iCnt2 = 0; iCnt2 < iInputW; iCnt2++)
//				{
//					if (iCnt2 == 0 || iCnt2 == iInputW - 1)	// 一つ目と最終列
//					{
//						printf("#");
//					}
//					else
//					{
//						printf(".");
//					}
//				}
//				printf("\n");
//			}
//		}
//
//		printf("\n");
//		scanf("%d %d", &iInputH, &iInputW);
//	}
//
//	return 0;
//}