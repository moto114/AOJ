//#include <stdio.h>
//
//// ���Ԏ���M,��������F,�Ď���R���^�����A�ȉ��̏����Ő��є���
//// ���Ԏ����A���������̂����ꂩ�����Ȃ����ꍇ���т� F�B
//// ���Ԏ����Ɗ��������̍��v�_���� 80 �ȏ�Ȃ�ΐ��т� A �B
//// ���Ԏ����Ɗ��������̍��v�_���� 65 �ȏ� 80 �����Ȃ�ΐ��т� B�B
//// ���Ԏ����Ɗ��������̍��v�_���� 50 �ȏ� 65 �����Ȃ�ΐ��т� C�B
//// ���Ԏ����Ɗ��������̍��v�_���� 30 �ȏ� 50 �����Ȃ�ΐ��т� D�B 
////		�������A�Ď����̓_���� 50 �ȏ�Ȃ�ΐ��т� C�B
//// ���Ԏ����Ɗ��������̍��v�_���� 30 �����Ȃ�ΐ��т� F�B
//// ���ׂ�-1�Ȃ�I��
//int main()
//{
//	int iInputMid, iInputFinal, iInputRe;
//
//	scanf("%d %d %d", &iInputMid, &iInputFinal, &iInputRe);
//	while (iInputMid != -1 || iInputFinal != -1 || iInputRe != -1)
//	{
//		if ((iInputMid == -1 || iInputFinal == -1) || iInputMid + iInputFinal < 30)
//		{
//			printf("F\n");
//		}
//		else if (iInputMid + iInputFinal >= 80)
//		{
//			printf("A\n");
//		}
//		else if (iInputMid + iInputFinal >= 65)
//		{
//			printf("B\n");
//		}
//		else if (iInputMid + iInputFinal >= 50)
//		{
//			printf("C\n");
//		}
//		else if (iInputMid + iInputFinal >= 30)
//		{
//			if (iInputRe >= 50)
//			{
//				printf("C\n");
//			}
//			else
//			{
//				printf("D\n");
//			}
//		}
//		else
//		{
//			printf("F\n");
//		}
//
//		scanf("%d %d %d", &iInputMid, &iInputFinal, &iInputRe);
//	}
//
//	return 0;
//}