//#include <stdio.h>
//#include <string.h>
//
//void vdToLower(char* chText);
//
//// ����T�̒��ɒP��W�������܂܂�邩���o��
////// "END_OF_TEXT"��ǂݍ��񂾂�I��
//int main()
//{
//	char achInputWord[10], achInputText[1000];
//	char achEnd[] = "END_OF_TEXT";
//	int iLengthWord, iLengthText;
//	int iCnt1, iCnt2;
//	int iAns = 0;
//
//	scanf("%s\n", achInputWord);
//	scanf("%[^\n]%*1[\n]", achInputText);	// 1�s�ǂݍ��݂ł��Ȃ��H
//
//	// �擪���珇�ɔ�r�AW�̒������l������T�̒T���ʒu������
//	while (strcmp(achEnd, achInputText) != 0)
//	{
//		iLengthWord = strlen(achInputWord);
//		iLengthText = strlen(achInputText);
//
//		// �e�L�X�g��������
//		vdToLower(achInputText);
//
//		// �������r
//		for (iCnt1 = 0; iCnt1 < iLengthText - iLengthWord; iCnt1++)
//		{
//			for (iCnt2 = 0; iCnt2 < iLengthWord; iCnt2++)
//			{
//				if (achInputText[iCnt1 + iCnt2] != achInputWord[iCnt2])
//				{
//					break;
//				}
//			}
//			if (iCnt2 == iLengthWord)
//			{
//				iAns++;
//			}
//		}
//
//		// ���̍s�ǂݍ���
//		scanf("%[^\n]%*1[\n]", achInputText);
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
//	return;
//}