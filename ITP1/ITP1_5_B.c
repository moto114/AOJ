//#include <stdio.h>
////#define scanf scanf_s
//typedef long long int lli;
//
//// ITP1_5_A
//// H * W�̎l�p�`��'#'�ŏo�́A���������S������'.'���o��
//// H=0,W=0�ŏI��
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
//			if (iCnt1 == 0 || iCnt1 == iInputH - 1)	// ��s�ڂƍŏI�s
//			{
//				for (iCnt2 = 0; iCnt2 < iInputW; iCnt2++)
//				{
//					printf("#");
//				}
//				printf("\n");
//			}
//			else	// ���S����
//			{
//				for (iCnt2 = 0; iCnt2 < iInputW; iCnt2++)
//				{
//					if (iCnt2 == 0 || iCnt2 == iInputW - 1)	// ��ڂƍŏI��
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