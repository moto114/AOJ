//#include <stdio.h>
//
//// 入力文字列の大文字小文字を入れ替えて出力
//int main()
//{
//	char achInputStr[1200] = { 0 };
//	int iDiff = 'a' - 'A';
//	int iCnt;
//
//	// 改行以外を読み込み
//	scanf("%[^\n]", achInputStr);
//
//	for (iCnt = 0; achInputStr[iCnt] != '\0'; iCnt++)
//	{
//		if (achInputStr[iCnt] >= 'A' && achInputStr[iCnt] <= 'Z')	// 大文字
//		{
//			printf("%c", achInputStr[iCnt] + iDiff);
//		}
//		else if (achInputStr[iCnt] >= 'a' && achInputStr[iCnt] <= 'z')	// 小文字
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