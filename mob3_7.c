//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int iReverse(int** ppiField, int iInputC, int iInputR, int iIdxC);
//int iCalcSum(int** ppiField, int iInputC, int iInputR);
//void vdReverseC(int** ppiField, int iInputR, int iIdxC);
//
//int main()
//{
//	int iInputC, iInputR;
//	int** ppiField;
//	int iCountC;
//	int iCountR;
//	int iAns;
//
//	scanf("%d %d", &iInputC, &iInputR);
//
//	//Rice crackの動的確保
//	ppiField = (int**)malloc(sizeof(int*) * iInputC);
//
//	for(iCountC= 0;iCountC<iInputC;iCountC++)
//	{
//		ppiField[iCountC] = (int*)malloc(sizeof(int) * iInputR);
//	}
//
//	for(iCountC= 0;iCountC<iInputC;iCountC++)
//	{
//		for(iCountR= 0;iCountR<iInputR;iCountR++)
//		{
//			scanf("%d",&ppiField[iCountC][iCountR]);
//		}
//	}
//
//	iAns = iReverse(ppiField, iInputC, iInputR, 0);
//	printf("%d\n", iAns);
//
//	return 0;
//}
//
////再帰関数
//int iReverse(int** ppiField, int iInputC, int iInputR, int iIdxC)
//{
//	int iAns = 0;
//
//	if(iIdxC == iInputC)
//	{
//		iAns = iCalcSum(ppiField, iInputC, iInputR);
//	}
//	else
//	{
//		// ひっくり返したパターン
//		vdReverseC(ppiField, iInputR, iIdxC);
//		iAns = max(iAns, iReverse(ppiField, iInputC, iInputR, iIdxC + 1));
//		// ひっくり返していないパターン
//		vdReverseC(ppiField, iInputR, iIdxC);
//		iAns = max(iAns, iReverse(ppiField, iInputC, iInputR, iIdxC + 1));
//	}
//	return iAns;
//}
//
////合計値を算出する関数
//int iCalcSum(int** ppiField, int iInputC, int iInputR)
//{
//	int iCountC;
//	int iCountR;
//	int iSumR;
//	int iAns;
//
//	iAns = 0;
//	for(iCountR = 0; iCountR < iInputR; iCountR++)
//	{
//		iSumR = 0;
//		for(iCountC = 0; iCountC < iInputC; iCountC++)
//		{
//			iSumR += ppiField[iCountC][iCountR];
//		}
//		iAns += max(iSumR, iInputC - iSumR);
//	}
//	return iAns;
//}
//
//// iIdxC行目をひっくり返す
//void vdReverseC(int** ppiField, int iInputR, int iIdxC)
//{
//	int iCountR;
//
//	for (iCountR = 0; iCountR < iInputR; iCountR++)
//	{
//		ppiField[iIdxC][iCountR] = (ppiField[iIdxC][iCountR] + 1 ) % 2;
//	}
//	
//	return;
//}