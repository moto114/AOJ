//#include <stdio.h>
//
//// 入力文字列に含まれているアルファベット数を表示一覧にして表示
//int main()
//{
//	// 'a': 0, 'b': 1,...に対応,大文字は小文字として扱って格納
//	int aiAlphaList[26];
//	char achInput[1200];
//	int iCnt;
//	int iIndex;	// 格納先のインデックス
//
//	// 初期化
//	for (iCnt = 0; iCnt < 26; iCnt++)
//	{
//		aiAlphaList[iCnt] = 0;
//	}
//
//	// EOFまで読み込み
//	while(fgets(achInput, 1200, stdin) != NULL)
//	{
//		for (iCnt = 0; achInput[iCnt] != '\0' ; iCnt++)
//		{
//			if ('a' <= achInput[iCnt] && achInput[iCnt] <= 'z')		// 小文字
//			{
//				iIndex = achInput[iCnt] - 'a';
//				aiAlphaList[iIndex]++;
//			}
//			else if ('A' <= achInput[iCnt] && achInput[iCnt] <= 'Z')	// 大文字
//			{
//				iIndex = achInput[iCnt] - 'A';
//				aiAlphaList[iIndex]++;
//			}
//			else
//			{
//				// アルファベット以外は読み飛ばす
//			}
//		}
//	}
//
//	// カウント結果出力
//	for (iCnt = 0; iCnt < 26; iCnt++)
//	{
//		printf("%c : %d\n", (iCnt + 'a'), aiAlphaList[iCnt]);
//	}
//
//	return 0;
//}