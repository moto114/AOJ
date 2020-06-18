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
//// �L�[��������A�l�������ł��鎫���ɑ΂��Ĉȉ��̑�����s���B�������A�����̓L�[�̏d���������Ȃ��B
//// �Einsert(key, x): �����ɃL�[��key�Œl��x�ł���v�f��}������B
////		�L�[��key�ł���v�f�����ɑ��݂���ꍇ�͒l��x�ɍX�V����B
//// �Eget(key) : �L�[��key�ł���l���o�͂���B
//// �����0,1�ŗ^�����A���ꂼ��insert,get��\���B
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
//	// �ő�iInputQ�̎����ǉ�������̂ł��̕��������m��
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
//			// �w�肳�ꂽ����ȊO�͉������Ȃ�
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
//	// Hash�l�v�Z
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
//	// ����Hash�����łɓo�^�ς�
//	while(aiHashTable[iHash] == 1)
//	{
//		// �o�^����Ă���Key��iInputKey�Ɠ���
//		if (strcmp(pstDictionary[iHash].achKey, iInputKey) == 0)
//		{
//			break;
//		}
//		// �Փ˂����ꍇ�C���N�������g
//		iHash = (iHash + 1) % iInputQ;
//	}
//
//	aiHashTable[iHash] = 1;
//
//	//printf("%d\n", iHash);
//
//	return iHash;
//}