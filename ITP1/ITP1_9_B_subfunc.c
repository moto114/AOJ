//#include <stdio.h>
//
//typedef struct list {
//	char chData;
//	struct list* pstNext;
//}LIST;
//
//void vdSearchAddress(int iValue, LIST** ppstCurrent);
//
//// ������T���A�擪�������h�܂ł̕����𖖔��ɘA������V���b�t����M��J��Ԃ��čŌ�ɏo��
//// "abcde"��h=3�ŃV���b�t�������"deabc"�ƂȂ�
//// �A�h���X�T���͊֐���p���čs��
//int main()
//{
//	int iInputM, iInputH;
//	LIST* pstHead;		// �\���̔z��̐擪�A�h���X
//	LIST* pstCurrent;	// ���݌��Ă���\���̂̃A�h���X
//	LIST astList[200];
//	char achInput[200];
//	int iCnt, iCnt2;
//	int iInputLength;
//
//	// ���s�����܂œǂݍ���(�����񒷎擾)
//	scanf("%s", achInput);
//	while (achInput[0] != '-')
//	{
//		// ���X�g�̐擪�A�h���X���i�[
//		pstHead = &astList[0];
//
//		iInputLength = 0;
//		while (achInput[iInputLength] != '\0')
//		{
//			// �ꕶ���ڂ�'-'�Ȃ�I��
//			astList[iInputLength].chData = achInput[iInputLength];
//			astList[iInputLength].pstNext = &astList[iInputLength + 1];
//			iInputLength++;
//		}
//
//		// �����̃|�C���^��NULL
//		if (iInputLength > 0) {
//			astList[iInputLength - 1].pstNext = NULL;
//		}
//		else
//		{
//			// 1���������͂���Ă��Ȃ��Ȃ�I��
//			pstHead = NULL;
//			return 0;
//		}
//
//		scanf("%d", &iInputM);
//
//		// �V���b�t���i���X�g�̃|�C���^�̕t���ւ��j
//		for (iCnt = 0; iCnt < iInputM; iCnt++)
//		{
//			scanf("%d", &iInputH);
//
//			// �����̃|�C���^��擪�ɕt���ς�
//			pstCurrent = pstHead;
//			vdSearchAddress(iInputLength, &pstCurrent);
//			pstCurrent->pstNext = pstHead;
//
//			// �擪�|�C���^��t���ς�
//			pstCurrent = pstHead;
//			vdSearchAddress(iInputH, &pstCurrent);
//			pstHead = pstCurrent->pstNext;
//
//			// ������NULL
//			pstCurrent = pstHead;
//			vdSearchAddress(iInputLength, &pstCurrent);
//			pstCurrent->pstNext = NULL;
//		}
//
//
//		// ���̃|�C���^��NULL�ɂȂ�܂Ő擪���珇�ɂ��ǂ��ďo��
//		pstCurrent = pstHead;
//		while (pstCurrent->pstNext != NULL)
//		{
//			printf("%c", pstCurrent->chData);
//			pstCurrent = pstCurrent->pstNext;
//		}
//		printf("%c\n", pstCurrent->chData);
//
//		scanf("%s", achInput);
//	}
//
//	return 0;
//}
//
//// ppstCurrent�̐�̃|�C���^��iValue�Ԗڂ̃��X�g�̃A�h���X�Z�b�g
//void vdSearchAddress(int iValue, LIST** ppstCurrent)
//{
//	while (iValue > 1)
//	{
//		//printf("%c", (*ppstCurrent)->chData);
//		*ppstCurrent = (*ppstCurrent)->pstNext;
//		iValue--;
//	}
//	return;
//}
//
