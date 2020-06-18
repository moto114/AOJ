//#include <stdio.h>
//int iCheckDeck(char chInputMark, int iInputNum, int aiDeck[4][13]);
//int iPrintNoneCard(int aiDeck[4][13]);
//
//
//// カードの情報を受け取り、不足しているカードを出力する
//int main()
//{
//	// deck管理　添え字 0:S, 1: H, 2:C, 3: D
//	int aiDeck[4][13] = { 0 }; 
//
//	int iInputN;
//	char chInputMark[2];
//	int iInputNum;
//
//	scanf("%d", &iInputN);
//
//
//	while (iInputN > 0)
//	{
//		//printf("iInputN: %d\n", iInputN);
//		scanf("%s %d", chInputMark, &iInputNum);
//		iCheckDeck(chInputMark[0], iInputNum, aiDeck);
//		
//		iInputN--;
//	}
//	iPrintNoneCard(aiDeck);
//
//	return 0;
//}
//
//// 入力されたカードをデッキに追加
//int iCheckDeck(char chInputMark, int iInputNum, int aiDeck[4][13])
//{
//	switch (chInputMark)
//	{
//	case 'S':
//		aiDeck[0][iInputNum - 1]++;
//		break;
//	case 'H':
//		aiDeck[1][iInputNum - 1]++;
//		break;
//	case 'C':
//		aiDeck[2][iInputNum - 1]++;
//		break;
//	case 'D':
//		aiDeck[3][iInputNum - 1]++;
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}
//
//// デッキで不足しているカードを出力
//int iPrintNoneCard(int aiDeck[4][13])
//{
//	int iCnt1,iCnt2;
//
//	for (iCnt1 = 0; iCnt1 < 4; iCnt1++)
//	{
//		for (iCnt2 = 0; iCnt2 < 13; iCnt2++)
//		{
//			//printf("%d", aiDeck[iCnt1][iCnt2]);
//			if (aiDeck[iCnt1][iCnt2] == 0)
//			{
//				switch (iCnt1)
//				{
//				case 0:
//					printf("S %d\n", iCnt2+1);
//					break;
//				case 1:
//					printf("H %d\n", iCnt2+1);
//					break;
//				case 2:
//					printf("C %d\n", iCnt2+1);
//					break;
//				case 3:
//					printf("D %d\n", iCnt2+1);
//					break;
//				default:
//					break;
//				}
//			}
//		}
//	}
//
//	return 0;
//}
