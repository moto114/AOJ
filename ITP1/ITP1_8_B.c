//#include <stdio.h>
//#include <string.h>
//
//int iRetSumDigit(char* achValue);
//
//// 入力された整数の各桁の和を計算
//// 0が入力されたら終了
//int main()
//{
//	char achInputX[1000];
//	int iAns;
//
//	scanf("%s", achInputX);
//
//	while (achInputX[0] != '0')
//	{
//		iAns = iRetSumDigit(achInputX);
//		printf("%d\n", iAns);
//		scanf("%s", achInputX);
//	}
//
//	return 0;
//}
//
//int iRetSumDigit(char* achValue)
//{
//	int iAns = 0;
//	int iCnt = 0;
//
//	while (achValue[iCnt] != '\0')
//	{
//		iAns += achValue[iCnt] - '0';
//		iCnt++;
//
//	}
//	return iAns;
//}