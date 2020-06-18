//#include <stdio.h>
//#include <string.h>
//
//// 循環文字列sと文字列pが与えられ、sの連続した文字でpが作れるかを判定
//int main()
//{
//	char achInputS[100], achInputP[100];
//	int iLengthS, iLengthP;
//	int iCnt1, iCnt2;
//
//	scanf("%s", achInputS);
//	scanf("%s", achInputP);
//
//	iLengthS = strlen(achInputS);
//	iLengthP = strlen(achInputP);
//
//	// achInputSはループするように添え字を剰余にして先頭から探索
//	for (iCnt1 = 0; iCnt1 < iLengthS; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iLengthP; iCnt2++)
//		{
//			// 異なる文字なら抜ける
//			if (achInputS[(iCnt1 + iCnt2) % iLengthS] != achInputP[iCnt2])
//			{
//				break;
//			}
//		}
//		if (iCnt2 == iLengthP)
//		{
//			printf("Yes\n");
//			return 0;
//		}
//	}
//
//	printf("No\n");
//
//	return 0;
//}