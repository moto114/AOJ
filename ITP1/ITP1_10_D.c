//#include <stdio.h>
//#include <math.h>
//
//#define INF -1
//
//double dRetMinkowski(int* aiVecX, int* aiVecY, int iVecSize, int iValueP);
//
//// �v�f��N�̓�̃x�N�g�����^�����A�~���R�t�X�L�[����(p=1,2,3,��)�����ꂼ��o��
//int main()
//{
//	int iInputN;
//	double dLength;
//	int* iInputVecX, * iInputVecY;
//	int iCnt;
//
//	scanf("%d", &iInputN);
//
//	// �������m��
//	iInputVecX = (int*)malloc(sizeof(int) * iInputN);
//	iInputVecY = (int*)malloc(sizeof(int) * iInputN);
//
//
//	// X�x�N�g��
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%d", iInputVecX + iCnt);
//	}
//	// Y�x�N�g��
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		scanf("%d", iInputVecY + iCnt);
//	}
//
//	// �����v�Z
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, 1);
//	printf("%.6lf\n", dLength);
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, 2);
//	printf("%.6lf\n", dLength);
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, 3);
//	printf("%.6lf\n", dLength);
//	dLength = dRetMinkowski(iInputVecX, iInputVecY, iInputN, INF);
//	printf("%.6lf\n", dLength);
//
//	free(iInputVecX);
//	free(iInputVecY);
//
//	return 0;
//}
//
//// ����iValueP�Ɋ�Â��ă~���R�t�X�L�[�������v�Z
//double dRetMinkowski(int* aiVecX, int *aiVecY, int iVecSize, int iValueP)
//{
//	int iCnt;
//	double dRetLength = 0;
//	double dAbs;
//
//	// p=���̎�
//	if (iValueP == INF)
//	{
//		for (iCnt = 0; iCnt < iVecSize; iCnt++)
//		{
//			dAbs = abs(*(aiVecX + iCnt) - *(aiVecY + iCnt));
//			if (dRetLength < dAbs)
//			{
//				dRetLength = dAbs;
//			}
//		}
//	}
//	else
//	{
//		for (iCnt = 0; iCnt < iVecSize; iCnt++)
//		{
//			dAbs = abs(*(aiVecX + iCnt) - *(aiVecY + iCnt));
//			dRetLength += pow(dAbs, iValueP);
//		}
//		dRetLength = pow(dRetLength, (double) 1 / iValueP);
//	}
//	
//
//	return dRetLength;
//}