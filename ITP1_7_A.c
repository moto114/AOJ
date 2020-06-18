//#include <stdio.h>
//
//// 中間試験M,期末試験F,再試験Rが与えられ、以下の条件で成績判定
//// 中間試験、期末試験のいずれかを欠席した場合成績は F。
//// 中間試験と期末試験の合計点数が 80 以上ならば成績は A 。
//// 中間試験と期末試験の合計点数が 65 以上 80 未満ならば成績は B。
//// 中間試験と期末試験の合計点数が 50 以上 65 未満ならば成績は C。
//// 中間試験と期末試験の合計点数が 30 以上 50 未満ならば成績は D。 
////		ただし、再試験の点数が 50 以上ならば成績は C。
//// 中間試験と期末試験の合計点数が 30 未満ならば成績は F。
//// すべて-1なら終了
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