//#include <stdio.h>
//#include <stdlib.h>
//
//typedef long long int lli;
//
//void pushBack(lli* alliData, int* piRecordCnt);
//void randomAccess(lli* alliData);
//void popBack(int* piRecordCnt);
//
//// �ϒ��z��A�ɑ΂��Ĉȉ��̑�����s���B
//// �EpushBack(x): A�̖����ɐ���x��}������
//// �ErandomAccess(p) :A��q�Ԗڂ̗v�f�̒l���o�͂���
//// �EpopBack() : A�̖����̗v�f���폜����
//// ����͐����ŗ^�����A�ォ��0,1,2�Ŏw�肳���B
//// �܂��A����z��ɑ΂���randomAccess��popBuck����͍s���Ȃ��B
//int main()
//{
//
//	lli* alliData;
//	int iInputQ;
//	int iInputOrder;	// ���ߔԍ�
//	int iRecordCnt=0;
//	int iCnt;
//
//	scanf("%d", &iInputQ);
//
//	// �ő�v�f��iInputQ�̔z����������m��
//	alliData = (lli*)malloc(sizeof(lli) * iInputQ);
//
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		scanf("%d", &iInputOrder);
//
//		switch (iInputOrder)
//		{
//		case 0:
//			pushBack(alliData, &iRecordCnt);
//			break;
//		case 1:
//			randomAccess(alliData, &iRecordCnt);
//			break;
//		case 2:
//			popBack(&iRecordCnt);
//			break;
//		default:
//			break;
//		}
//	}
//
//	free(alliData);
//
//	return 0;
//}
//
//// �����ɗv�f��}��
//void pushBack(lli* alliData, int* piRecordCnt)
//{
//	scanf("%lld", &alliData[*piRecordCnt]);
//	(*piRecordCnt)++;
//
//	return;
//}
//
//// iValue�Ԗڂ̗v�f���o��
//void randomAccess(lli* alliData)
//{
//	int iInputIdx;
//
//	scanf("%d", &iInputIdx);
//
//	printf("%lld\n", alliData[iInputIdx]);
//
//	return;
//}
//
//// �������폜
//void popBack(int* piRecordCnt)
//{
//	// �z��̗v�f�����f�N�������g���邱�Ƃŋ^���I�ɖ����폜
//	(*piRecordCnt)--;
//
//	return;
//}