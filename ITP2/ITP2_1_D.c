//#include <stdio.h>
//#include <stdlib.h>
//
//typedef long long int lli;
//
//void pushBack(lli** pplliData, int* piRecordCnt);
//void dump(lli** pplliData, int* piRecordCnt);
//void clear(int* piRecordCnt);
//
//// n個の可変長配列Ai(i=0,1,...,n-1)に対して以下の操作を行う。
//// ・pushBack(t, x): Atの末尾に整数xを挿入する。
//// ・dump(t): Atの全ての要素を出力する。
//// ・clear(t): Atを空にする。ただし、Atが空の場合は何もしない。
//// 操作は数字で与えられ、上から0,1,2で指定される。
//int main()
//{
//	lli** pplliData;	//	全配列データ
//	int iInputN, iInputQ;
//	int iInputOrder;	// 命令番号
//	int* piRecordCnt;	// 各配列の要素数
//	int iCnt;
//
//	scanf("%d %d", &iInputN, &iInputQ);
//
//	// iInputN個のポインタ配列をメモリ確保
//	pplliData = (lli**)malloc(sizeof(lli*) * iInputN);
//
//	// それぞれのポインタ配列がiInputQ個分のメモリ確保
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		pplliData[iCnt] = (lli*)malloc(sizeof(lli) * iInputQ);
//	}
//
//	// メモリ確保し0初期化
//	piRecordCnt = (int*)calloc(iInputN, sizeof(int));
//
//	// 処理入力
//	for (iCnt = 0; iCnt < iInputQ; iCnt++)
//	{
//		scanf("%d", &iInputOrder);
//
//		switch (iInputOrder)
//		{
//		case 0:
//			pushBack(pplliData, piRecordCnt);
//			break;
//		case 1:
//			dump(pplliData, piRecordCnt);
//			break;
//		case 2:
//			clear(piRecordCnt);
//			break;
//		default:
//			break;
//		}
//	}
//
//	// メモリ解放
//	for (iCnt = 0; iCnt < iInputN; iCnt++)
//	{
//		free(pplliData[iCnt]);
//	}
//	free(pplliData);
//	free(piRecordCnt);
//
//
//	return 0;
//}
//
//// iInputT番目の配列の末尾に要素を挿入
//void pushBack(lli** pplliData, int* piRecordCnt)
//{
//	int iInputT;
//	
//	scanf("%d", &iInputT);
//
//	scanf("%lld", &(pplliData[iInputT][piRecordCnt[iInputT]]));
//	(piRecordCnt[iInputT])++;
//
//	return;
//}
//
//// iInputT番目の配列の要素を全て表示
//void dump(lli** pplliData, int* piRecordCnt)
//{
//	int iInputT;
//	int iCnt;
//
//	scanf("%d", &iInputT);
//
//	for (iCnt = 0; iCnt < piRecordCnt[iInputT]; iCnt++)
//	{
//		// 末尾は後ろに空白なし
//		if (iCnt != piRecordCnt[iInputT] - 1)
//		{
//			printf("%lld ", pplliData[iInputT][iCnt]);
//		}
//		else
//		{
//			printf("%lld", pplliData[iInputT][iCnt]);
//		}
//	}
//
//	printf("\n");
//
//	return;
//}
//
//// iInputT番目の配列を空にする
//void clear(int* piRecordCnt)
//{
//	int iInputT;
//	scanf("%d", &iInputT);
//
//	// 配列の要素数を0にすることで疑似的に要素クリア
//	(piRecordCnt[iInputT]) = 0;
//
//	return;
//}