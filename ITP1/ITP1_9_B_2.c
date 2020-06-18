//#include <stdio.h>
//#include <string.h>
//
//
//// 文字列Tを、先頭から入力hまでの文字を末尾に連結するシャッフルをM回繰り返して最後に出力
//// "abcde"をh=3でシャッフルすると"deabc"となる
//int main()
//{
//	char chInputText[200];
//	char chText[200];	// シャッフル後
//	int iTextLength;
//	int iInputM, iInputH;
//	int iCnt;
//
//	scanf("%s", chInputText);
//
//	while (strcmp(chInputText, "-") != 0)
//	{
//		iTextLength = strlen(chInputText);
//		scanf("%d", &iInputM);
//
//		// シャッフル処理
//		for (iCnt = 0; iCnt < iInputM; iCnt++)
//		{
//			scanf("%d", &iInputH);
//			strncpy(chText, chInputText + iInputH, iTextLength - iInputH);
//			// strncpyは'\0'まで代入しないので、自分で代入
//			chText[iTextLength - iInputH] = '\0';
//			strncat(chText, chInputText, iInputH);
//			strcpy(chInputText, chText);
//		}
//
//		printf("%s\n", chInputText);
//
//		scanf("%s", chInputText);
//	}
//
//}