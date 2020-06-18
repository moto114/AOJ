//#include <stdio.h>
//#include <string.h>
//
//void vdToLower(char* chText);
//
//// 文章Tの中に単語Wがいくつ含まれるかを出力
//// 単語レベルで比較なので、1単語ずつ読み取り
//// "END_OF_TEXT"を読み込んだら終了
//int main()
//{
//	char achInputW[10], achInputT[1000];
//	char achEnd[] = "END_OF_TEXT";
//	int iLengthW, iLengthT;
//	int iAns = 0;
//
//	scanf("%s\n", achInputW);
//	scanf("%s", achInputT);
//
//	// 先頭から順に比較、Wの長さを考慮してTの探索位置を決定
//	while (strcmp(achEnd, achInputT) != 0)
//	{
//		iLengthW = strlen(achInputW);
//		iLengthT = strlen(achInputT);
//
//		// 文字サイズが異なるなら次の単語
//		if (iLengthW != iLengthT)
//		{
//			scanf("%s", achInputT);
//			continue;
//		}
//
//		// 小文字化
//		vdToLower(achInputT);
//
//		// 文字列比較
//		if (strcmp(achInputW, achInputT) == 0)
//		{
//			iAns++;
//		}
//
//		scanf("%s", achInputT);
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
//}