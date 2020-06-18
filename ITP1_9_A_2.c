//#include <stdio.h>
//#include <string.h>
//
//void vdToLower(char* chText);
//
//// 文章Tの中に単語Wがいくつ含まれるかを出力
////// "END_OF_TEXT"を読み込んだら終了
//int main()
//{
//	char achInputWord[10], achInputText[1000];
//	char achEnd[] = "END_OF_TEXT";
//	int iLengthWord, iLengthText;
//	int iCnt1, iCnt2;
//	int iAns = 0;
//
//	scanf("%s\n", achInputWord);
//	scanf("%[^\n]%*1[\n]", achInputText);	// 1行読み込みできない？
//
//	// 先頭から順に比較、Wの長さを考慮してTの探索位置を決定
//	while (strcmp(achEnd, achInputText) != 0)
//	{
//		iLengthWord = strlen(achInputWord);
//		iLengthText = strlen(achInputText);
//
//		// テキスト小文字化
//		vdToLower(achInputText);
//
//		// 文字列比較
//		for (iCnt1 = 0; iCnt1 < iLengthText - iLengthWord; iCnt1++)
//		{
//			for (iCnt2 = 0; iCnt2 < iLengthWord; iCnt2++)
//			{
//				if (achInputText[iCnt1 + iCnt2] != achInputWord[iCnt2])
//				{
//					break;
//				}
//			}
//			if (iCnt2 == iLengthWord)
//			{
//				iAns++;
//			}
//		}
//
//		// 次の行読み込み
//		scanf("%[^\n]%*1[\n]", achInputText);
//	}
//	printf("%d\n", iAns);
//
//	return 0;
//}
//
//// 入力テキストを小文字化
//void vdToLower(char* chText)
//{
//	int iLenghtT = strlen(chText);
//	int iCnt;
//	int iDiff = 'a' - 'A';
//
//	for (iCnt = 0; iCnt < iLenghtT; iCnt++)
//	{
//		if ('A' <= chText[iCnt] && chText[iCnt] <= 'Z')
//		{
//			chText[iCnt] += iDiff;
//		}
//
//	}
//	return;
//}