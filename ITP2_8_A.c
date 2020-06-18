//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct
//{
//	char achKey[20];
//	int iValue;
//}DICTIONARY;
//
//void insert(DICTIONARY* pstDictionary, int* iDictionaryNum);
//void get(DICTIONARY* pstDictionary, int iDictionaryNum);
//
//// キーが文字列、値が整数である辞書に対して以下の操作を行う。ただし、辞書はキーの重複を許さない。
//// ・insert(key, x): 辞書にキーがkeyで値がxである要素を挿入する。
////		キーがkeyである要素が既に存在する場合は値をxに更新する。
//// ・get(key) : キーがkeyである値を出力する。
//// 操作は0,1で与えられｍそれぞれinsert,getを表す。
//int main()
//{
//	DICTIONARY* pstDictionary;
//	int iDictionaryNum = 0;
//	int iInputQ;
//	int iInputOrder;
//	int iQuestionCnt;
//
//	scanf("%d", &iInputQ);
//
//	// 最大iInputQ個の辞書追加があるのでその分メモリ確保
//	pstDictionary = (DICTIONARY*)malloc(sizeof(DICTIONARY) * iInputQ);
//
//	for (iQuestionCnt = 0; iQuestionCnt < iInputQ; iQuestionCnt++)
//	{
//		scanf("%d", &iInputOrder);
//		switch (iInputOrder)
//		{
//		case 0:
//			insert(pstDictionary, &iDictionaryNum);
//			break;
//		case 1:
//			get(pstDictionary, iDictionaryNum);
//			break;
//		default:
//			// 指定された操作以外は何もしない
//			break;
//		}
//	}
//
//	return 0;
//}
//
//void insert(DICTIONARY* pstDictionary, int* iDictionaryNum)
//{
//	char iInputKey[20];
//	int iInputValue;
//	int iDictionaryCnt;
//
//	scanf("%s %d", iInputKey, &iInputValue);
//
//	// 同じキーがあったら更新
//	for (iDictionaryCnt = 0; iDictionaryCnt < *iDictionaryNum; iDictionaryCnt++)
//	{
//		if (strcmp(iInputKey, pstDictionary[iDictionaryCnt].achKey) == 0)
//		{
//			pstDictionary[iDictionaryCnt].iValue = iInputValue;
//			return;
//		}
//	}
//
//	// 同じキーがなかったら追加
//	if (iDictionaryCnt == *iDictionaryNum)
//	{
//		strcpy(pstDictionary[*iDictionaryNum].achKey, iInputKey);
//		pstDictionary[*iDictionaryNum].iValue = iInputValue;
//		(*iDictionaryNum)++;
//	}
//
//	return;
//}
//
//void get(DICTIONARY* pstDictionary, int iDictionaryNum)
//{
//	char iInputKey[20];
//	int iDictionaryCnt;
//
//	scanf("%s", iInputKey);
//
//	// 同じキーがあったら値を出力
//	for (iDictionaryCnt = 0; iDictionaryCnt < iDictionaryNum; iDictionaryCnt++)
//	{
//		if (strcmp(iInputKey, pstDictionary[iDictionaryCnt].achKey) == 0)
//		{
//			printf("%d\n", pstDictionary[iDictionaryCnt].iValue);
//		}
//	}
//	return;
//}