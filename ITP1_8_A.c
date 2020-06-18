//#include <stdio.h>
//
//// “ü—Í•¶Žš—ñ‚Ì‘å•¶Žš¬•¶Žš‚ð“ü‚ê‘Ö‚¦‚Äo—Í
//int main()
//{
//	char achInputStr[1200] = { 0 };
//	int iDiff = 'a' - 'A';
//	int iCnt;
//
//	// ‰üsˆÈŠO‚ð“Ç‚Ýž‚Ý
//	scanf("%[^\n]", achInputStr);
//
//	for (iCnt = 0; achInputStr[iCnt] != '\0'; iCnt++)
//	{
//		if (achInputStr[iCnt] >= 'A' && achInputStr[iCnt] <= 'Z')	// ‘å•¶Žš
//		{
//			printf("%c", achInputStr[iCnt] + iDiff);
//		}
//		else if (achInputStr[iCnt] >= 'a' && achInputStr[iCnt] <= 'z')	// ¬•¶Žš
//		{
//			printf("%c", achInputStr[iCnt] - iDiff);
//		}
//		else
//		{
//			printf("%c", achInputStr[iCnt]);
//		}
//		
//	}
//	printf("\n");
//
//	return 0;
//}