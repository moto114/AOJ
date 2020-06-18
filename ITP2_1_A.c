//#include <stdio.h>
//#include <stdlib.h>
//
//typedef long long int lli;
//
//void pushBack(lli* alliData, int* piRecordCnt);
//void randomAccess(lli* alliData);
//void popBack(int* piRecordCnt);
//
//// 可変長配列Aに対して以下の操作を行う。
//// ・pushBack(x): Aの末尾に整数xを挿入する
//// ・randomAccess(p) :Aのq番目の要素の値を出力する
//// ・popBack() : Aの末尾の要素を削除する
//// 操作は数字で与えられ、上から0,1,2で指定される。
//// また、から配列に対してrandomAccessやpopBuck操作は行われない。
//int main()
//{
//
//	lli* alliData;
//	int iInputQ;
//	int iInputOrder;	// 命令番号
//	int iRecordCnt=0;
//	int iCnt;
//
//	scanf("%d", &iInputQ);
//
//	// 最大要素数iInputQの配列をメモリ確保
//	alliData = (lli*)malloc(sizeof(lli) * iInputQ);
//
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		scanf("%d", &iInputOrder);
//
//		switch (iInputOrder)
//		{
//		case 0:
//			pushBack(alliData, &iRecordCnt);
//			break;
//		case 1:
//			randomAccess(alliData, &iRecordCnt);
//			break;
//		case 2:
//			popBack(&iRecordCnt);
//			break;
//		default:
//			break;
//		}
//	}
//
//	free(alliData);
//
//	return 0;
//}
//
//// 末尾に要素を挿入
//void pushBack(lli* alliData, int* piRecordCnt)
//{
//	scanf("%lld", &alliData[*piRecordCnt]);
//	(*piRecordCnt)++;
//
//	return;
//}
//
//// iValue番目の要素を出力
//void randomAccess(lli* alliData)
//{
//	int iInputIdx;
//
//	scanf("%d", &iInputIdx);
//
//	printf("%lld\n", alliData[iInputIdx]);
//
//	return;
//}
//
//// 末尾を削除
//void popBack(int* piRecordCnt)
//{
//	// 配列の要素数をデクリメントすることで疑似的に末尾削除
//	(*piRecordCnt)--;
//
//	return;
//}