//#include <stdio.h>
//#include <string.h>
//
//void vdToLower(char* chText);
//
//// ����T�̒��ɒP��W�������܂܂�邩���o��
//// �P�ꃌ�x���Ŕ�r�Ȃ̂ŁA1�P�ꂸ�ǂݎ��
//// "END_OF_TEXT"��ǂݍ��񂾂�I��
//int main()
//{
//	char achInputW[10], achInputT[1000];
//	char achEnd[] = "END_OF_TEXT";
//	int iLengthW, iLengthT;
//	int iAns = 0;
//
//	scanf("%s\n", achInputW);
//	scanf("%s", achInputT);
//
//	// �擪���珇�ɔ�r�AW�̒������l������T�̒T���ʒu������
//	while (strcmp(achEnd, achInputT) != 0)
//	{
//		iLengthW = strlen(achInputW);
//		iLengthT = strlen(achInputT);
//
//		// �����T�C�Y���قȂ�Ȃ玟�̒P��
//		if (iLengthW != iLengthT)
//		{
//			scanf("%s", achInputT);
//			continue;
//		}
//
//		// ��������
//		vdToLower(achInputT);
//
//		// �������r
//		if (strcmp(achInputW, achInputT) == 0)
//		{
//			iAns++;
//		}
//
//		scanf("%s", achInputT);
//	}
//	printf("%d\n", iAns);
//
//	return 0;
//}
//
//// ���̓e�L�X�g����������
//void vdToLower(char* chText)
//{
//	int iLenghtT = strlen(chText);
//	int iCnt;
//	int iDiff = 'a' - 'A';
//
//	for (iCnt = 0; iCnt < iLenghtT; iCnt++)
//	{
//		if ('A' <= chText[iCnt] && chText[iCnt] <= 'Z')
//		{
//			chText[iCnt] += iDiff;
//		}
//
//	}
//}