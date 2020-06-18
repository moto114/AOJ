//#include <stdio.h>
//#include <stdlib.h>
//
//typedef long long int lli;
//
//typedef struct
//{
//	lli iValueX;
//	lli iValueY;
//}DATA;
//
//void vdBubbleSortX(DATA* pstData, int iInputN);
//void vdBubbleSortY(DATA* pstData, int iInputN);
//void vdQuickSortX(DATA* pstData, int iLeftIdx, int iRightIdx);
//void vdQuickSortY(DATA* pstData, int iLeftIdx, int iRightIdx);
//void vdSwapStruct(DATA* pstData1, DATA* pstData2);
//
//
//// N�̓_���ȉ��̗D�揇�ŏo��
//// 1. x���������_���ɏo�͂���
//// 2. x�������ꍇ�́Ay���������_���ɏo�͂���
//int main()
//{
//	int iInputN;
//	DATA* pstData;
//	int iCnt;
//
//	scanf("%d", &iInputN);
//
//	pstData = (DATA*)malloc(sizeof(DATA) * iInputN);
//	if (pstData == NULL)
//	{
//		// �������m�ێ��s
//		return -1;
//	}
//
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%lld %lld", &pstData[iCnt].iValueX, &pstData[iCnt].iValueY);
//	}
//	
//	// �܂�y�Ń\�[�g
//	//vdBubbleSortY(pstData, iInputN);
//	vdQuickSortY(pstData, 0, iInputN - 1);
//
//	//printf("\n");
//	//for (iCnt = 0; iCnt < iInputN; iCnt++)
//	//{
//	//	printf("%lld %lld\n", pstData[iCnt].iValueX, pstData[iCnt].iValueY);
//	//}
//	//printf("\n");
//
//	// ����x�Ń\�[�g
//	vdBubbleSortX(pstData, iInputN);
//	//vdQuickSortX(pstData, 0, iInputN - 1);
//
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		printf("%lld %lld\n", pstData[iCnt].iValueX, pstData[iCnt].iValueY);
//	}
//
//	return 0;
//}
//
//void vdBubbleSortX(DATA* pstData, int iInputN)
//{
//	int iCnt1, iCnt2;
//	DATA pstDataTmp;
//
//	// �o�u���\�[�g
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputN - iCnt1 - 1; iCnt2++)
//		{
//			if (pstData[iCnt2].iValueX > pstData[iCnt2 + 1].iValueX)
//			{
//				pstDataTmp = pstData[iCnt2];
//				pstData[iCnt2] = pstData[iCnt2 + 1];
//				pstData[iCnt2 + 1] = pstDataTmp;
//			}
//		}
//	}
//
//	return;
//}
//
//void vdBubbleSortY(DATA* pstData, int iInputN)
//{
//	int iCnt1, iCnt2;
//	DATA pstDataTmp;
//
//	// �o�u���\�[�g
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputN - iCnt1 - 1; iCnt2++)
//		{
//			if (pstData[iCnt2].iValueY > pstData[iCnt2 + 1].iValueY)
//			{
//				pstDataTmp = pstData[iCnt2];
//				pstData[iCnt2] = pstData[iCnt2 + 1];
//				pstData[iCnt2 + 1] = pstDataTmp;
//			}
//		}
//	}
//	return;
//}
//
//void vdQuickSortX(DATA* pstData, int iLeftIdx, int iRightIdx)
//{
//	int iRefIdx;
//	int iLeft2Right;
//	int iRight2Left;
//
//	// ��l�𒆐S�̒l�ɐݒ�
//	iRefIdx = (iRightIdx + iLeftIdx) / 2;
//
//	iLeft2Right = iLeftIdx;
//	iRight2Left = iRightIdx;
//
//	if (iLeftIdx < iRightIdx)
//	{
//
//
//		// ��l�����ڂɍ����ƉE���ɕ���
//		// �����猩�Ă�������l���傫���l��
//		// �E���猩�Ă�������l��菬���������ւ�
//		while (iLeft2Right < iRight2Left)
//		{
//			// ������T��
//			while (pstData[iLeft2Right].iValueX < pstData[iRefIdx].iValueX)
//			{
//				iLeft2Right++;
//			}
//
//			// �E����T��
//			while (pstData[iRight2Left].iValueX > pstData[iRefIdx].iValueX)
//			{
//				iRight2Left--;
//			}
//
//			// ���łɓ���ւ��ς݂ł͂Ȃ��Ȃ猩�������v�f�����ւ�
//			if (iLeft2Right < iRight2Left)
//			{
//				//printf("Check1: %d %d\n", iLeft2Right, iRight2Left);
//				vdSwapStruct(&pstData[iLeft2Right], &pstData[iRight2Left]);
//				iLeft2Right++;
//				iRight2Left--;
//			}
//		}
//
//		// �������������ōċA�I�ɃN�C�b�N�\�[�g
//		vdQuickSortX(pstData, iLeftIdx, iRefIdx - 1);
//		// �������������ōċA�I�ɃN�C�b�N�\�[�g
//		vdQuickSortX(pstData, iRefIdx + 1, iRightIdx);
//	}
//
//	return;
//}
//
//void vdQuickSortY(DATA* pstData, int iLeftIdx, int iRightIdx)
//{
//	int iRefIdx;
//	int iLeft2Right;
//	int iRight2Left;
//
//	// ��l�𒆐S�̒l�ɐݒ�
//	iRefIdx = iRightIdx;
//
//	iLeft2Right = iLeftIdx;
//	iRight2Left = iRightIdx;
//
//	if (iLeftIdx < iRightIdx)
//	{
//		// ��l�����ڂɍ����ƉE���ɕ���
//		// �����猩�Ă�������l���傫���l��
//		// �E���猩�Ă�������l��菬���������ւ�
//		while (iLeft2Right < iRight2Left)
//		{
//			// ������T��
//			while (pstData[iLeft2Right].iValueY < pstData[iRefIdx].iValueY)
//			{
//				iLeft2Right++;
//			}
//
//			// �E����T��
//			while (pstData[iRight2Left].iValueY > pstData[iRefIdx].iValueY
//				&& iLeft2Right < iRight2Left)
//			{
//				iRight2Left--;
//			}
//
//			// ���łɓ���ւ��ς݂ł͂Ȃ��Ȃ猩�������v�f�����ւ�
//			if (iLeft2Right < iRight2Left)
//			{
//				//printf("Check1: %d %d\n", iLeft2Right, iRight2Left);
//				vdSwapStruct(&pstData[iLeft2Right], &pstData[iRight2Left]);
//				//iLeft2Right++;
//				//iRight2Left--;
//			}
//		}
//
//		vdSwapStruct(&pstData[iLeft2Right], &pstData[iRight2Left]);
//
//		// �������������ōċA�I�ɃN�C�b�N�\�[�g
//		if (iLeftIdx < iLeft2Right - 1)
//		{
//			vdQuickSortY(pstData, iLeftIdx, iLeft2Right - 1);
//		}
//		
//		// �������������ōċA�I�ɃN�C�b�N�\�[�g
//		if (iLeft2Right + 1 < iRightIdx)
//		{
//			vdQuickSortY(pstData, iLeft2Right + 1, iRightIdx);
//		}
//	}
//
//	return;
//}
//
//void vdSwapStruct(DATA* pstData1, DATA* pstData2)
//{
//	DATA pstDataTmp;
//
//	pstDataTmp = *pstData1;
//	*pstData1 = *pstData2;
//	*pstData2 = pstDataTmp;
//
//	return;
//}
