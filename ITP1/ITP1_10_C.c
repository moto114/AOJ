//#include <stdio.h>
//#include <math.h>
//
//// �f�[�^�̌��Ɗe�f�[�^���^�����A�f�[�^�Z�b�g�̕W���΍����o��
//// �^������f�[�^�̌���0�Ȃ�I��
//int main()
//{
//	int iInputN, iInputS;
//	int iCnt;
//	double dAve;
//	int iSum, iNijouSum;
//
//	scanf("%d", &iInputN);
//
//	while (iInputN != 0)
//	{
//		iSum = 0;
//		iNijouSum = 0;
//		for (iCnt = 0; iCnt < iInputN; iCnt++)
//		{
//			scanf("%d", &iInputS);
//			iSum += iInputS;
//			iNijouSum += pow(iInputS, 2);
//		}
//		// ���̕��ρ]���ς̓��
//		dAve = (double)iSum / iInputN;
//		printf("%.8lf\n", sqrt((double)iNijouSum / iInputN - pow(dAve, 2)));
//
//		scanf("%d", &iInputN);
//	}
//
//	return 0;
//}