#include <stdio.h>
#include <stdlib.h>

// 関数ポインタ定義
typedef void(*FUNC_POINTER) (int*, int*);

// スタックを実装、操作は以下の３つでそれぞれ0,1,2で操作の種類を指定
// ・push(t, x) : St に整数xを挿入する。
// ・top(t) : Stから次に取り出される要素を報告する。ただし、Stが空の場合は何もしない。
// ・pop(t) : Stから要素を取り出し削除する。ただし、Stが空の場合は何もしない。

void push(int* piData, int* iElementNum);
void top(int* piData, int* iElementNum);
void pop(int* piData, int* iElementNum);

int main()
{
	int iInputN;
	int iInputQ;
	int iInputT;
	int iInputOrder;
	int** ppiData;
	int* iElementNum;
	int iCnt;

	// 関数ポインタ
	FUNC_POINTER pFunc[] = {
		push,
		top,
		pop
	};

	scanf("%d %d", &iInputN, &iInputQ);

	// 初期化
	ppiData = (int**)malloc(sizeof(int*) * iInputN);
	for (iCnt = 0; iCnt < iInputN; iCnt++)
	{
		ppiData[iCnt] = (int*)malloc(sizeof(int) * iInputQ);
	}
	iElementNum = (int*)calloc(iInputN, sizeof(int));

	for (iCnt = 0; iCnt < iInputQ; iCnt++)
	{
		scanf("%d %d", &iInputOrder, &iInputT);
		
		if (iInputOrder == 0 || iInputOrder == 1 || iInputOrder == 2)
		{
			pFunc[iInputOrder](ppiData[iInputT], &iElementNum[iInputT]);
		}
	}

	return 0;
}

// スタックに整数挿入
void push(int* piData, int* iElementNum)
{
	scanf("%d", &piData[*iElementNum]);
	(*iElementNum)++;

	return;
}

// 次に取り出される要素を出力
void top(int* piData, int* iElementNum)
{
	if (*iElementNum <= 0)
	{
		return;
	}
	printf("%d\n", piData[(*iElementNum) - 1]);
	return;
}

// 要素を取り出して削除
void pop(int* piData, int* iElementNum)
{
	if (*iElementNum <= 0)
	{
		return;
	}
	(*iElementNum)--;

	return;
}