//#include <stdio.h>
//
//// ���͕�����Ɋ܂܂�Ă���A���t�@�x�b�g����\���ꗗ�ɂ��ĕ\��
//int main()
//{
//	// 'a': 0, 'b': 1,...�ɑΉ�,�啶���͏������Ƃ��Ĉ����Ċi�[
//	int aiAlphaList[26];
//	char achInput[1200];
//	int iCnt;
//	int iIndex;	// �i�[��̃C���f�b�N�X
//
//	// ������
//	for (iCnt = 0; iCnt < 26; iCnt++)
//	{
//		aiAlphaList[iCnt] = 0;
//	}
//
//	// EOF�܂œǂݍ���
//	while(fgets(achInput, 1200, stdin) != NULL)
//	{
//		for (iCnt = 0; achInput[iCnt] != '\0' ; iCnt++)
//		{
//			if ('a' <= achInput[iCnt] && achInput[iCnt] <= 'z')		// ������
//			{
//				iIndex = achInput[iCnt] - 'a';
//				aiAlphaList[iIndex]++;
//			}
//			else if ('A' <= achInput[iCnt] && achInput[iCnt] <= 'Z')	// �啶��
//			{
//				iIndex = achInput[iCnt] - 'A';
//				aiAlphaList[iIndex]++;
//			}
//			else
//			{
//				// �A���t�@�x�b�g�ȊO�͓ǂݔ�΂�
//			}
//		}
//	}
//
//	// �J�E���g���ʏo��
//	for (iCnt = 0; iCnt < 26; iCnt++)
//	{
//		printf("%c : %d\n", (iCnt + 'a'), aiAlphaList[iCnt]);
//	}
//
//	return 0;
//}