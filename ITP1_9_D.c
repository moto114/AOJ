//#include <stdio.h>
//#include <string.h>
//
//// ���͕������ȉ��̖@���ɏ]���ď�������
//// print a b : str �� a �����ڂ��� b �����ڂ܂ł��o�͂���B
//// reverse a b : str �� a �����ڂ��� b �����ڂ܂ł��t���ɂ���B
//// replace a b p : str �� a �����ڂ��� b �����ڂ܂ł� p �ɒu��������B
//int main()
//{
//	char achInputText[1000];
//	int iQuestionNum;
//	char achQuestion[10];
//	char achReplaceText[1000];
//	int iInputA, iInputB;
//	int iCnt, iCnt2;
//	char chSwapTmp;
//
//	scanf("%s", achInputText);
//	scanf("%d", &iQuestionNum);
//
//	for (iCnt = 0; iCnt < iQuestionNum; iCnt++)
//	{
//		scanf("%s", achQuestion);
//
//		// a����b�Ԗڂ̕�����u������
//		if (strcmp("replace", achQuestion) == 0)
//		{
//			scanf("%d %d %s", &iInputA, &iInputB, achReplaceText);
//			for (iCnt2 = 0; iCnt2 < iInputB - iInputA + 1; iCnt2++)
//			{
//				achInputText[iInputA + iCnt2] = achReplaceText[iCnt2];
//			}
//		}
//		// a����b�Ԗڂ̕������t��
//		else if (strcmp("reverse", achQuestion) == 0)
//		{
//			scanf("%d %d", &iInputA, &iInputB);
//			// �w�肳�ꂽ�����̓�����ƌ�납��œ���ւ��i���S�����܂Łj
//			for (iCnt2 = 0; iCnt2 < (iInputB - iInputA) / 2 + 1; iCnt2++)
//			{
//				chSwapTmp = achInputText[iInputA + iCnt2];
//				achInputText[iInputA + iCnt2] = achInputText[iInputB - iCnt2];
//				achInputText[iInputB - iCnt2] = chSwapTmp;
//			}
//		}
//		// a����b�Ԗڂ̕�����\��
//		else if(strcmp("print", achQuestion) == 0)
//		{
//			scanf("%d %d", &iInputA, &iInputB);
//			// �w��͈͂ŏo��
//			for (iCnt2 = iInputA; iCnt2 < iInputB + 1; iCnt2++)
//			{
//				printf("%c", achInputText[iCnt2]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}
