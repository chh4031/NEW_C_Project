#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//void paa();//void �Ǵ� ����(���ϰ� ������) double �� int�� Ÿ�Ը� ���, �Է°��� ������ (double, double)�� ��


/*
* �Լ� ���� �̶�� ������ ����.
* double abc(double); �� ���� �Լ� �� �̸� ���ǽ��� ������ ���� ��������
*/

//int get_intger() {
//	int x, y;
//	printf("������ �Է��Ͻÿ�. : ");
//	scanf("%d", &x);
//	printf("������ �Է��Ͻÿ�. : ");
//	scanf("%d", &y);
//
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}



//int max(int num1,int num2) {
//	if (num1 > num2) {
//		return num1;
//	}
//	else {
//		return num2;
//	}
//}



//void print_stars() {
//	int i;
//	for (i = 0; i < 30; i++) {
//		printf("*");
//	}
//	printf("\n");
//}

int main() {

	int i;
	int a = 50;
	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) {
		printf("%d ", rand()%a+1);
	}


	/*paa();*/


	/*printf("�� ū ���� %d�Դϴ�.", get_intger());*/

	/*int x, y;
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &x);
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &y);

		printf("��ū���� %d �Դϴ�. ", max(x, y));*/

	/*

	/*int i;
	for (i = 1; i < 10; i++) {
		if (i % 3 == 0)continue;
		printf("%d\n", i);
	}*/



	/*int x, y;

	for (x = 0; x < 6; x++) {
		for (y = 0; y < x; y++) {
			printf("*");
		}
		printf("\n");
	}*/



	/*int x, y;
	for (x = 2; x < 10; x++) {
		printf("======%d��======\n", x);
		for (y = 2; y < 10; y++) {
			printf("%d * %d = %d\n", x, y, x * y);

		}
	}*/

	return 0;
}

//void paa() {
//	printf("�Լ� ������ ����");
//}