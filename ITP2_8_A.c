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
//// �L�[��������A�l�������ł��鎫���ɑ΂��Ĉȉ��̑�����s���B�������A�����̓L�[�̏d���������Ȃ��B
//// �Einsert(key, x): �����ɃL�[��key�Œl��x�ł���v�f��}������B
////		�L�[��key�ł���v�f�����ɑ��݂���ꍇ�͒l��x�ɍX�V����B
//// �Eget(key) : �L�[��key�ł���l���o�͂���B
//// �����0,1�ŗ^����ꂍ���ꂼ��insert,get��\���B
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
//	// �ő�iInputQ�̎����ǉ�������̂ł��̕��������m��
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
//			// �w�肳�ꂽ����ȊO�͉������Ȃ�
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
//	// �����L�[����������X�V
//	for (iDictionaryCnt = 0; iDictionaryCnt < *iDictionaryNum; iDictionaryCnt++)
//	{
//		if (strcmp(iInputKey, pstDictionary[iDictionaryCnt].achKey) == 0)
//		{
//			pstDictionary[iDictionaryCnt].iValue = iInputValue;
//			return;
//		}
//	}
//
//	// �����L�[���Ȃ�������ǉ�
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
//	// �����L�[����������l���o��
//	for (iDictionaryCnt = 0; iDictionaryCnt < iDictionaryNum; iDictionaryCnt++)
//	{
//		if (strcmp(iInputKey, pstDictionary[iDictionaryCnt].achKey) == 0)
//		{
//			printf("%d\n", pstDictionary[iDictionaryCnt].iValue);
//		}
//	}
//	return;
//}