//#include <stdio.h>
//
//// ���͕�����̑啶�������������ւ��ďo��
//int main()
//{
//	char achInputStr[1200] = { 0 };
//	int iDiff = 'a' - 'A';
//	int iCnt;
//
//	// ���s�ȊO��ǂݍ���
//	scanf("%[^\n]", achInputStr);
//
//	for (iCnt = 0; achInputStr[iCnt] != '\0'; iCnt++)
//	{
//		if (achInputStr[iCnt] >= 'A' && achInputStr[iCnt] <= 'Z')	// �啶��
//		{
//			printf("%c", achInputStr[iCnt] + iDiff);
//		}
//		else if (achInputStr[iCnt] >= 'a' && achInputStr[iCnt] <= 'z')	// ������
//		{
//			printf("%c", achInputStr[iCnt] - iDiff);
//		}
//		else
//		{
//			printf("%c", achInputStr[iCnt]);
//		}
//		
//	}
//	printf("\n");
//
//	return 0;
//}