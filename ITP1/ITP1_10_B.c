//#include <stdio.h>
//#include <math.h>
//
//#define PI 3.1415926535	// PI���`
//
//// 2��a,b�̒����Ƃ��̊Ԃ̊pC�̑傫��(�x)���^�����A�O�p�`�̖ʐρA���̒����Aa���ӂƂ����Ƃ��̍������o��
//int main()
//{
//	double dInputA, dInputB, dInputC;
//	double dRad, dAnotherSide;
//	double dArea, dRound, dHeight;
//
//	scanf("%lf %lf %lf", &dInputA, &dInputB, &dInputC);
//
//	// �p�x�����W�A���ɕϊ�
//	dRad = dInputC * PI / 180;
//
//	// �ʐ�
//	dArea = (dInputA * dInputB * sin(dRad)) / 2;
//
//	// ������ӂƎ��̒���
//	dAnotherSide = sqrt(pow(dInputA, 2) + pow(dInputB, 2) - 2 * dInputA * dInputB * cos(dRad));
//	dRound = dInputA + dInputB + dAnotherSide;
//
//	// ����
//	dHeight = (2 * dArea) / dInputA;
//
//	printf("%.8lf\n%.8lf\n%.8lf\n", dArea, dRound, dHeight);
//
//	return 0;
//}