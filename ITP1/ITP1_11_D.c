//#include <stdio.h>
//#include <stdlib.h>
//#include "ITP1_11_A.h"
//
///*
//�A���S���Y���F
//N�̃_�C�X�̏�ʂ̖ځA��ʂɑ΂��铌����k���̖ڂƁA���ʂ̖ڂ���͂Ƃ��Ď󂯎��B
//�C�ӂ̓�̃_�C�X�����������`�F�b�N���A��ł������_�C�X�������"No", ���ׂĂ̑g�ݍ��킹���قȂ��Ă���Ȃ�"Yes"
//
//��̃_�C�X�̔�r���@�́A�Е��̃_�C�X�𓮂����Ă����A
//�����Е��̃_�C�X�ƑS�������z�u����ꂽ�i��ʁA���ʁA������k�̖ʂ����ׂē����j�Ȃ瓯���_�C�X���Ɣ��f����B
//�Ⴆ�΁A��ʂ��Œ肵���ꍇ�A���ʂɗ���ʂ�4��ލl������̂ŁA���ꂼ��̔z�u�Ŕ�r����B
//�����6�ʂ��ׂĂ���ʂɂ����Ԃōs�����Ƃł��ׂẴp�^�[���Ŕ�r�ł���ƍl�����B
//�z�u�̕ύX�́A�_�C�X�̔z�u��t���ւ��邱�ƂŎ��������B
//��j
//�_�C�X�𐼕����ɓ|���ꍇ�A�k�Ɠ�̐��l�͕ς�炸�A
//��ʂ̐��l�͓��̐��l�A���̐��l�͉��ʂ̐��l�A���ʂ̐��l�͐��̐��l�A���̐��l�͏�ʂ̐��l�ɕω�����B
//
//��ʂ��Œ肵�ď�ʂ��猩�Ď��v����90�x��]�����l�ɔz�u�̕t���ւ��Ŏ����ł���B
//
//*/
//
//// n�̃_�C�X�̖ڂ��^�����A����炪���ׂĈقȂ�_�C�X���ǂ�������
//// ���ׂĈقȂ�Ȃ�Yes�A��ł������Ȃ�No���o��
//int main()
//{
//	DICE* stDice;	// �󂯎��_�C�X
//	int iInputDiceNum;	// �_�C�X�̌�
//	int iCnt1, iCnt2;
//
//	scanf("%d", &iInputDiceNum);
//
//	stDice = (DICE*)malloc(sizeof(DICE) * iInputDiceNum);
//
//	// �_�C�X�̖ڂ����
//	for (iCnt1 = 0; iCnt1 < iInputDiceNum; iCnt1++)
//	{
//		scanf("%d", &stDice[iCnt1].iTop);
//		scanf("%d", &stDice[iCnt1].iSouth);
//		scanf("%d", &stDice[iCnt1].iEast);
//		scanf("%d", &stDice[iCnt1].iWest);
//		scanf("%d", &stDice[iCnt1].iNorth);
//		scanf("%d", &stDice[iCnt1].iBottom);
//	}
//
//	// ���ׂẴ_�C�X�̑g�ݍ��킹�Ń`�F�b�N
//	for (iCnt1 = 0; iCnt1 < iInputDiceNum - 1; iCnt1++)
//	{
//		for (iCnt2 = iCnt1 + 1; iCnt2 < iInputDiceNum; iCnt2++)
//		{
//			// �ǂꂩ��ł������_�C�X�Ȃ�No�ŏI��
//			if (iIsEqual2Dice(stDice[iCnt1], stDice[iCnt2]) == OK)
//			{
//				printf("No\n");
//				free(stDice);
//				return 0;
//			}
//		}
//	}
//
//	// ���ׂẴ_�C�X���قȂ�̂�Yes�ŏI��
//	printf("Yes\n");
//
//	free(stDice);
//
//	return 0;
//}