//#include <stdio.h>
//#include <stdlib.h>
//
//typedef long long int lli;
//
//void pushBack(lli** pplliData, int* piRecordCnt);
//void dump(lli** pplliData, int* piRecordCnt);
//void clear(int* piRecordCnt);
//
//// n�̉ϒ��z��Ai(i=0,1,...,n-1)�ɑ΂��Ĉȉ��̑�����s���B
//// �EpushBack(t, x): At�̖����ɐ���x��}������B
//// �Edump(t): At�̑S�Ă̗v�f���o�͂���B
//// �Eclear(t): At����ɂ���B�������AAt����̏ꍇ�͉������Ȃ��B
//// ����͐����ŗ^�����A�ォ��0,1,2�Ŏw�肳���B
//int main()
//{
//	lli** pplliData;	//	�S�z��f�[�^
//	int iInputN, iInputQ;
//	int iInputOrder;	// ���ߔԍ�
//	int* piRecordCnt;	// �e�z��̗v�f��
//	int iCnt;
//
//	scanf("%d %d", &iInputN, &iInputQ);
//
//	// iInputN�̃|�C���^�z����������m��
//	pplliData = (lli**)malloc(sizeof(lli*) * iInputN);
//
//	// ���ꂼ��̃|�C���^�z��iInputQ���̃������m��
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		pplliData[iCnt] = (lli*)malloc(sizeof(lli) * iInputQ);
//	}
//
//	// �������m�ۂ�0������
//	piRecordCnt = (int*)calloc(iInputN, sizeof(int));
//
//	// ��������
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		scanf("%d", &iInputOrder);
//
//		switch (iInputOrder)
//		{
//		case 0:
//			pushBack(pplliData, piRecordCnt);
//			break;
//		case 1:
//			dump(pplliData, piRecordCnt);
//			break;
//		case 2:
//			clear(piRecordCnt);
//			break;
//		default:
//			break;
//		}
//	}
//
//	// ���������
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		free(pplliData[iCnt]);
//	}
//	free(pplliData);
//	free(piRecordCnt);
//
//
//	return 0;
//}
//
//// iInputT�Ԗڂ̔z��̖����ɗv�f��}��
//void pushBack(lli** pplliData, int* piRecordCnt)
//{
//	int iInputT;
//	
//	scanf("%d", &iInputT);
//
//	scanf("%lld", &(pplliData[iInputT][piRecordCnt[iInputT]]));
//	(piRecordCnt[iInputT])++;
//
//	return;
//}
//
//// iInputT�Ԗڂ̔z��̗v�f��S�ĕ\��
//void dump(lli** pplliData, int* piRecordCnt)
//{
//	int iInputT;
//	int iCnt;
//
//	scanf("%d", &iInputT);
//
//	for (iCnt = 0; iCnt < piRecordCnt[iInputT]; iCnt++)
//	{
//		// �����͌��ɋ󔒂Ȃ�
//		if (iCnt != piRecordCnt[iInputT] - 1)
//		{
//			printf("%lld ", pplliData[iInputT][iCnt]);
//		}
//		else
//		{
//			printf("%lld", pplliData[iInputT][iCnt]);
//		}
//	}
//
//	printf("\n");
//
//	return;
//}
//
//// iInputT�Ԗڂ̔z�����ɂ���
//void clear(int* piRecordCnt)
//{
//	int iInputT;
//	scanf("%d", &iInputT);
//
//	// �z��̗v�f����0�ɂ��邱�Ƃŋ^���I�ɗv�f�N���A
//	(piRecordCnt[iInputT]) = 0;
//
//	return;
//}