//#include <stdio.h>
//#include <string.h>
//
//
//// ������T���A�擪�������h�܂ł̕����𖖔��ɘA������V���b�t����M��J��Ԃ��čŌ�ɏo��
//// "abcde"��h=3�ŃV���b�t�������"deabc"�ƂȂ�
//int main()
//{
//	char chInputText[200];
//	char chText[200];	// �V���b�t����
//	int iTextLength;
//	int iInputM, iInputH;
//	int iCnt;
//
//	scanf("%s", chInputText);
//
//	while (strcmp(chInputText, "-") != 0)
//	{
//		iTextLength = strlen(chInputText);
//		scanf("%d", &iInputM);
//
//		// �V���b�t������
//		for (iCnt = 0; iCnt < iInputM; iCnt++)
//		{
//			scanf("%d", &iInputH);
//			strncpy(chText, chInputText + iInputH, iTextLength - iInputH);
//			// strncpy��'\0'�܂ő�����Ȃ��̂ŁA�����ő��
//			chText[iTextLength - iInputH] = '\0';
//			strncat(chText, chInputText, iInputH);
//			strcpy(chInputText, chText);
//		}
//
//		printf("%s\n", chInputText);
//
//		scanf("%s", chInputText);
//	}
//
//}