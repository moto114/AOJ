//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int iInputN;
//	char achHanakoCard[100], achTaroCard[100];
//	int iCnt;
//	int iPointHanako = 0, iPointTaro = 0;
//	int iCmpResult;
//
//
//	scanf("%d", &iInputN);
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%s %s", achTaroCard, achHanakoCard);
//
//		// •¶Žš—ñ”äŠr
//		iCmpResult = strcmp(achTaroCard, achHanakoCard);
//		if (iCmpResult > 0)
//		{
//			iPointTaro += 3;
//		}
//		else if (iCmpResult < 0)
//		{
//			iPointHanako += 3;
//		}
//		else
//		{
//			iPointTaro++;
//			iPointHanako++;
//		}
//	}
//
//	printf("%d %d\n", iPointTaro, iPointHanako);
//
//	return 0;
//}