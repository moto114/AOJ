//#include <stdio.h>
//#include <stdlib.h>
//
//// �X�^�b�N�������A����͈ȉ��̂R�ł��ꂼ��0,1,2�ő���̎�ނ��w��
//// �Epush(t, x) : St �ɐ���x��}������B
//// �Etop(t) : St���玟�Ɏ��o�����v�f��񍐂���B�������ASt����̏ꍇ�͉������Ȃ��B
//// �Epop(t) : St����v�f�����o���폜����B�������ASt����̏ꍇ�͉������Ȃ��B
//
//void push(int* piData, int* iElementNum);
//void top(int* piData, int* iElementNum);
//void pop(int* piData, int* iElementNum);
//
//int main()
//{
//	int iInputN;
//	int iInputQ;
//	int iInputT;
//	int iInputOrder;
//	int** ppiData;
//	int* iElementNum;
//	int iCnt;
//
//	scanf("%d %d", &iInputN, &iInputQ);
//
//	// ������
//	ppiData = (int**)malloc(sizeof(int*) * iInputN);
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		ppiData[iCnt] = (int*)malloc(sizeof(int) * iInputQ);
//	}
//	iElementNum = (int*)calloc(iInputN, sizeof(int));
//
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		scanf("%d %d", &iInputOrder, &iInputT);
//
//		switch (iInputOrder)
//		{
//		case 0:
//			push(ppiData[iInputT], &iElementNum[iInputT]);
//			break;
//		case 1:
//			top(ppiData[iInputT], &iElementNum[iInputT]);
//			break;
//		case 2:
//			pop(ppiData[iInputT], &iElementNum[iInputT]);
//			break;
//		default:
//			break;
//		}
//	}
//
//	return 0;
//}
//
//// �X�^�b�N�ɐ����}��
//void push(int* piData, int* iElementNum)
//{
//	scanf("%d", &piData[*iElementNum]);
//	(*iElementNum)++;
//
//	return;
//}
//
//// ���Ɏ��o�����v�f���o��
//void top(int* piData, int* iElementNum)
//{
//	if (*iElementNum <= 0)
//	{
//		return;
//	}
//	printf("%d\n", piData[(*iElementNum) - 1]);
//	return;
//}
//
//// �v�f�����o���č폜
//void pop(int* piData, int* iElementNum)
//{
//	if (*iElementNum <= 0)
//	{
//		return;
//	}
//	(*iElementNum)--;
//
//	return;
//}