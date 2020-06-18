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
//void insert(DICTIONARY* pstDictionary, int* aiHashTable, int iInputQ);
//void get(DICTIONARY* pstDictionary, int* aiHashTable, int iInputQ);
//int iSearchHash(DICTIONARY* pstDictionary, int* aiHashTable, char* iInputKey, int iInputQ);
//
//// キーが文字列、値が整数である辞書に対して以下の操作を行う。ただし、辞書はキーの重複を許さない。
//// ・insert(key, x): 辞書にキーがkeyで値がxである要素を挿入する。
////		キーがkeyである要素が既に存在する場合は値をxに更新する。
//// ・get(key) : キーがkeyである値を出力する。
//// 操作は0,1で与えられ、それぞれinsert,getを表す。
//int main()
//{
//	DICTIONARY* pstDictionary;
//	int* aiHashTable;
//	int iInputQ;
//	int iInputOrder;
//	int iQuestionCnt;
//
//	scanf("%d", &iInputQ);
//
//	// 最大iInputQ個の辞書追加があるのでその分メモリ確保
//	pstDictionary = (DICTIONARY*)malloc(sizeof(DICTIONARY) * iInputQ);
//	aiHashTable = (int*)calloc(iInputQ, sizeof(int));
//
//	for (iQuestionCnt = 0; iQuestionCnt < iInputQ; iQuestionCnt++)
//	{
//		scanf("%d", &iInputOrder);
//		switch (iInputOrder)
//		{
//		case 0:
//			insert(pstDictionary, aiHashTable, iInputQ);
//			break;
//		case 1:
//			get(pstDictionary, aiHashTable, iInputQ);
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
//void insert(DICTIONARY* pstDictionary, int* aiHashTable, int iInputQ)
//{
//	char iInputKey[20];
//	int iInputValue;
//	int iHash;
//
//	scanf("%s %d", iInputKey, &iInputValue);
//
//	// Hash値計算
//	iHash = iSearchHash(pstDictionary, aiHashTable, iInputKey, iInputQ);
//
//	strcpy(pstDictionary[iHash].achKey, iInputKey);
//	pstDictionary[iHash].iValue = iInputValue;
//
//	return;
//}
//
//void get(DICTIONARY* pstDictionary, int* aiHashTable, int iInputQ)
//{
//	char iInputKey[20];
//	int iHash;
//
//	scanf("%s", iInputKey);
//
//	// Hash値計算
//	iHash = iSearchHash(pstDictionary, aiHashTable, iInputKey, iInputQ);
//
//	// 値を出力
//	printf("%d\n", pstDictionary[iHash].iValue);
//
//	return;
//}
//
//// Hash値を計算
//// ハッシュ値はKeyの各文字コードの総和をハッシュテーブルの大きさで割った余り
//int iSearchHash(DICTIONARY* pstDictionary, int* aiHashTable, char* iInputKey, int iInputQ)
//{
//	long long int iHash = 0;
//	int iCnt;
//
//	for (iCnt = 0; iInputKey[iCnt] != '\0'; iCnt++)
//	{
//		iHash = (iHash * (iInputQ / 26)) + iInputKey[iCnt];
//	}
//	iHash = iHash % iInputQ;
//
//	// そのHashがすでに登録済み
//	while(aiHashTable[iHash] == 1)
//	{
//		// 登録されているKeyがiInputKeyと同じ
//		if (strcmp(pstDictionary[iHash].achKey, iInputKey) == 0)
//		{
//			break;
//		}
//		// 衝突した場合インクリメント
//		iHash = (iHash + 1) % iInputQ;
//	}
//
//	aiHashTable[iHash] = 1;
//
//	//printf("%d\n", iHash);
//
//	return iHash;
//}