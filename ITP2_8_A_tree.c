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
//// �L�[��������A�l�������ł��鎫���ɑ΂��Ĉȉ��̑�����s���B�������A�����̓L�[�̏d���������Ȃ��B
//// �Einsert(key, x): �����ɃL�[��key�Œl��x�ł���v�f��}������B
////		�L�[��key�ł���v�f�����ɑ��݂���ꍇ�͒l��x�ɍX�V����B
//// �Eget(key) : �L�[��key�ł���l���o�͂���B
//// �����0,1�ŗ^�����A���ꂼ��insert,get��\���B
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
//	// �ő�iInputQ�̎����ǉ�������̂ł��̕��������m��
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
//			// �w�肳�ꂽ����ȊO�͉������Ȃ�
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
//	// Hash�l�v�Z
//	while (pstCurrent->left != NULL && pstCurrent->right != NULL)
//	{
//		// ���̎q���Ȃ��A
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
//	// Hash�l�v�Z
//	iHash = iSearchHash(pstDictionary, aiHashTable, iInputKey, iInputQ);
//
//	// �l���o��
//	printf("%d\n", pstDictionary[iHash].iValue);
//
//	return;
//}
//
//// Hash�l���v�Z
//// �n�b�V���l��Key�̊e�����R�[�h�̑��a���n�b�V���e�[�u���̑傫���Ŋ������]��
//int iSearchTree(TREE* pstTree, char* iInputKey, int iInputQ)
//{
//
//	while()
//
//}