//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Tree
//{
//	struct Tree* left;
//	struct Tree* right;
//	char achKey[20];
//	int iValue;
//}TREE;
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
//	TREE* pstTree;
//	TREE* pstRoot = NULL;
//	TREE* pstCurrent;
//	int iInputQ;
//	int iInputOrder;
//	int iQuestionCnt;
//
//	scanf("%d", &iInputQ);
//
//	// 最大iInputQ個の辞書追加があるのでその分メモリ確保
//	pstTree = (TREE*)malloc(sizeof(TREE) * iInputQ);
//
//	for (iQuestionCnt = 0; iQuestionCnt < iInputQ; iQuestionCnt++)
//	{
//		scanf("%d", &iInputOrder);
//		switch (iInputOrder)
//		{
//		case 0:
//			insert(pstTree, );
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
//void insert(TREE* pstCurrent)
//{
//	char iInputKey[20];
//	int iInputValue;
//	int iHash;
//
//	scanf("%s %d", iInputKey, &iInputValue);
//
//	// Hash値計算
//	while (pstCurrent->left != NULL && pstCurrent->right != NULL)
//	{
//		// 左の子がなく、
//		if(pstCurrent->left != NULL && strcmp(pstCurrent->achKey, )
//	}
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
//int iSearchTree(TREE* pstTree, char* iInputKey, int iInputQ)
//{
//
//	while()
//
//}