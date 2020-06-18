//#include <stdio.h>
//#include <string.h>
//
//int iRetSumDigit(char* achValue);
//
//// “ü—Í‚³‚ê‚½®”‚ÌŠeŒ…‚Ì˜a‚ğŒvZ
//// 0‚ª“ü—Í‚³‚ê‚½‚çI—¹
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