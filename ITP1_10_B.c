//#include <stdio.h>
//#include <math.h>
//
//#define PI 3.1415926535	// PIを定義
//
//// 2辺a,bの長さとその間の角Cの大きさ(度)が与えられ、三角形の面積、周の長さ、aを底辺としたときの高さを出力
//int main()
//{
//	double dInputA, dInputB, dInputC;
//	double dRad, dAnotherSide;
//	double dArea, dRound, dHeight;
//
//	scanf("%lf %lf %lf", &dInputA, &dInputB, &dInputC);
//
//	// 角度をラジアンに変換
//	dRad = dInputC * PI / 180;
//
//	// 面積
//	dArea = (dInputA * dInputB * sin(dRad)) / 2;
//
//	// もう一辺と周の長さ
//	dAnotherSide = sqrt(pow(dInputA, 2) + pow(dInputB, 2) - 2 * dInputA * dInputB * cos(dRad));
//	dRound = dInputA + dInputB + dAnotherSide;
//
//	// 高さ
//	dHeight = (2 * dArea) / dInputA;
//
//	printf("%.8lf\n%.8lf\n%.8lf\n", dArea, dRound, dHeight);
//
//	return 0;
//}