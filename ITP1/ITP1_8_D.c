//#include <stdio.h>
//#include <string.h>
//
//// �z������s�ƕ�����p���^�����As�̘A������������p�����邩�𔻒�
//int main()
//{
//	char achInputS[100], achInputP[100];
//	int iLengthS, iLengthP;
//	int iCnt1, iCnt2;
//
//	scanf("%s", achInputS);
//	scanf("%s", achInputP);
//
//	iLengthS = strlen(achInputS);
//	iLengthP = strlen(achInputP);
//
//	// achInputS�̓��[�v����悤�ɓY��������]�ɂ��Đ擪����T��
//	for (iCnt1 = 0; iCnt1 < iLengthS; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < iLengthP; iCnt2++)
//		{
//			// �قȂ镶���Ȃ甲����
//			if (achInputS[(iCnt1 + iCnt2) % iLengthS] != achInputP[iCnt2])
//			{
//				break;
//			}
//		}
//		if (iCnt2 == iLengthP)
//		{
//			printf("Yes\n");
//			return 0;
//		}
//	}
//
//	printf("No\n");
//
//	return 0;
//}