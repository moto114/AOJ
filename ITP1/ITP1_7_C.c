//#include <stdio.h>
//
////�\�v�Z���s���v���O����
//// �\�̍s��r�Ɨ�c�Ar �~ c �̗v�f�����\��ǂݍ���ŁA
//// �e�s�Ɨ�̍��v��}�������V�����\���o�͂���
//int main()
//{
//	int iInputR, iInputC;
//	int iInputValue;
//	int iSum;
//	int iCnt1, iCnt2;
//	int* aiSumCol;		// �e��̍��v
//
//	scanf("%d %d", &iInputR, &iInputC);
//
//	// �e�s�̍��v�̍��v���K�v�Ȃ̂Ł{�P���ă������m��
//	aiSumCol = (int*)malloc(sizeof(int) * (iInputC + 1));
//
//	// ���v������
//	for (iCnt1 = 0; iCnt1 < iInputC + 1; iCnt1++)
//	{
//		aiSumCol[iCnt1] = 0;
//	}
//
//	// �e�s�̍��v�Ɗe��̍��v���v�Z
//	// �󂯎�������͂͂��̂܂ܕ\��
//	for (iCnt1 = 0; iCnt1 < iInputR; iCnt1++)
//	{
//		iSum = 0;
//		for (iCnt2 = 0; iCnt2 < iInputC; iCnt2++)
//		{
//			scanf("%d", &iInputValue);
//			printf("%d ", iInputValue);
//			aiSumCol[iCnt2] += iInputValue;
//			iSum += iInputValue;
//		}
//		aiSumCol[iCnt2] += iSum;
//		printf("%d\n", iSum);
//	}
//
//	// �ŏI�s�\��
//	for (iCnt1 = 0; iCnt1 < iInputC; iCnt1++)
//	{
//		printf("%d ", aiSumCol[iCnt1]);
//	}
//	printf("%d\n", aiSumCol[iCnt1]);
//
//	return 0;
//}