//#include <stdio.h>
//
//// 1�`N�܂ł̐������d���Ȃ���3�g����X�ƂȂ�g�ݍ��킹�̒ʂ萔���o��
//// N,X�Ƃ���0�Ȃ�I��
//int main()
//{
//	int iInputN, iInputX;
//	int iSum;
//	int iCnt1, iCnt2, iCnt3;
//	int iAns;
//
//	scanf("%d %d", &iInputN, &iInputX);
//
//	while (iInputN != 0 || iInputX != 0)
//	{
//		iAns = 0;
//		// �S�ʂ�̑g�ݍ��킹�����ɒ��ׂ�i�P���J�n�ƏI�������炷�j
//		for (iCnt1 = 1; iCnt1 <= iInputN - 2; iCnt1++)
//		{
//			for (iCnt2 = iCnt1 + 1; iCnt2 <= iInputN - 1; iCnt2++)
//			{
//				for (iCnt3 = iCnt2 + 1; iCnt3 <= iInputN; iCnt3++)
//				{
//					
//					iSum = iCnt1 + iCnt2 + iCnt3;
//					if (iSum == iInputX)
//					{
//						//printf("%d,%d,%d\n", iCnt1, iCnt2, iCnt3);
//						iAns++;
//					}
//				}
//			}
//		}
//
//		printf("%d\n", iAns);
//
//		scanf("%d %d", &iInputN, &iInputX);
//	}
//
//
//	return 0;
//}