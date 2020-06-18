//#include <stdio.h>
//#define scanf scanf_s
//typedef long long int lli;
//
////void call(int n) {
////    int i = 1;
////CHECK_NUM:
////    int x = i;
////    if (x % 3 == 0) {
////        cout << " " << i;
////        goto END_CHECK_NUM;
////    }
////INCLUDE3:
////    if (x % 10 == 3) {
////        cout << " " << i;
////        goto END_CHECK_NUM;
////    }
////    x /= 10;
////    if (x) goto INCLUDE3;
////END_CHECK_NUM:
////    if (++i <= n) goto CHECK_NUM;
////
////    cout << endl;
////}
//
//// 上記プログラムをgotoを使用しない形で書き換えよ
//int main()
//{
//    int iInputN;
//    int iCnt = 1;
//    int iX;
//
//    scanf("%d", &iInputN);
//
//    do
//    {
//        iX = iCnt;
//        if (iX % 3 == 0)
//        {
//            printf(" %d", iX);
//        }
//        else {
//            while (iX != 0)
//            {
//                if (iX % 10 == 3)
//                {
//                    printf(" %d", iCnt);
//                    break;
//                }
//                iX /= 10;
//            }
//        }
//    } while (++iCnt <= iInputN);
//
//    printf("\n");
//    return 0;
//}