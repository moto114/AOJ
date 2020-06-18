#include <stdio.h>
#include "ITP1_11_A.h"

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_11_A&lang=ja
// 6�ʃ_�C�X�̖ڂƁA�]�������p���^�����A�ŏI�I�ȏ�ʂ̐������o��
// �_�C�X�͏�̖ʂ��猩�ē�����k�̖ڂƏ㉺�̖ʂ̖ڂ�����
//int main()
//{
//
//	DICE stDice;
//	char achOrders[100];	// ���ߕ�����
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
//	// ���ߓ���
//	scanf("%s", achOrders);
//	for (iCnt = 0; achOrders[iCnt] != '\0'; iCnt++)
//	{
//		vdDiceRoll(&stDice, achOrders[iCnt]);
//	}
//
//	printf("%d\n", stDice.iTop);
//
//	return 0;
//}

// chOrder�̕��p�Ƀ_�C�X��|��
void vdDiceRoll(DICE* stDice, char chOrder)
{
	int iTopTmp = stDice->iTop;	// Top�ޔ�p

	// �|�������ɏ]���ă_�C�X�̔z�u��t���ւ�
	switch (chOrder)
	{
	case 'N':
		stDice->iTop = stDice->iSouth;
		stDice->iSouth = stDice->iBottom;
		stDice->iBottom = stDice->iNorth;
		stDice->iNorth = iTopTmp;
		break;
	case 'E':
		stDice->iTop = stDice->iWest;
		stDice->iWest = stDice->iBottom;
		stDice->iBottom = stDice->iEast;
		stDice->iEast = iTopTmp;
		break;
	case 'S':
		stDice->iTop = stDice->iNorth;
		stDice->iNorth = stDice->iBottom;
		stDice->iBottom = stDice->iSouth;
		stDice->iSouth = iTopTmp;
		break;
	case 'W':
		stDice->iTop = stDice->iEast;
		stDice->iEast = stDice->iBottom;
		stDice->iBottom = stDice->iWest;
		stDice->iWest = iTopTmp;
		break;
	default:
		// ��L�ȊO�͉������Ȃ�
		break;
	}

	return;
}

// ��ʂ��猩�Ď��v���Ƀ_�C�X��90�x��]
void vdDiceRollRight(DICE* stDice)
{
	int iSouthTmp = stDice->iSouth;

	stDice->iSouth = stDice->iEast;
	stDice->iEast = stDice->iNorth;
	stDice->iNorth = stDice->iWest;
	stDice->iWest = iSouthTmp;
	return;
}


// stDice1��stDice2�������_�C�X���ǂ�������
// �o�́F�����_�C�X�Ȃ�OK�A�قȂ�_�C�X�Ȃ�NG
int iIsEqual2Dice(DICE stDice1, DICE stDice2)
{
	int iCnt;

	// 1�ʂ���ʂɎ����Ă��ē����_�C�X�̔z�u���`�F�b�N
	// E�̕����ɉ���]�����ꍇ��4�ʂ��`�F�b�N
	for (iCnt = 0; iCnt < 4; iCnt++)
	{
		if (iIsEqual2DiceRound(stDice1, stDice2) == OK)
		{
			return OK;
		}
		vdDiceRoll(&stDice2, 'E');
	}
	// N�̕����ɏc��]�����ꍇ�̎c��2�ʂ��`�F�b�N
	for (iCnt = 0; iCnt < 3; iCnt++)
	{
		vdDiceRoll(&stDice2, 'N');
		// ��̉���]���Ƀ`�F�b�N�ς݂̏�ԈȊO����ʂɗ�����`�F�b�N
		if (iCnt != 1) {
			if (iIsEqual2DiceRound(stDice1, stDice2) == OK)
			{
				return OK;
			}
		}
	}

	return NG;
}

// stDice2�̏�ʂ��Œ肵����ԂŁA�ォ�猩�Ď��v����90�x��]�����Ă����A
// ���̓s�xstDice1�Ɠ����z�u�ɂȂ��Ă��邩���`�F�b�N
// �o�́F��ł������z�u�Ȃ�OK�A���ׂĈقȂ�Ȃ�NG��Ԃ�
int iIsEqual2DiceRound(DICE stDice1, DICE stDice2)
{
	int iCnt;

	// ��ʌŒ�ň��]���Ĕz�u���`�F�b�N
	for (iCnt = 0; iCnt < 4; iCnt++)
	{
		if (stDice1.iTop == stDice2.iTop &&
			stDice1.iEast == stDice2.iEast &&
			stDice1.iWest == stDice2.iWest &&
			stDice1.iNorth == stDice2.iNorth &&
			stDice1.iSouth == stDice2.iSouth &&
			stDice1.iBottom == stDice2.iBottom
			)
		{
			return OK;
		}
		// ��ʂ���݂Ď��v���90�x��]
		vdDiceRollRight(&stDice2);
	}

	return NG;
}
