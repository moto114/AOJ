//#include <stdio.h>
//
//// �s��A�ƃx�N�g��B��ǂݍ���ŁAA*B=C���v�Z����C���o��
//// ���͂Ƃ��āAA�̑傫���ƁAA,B�̒l���󂯎��
//int main()
//{
//	int iCnt1, iCnt2;
//	int iInputN, iInputM;
//	int** aiArrayA;
//	int* aiVecB;
//	int* aiVecC;
//
//	scanf("%d %d", &iInputN, &iInputM);
//
//	aiArrayA = (int** ) malloc(sizeof(int *) * iInputN);
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		aiArrayA[iCnt1] = (int* ) malloc(sizeof(int) * iInputM);
//	}
//
//	aiVecB = (int*) malloc(sizeof(int) * iInputM);
//	aiVecC = (int*) malloc(sizeof(int) * iInputM);
//	
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iInputM; iCnt2++)
//		{
//			scanf("%d", &aiArrayA[iCnt1][iCnt2]);
//		}
//	}
//
//	for (iCnt1 = 0; iCnt1 < iInputM; iCnt1++)
//	{
//		scanf("%d", &aiVecB[iCnt1]);
//	}
//
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		aiVecC[iCnt1] = 0;
//		for (iCnt2 = 0; iCnt2 < iInputM; iCnt2++)
//		{
//			aiVecC[iCnt1] += aiArrayA[iCnt1][iCnt2] * aiVecB[iCnt2];
//		}
//		printf("%d\n", aiVecC[iCnt1]);
//	}
//	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
//	{
//		free(aiArrayA[iCnt1]);
//	}
//
//	free(aiArrayA);
//	free(aiVecB);
//	free(aiVecC);
//	
//	return 0;
//}