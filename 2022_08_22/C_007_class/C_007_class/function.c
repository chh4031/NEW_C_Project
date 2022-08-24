#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//void paa();//void 또는 공백(리턴값 기준임) double 나 int는 타입명만 사용, 입력값이 많으면 (double, double)로 씀


/*
* 함수 원형 이라는 개념이 존재.
* double abc(double); 와 같이 함수 를 미리 정의시켜 컴파일 에러 방지목적
*/

//int get_intger() {
//	int x, y;
//	printf("정수를 입력하시오. : ");
//	scanf("%d", &x);
//	printf("정수를 입력하시오. : ");
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


	/*printf("더 큰 값은 %d입니다.", get_intger());*/

	/*int x, y;
		printf("정수를 입력하시오: ");
		scanf("%d", &x);
		printf("정수를 입력하시오: ");
		scanf("%d", &y);

		printf("더큰값은 %d 입니다. ", max(x, y));*/

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
		printf("======%d단======\n", x);
		for (y = 2; y < 10; y++) {
			printf("%d * %d = %d\n", x, y, x * y);

		}
	}*/

	return 0;
}

//void paa() {
//	printf("함수 원형의 예시");
//}