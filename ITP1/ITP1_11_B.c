//#include <stdio.h>
//#include "ITP1_11_A.h"
//
//// �_�C�X�̖ڂƂ��̏�ʂƑO�ʂ̐������^�����A�E���̖ʂ̐������o��
//int main()
//{
//	DICE stDice;
//	int iInputQuestionNum;
//	int iQTop, iQSouth;
//	int iCnt;
//
//	// ��������̖ڂ����
//	scanf("%d", &stDice.iTop);
//	scanf("%d", &stDice.iSouth);
//	scanf("%d", &stDice.iEast);
//	scanf("%d", &stDice.iWest);
//	scanf("%d", &stDice.iNorth);
//	scanf("%d", &stDice.iBottom);
//
//	scanf("%d", &iInputQuestionNum);
//	for (iCnt = 0; iCnt < iInputQuestionNum; iCnt++)
//	{
//		scanf("%d %d", &iQTop, &iQSouth);
//		// �܂��͏�ʂ����킹��A���E�̖ʂɖړI�̏�ʂ̐������Ȃ��Ȃ�c����(N)�ɉ�]
//		if (stDice.iEast != iQTop && stDice.iWest != iQTop)
//		{
//			while (stDice.iTop != iQTop)
//			{
//				vdDiceRoll(&stDice, 'N');
//			}
//		}
//		else if(stDice.iEast == iQTop)	// �E�ʂɖړI�̐���������̂ŉ�����(W)�ɉ�]
//		{
//			vdDiceRoll(&stDice, 'W');
//		}
//		else // ���ʂɖړI�̐���������̂ŉ�����(E)�ɉ�]
//		{
//			vdDiceRoll(&stDice, 'E');
//		}
//
//		// ��ʂ��Œ肵�đO�ʂ����낦��
//		while (stDice.iSouth != iQSouth)
//		{
//			vdDiceRollRight(&stDice);
//		}
//
//		printf("%d\n", stDice.iEast);
//	}
//
//	
//
//	return 0;
//	
//}
