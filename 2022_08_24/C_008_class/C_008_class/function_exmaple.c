#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5
#define STUDENT 10


int get_average(int scores[], int n);

int main() {
	int scores[STUDENT] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int avg;

	avg = get_average(scores, STUDENT);
	printf("����� %d�Դϴ�.\n", avg);

	return 0;
}

int get_average(int const scores[], int n) {//const�� ���� �迭�� ���纻���� ��.
	int i;
	int sum = 0;

	for (i = 0; i < n; i++) {
		sum += scores[i];
	}
	return sum / n;
}
//�Լ��� �迭�� �־� ���, �Լ������� �迭�� ����ϸ� �迭�� ���� ���ٵ�.



//int main() {
//	int i;
//	int scores[5] = {0};
//	
//	for (i = 0; i < 5; i++) {
//		printf("scores[%d] = %d\n", i, scores[i]);
//	}
//}





//int main() {
//	int scores[STUDENT];
//	int sum = 0;
//	int i, average;
//
//	for (i = 0; i < STUDENT; i++) {
//		printf("�л����� ���� �Է� : ");
//		scanf("%d", &scores[i]);
//	}
//	for (i = 0; i < STUDENT; i++) {
//		sum += scores[i];
//	}
//
//	average = sum / STUDENT;
//	printf("���� ��� : %d\n", average);
//
//	return 0;
//}





//int main() {
//	int i;
//	int scores[SIZE];
//	srand((unsigned)time(NULL));
//
//	for (i = 0; i < SIZE; i++) {
//		scores[i] = rand() % 100;
//	}
//
//	for (i = 0; i < SIZE; i++) {
//		printf("scores[%d] = %d\n", i, scores[i]);
//	}
//}





//int main() {
//	int i;
//	int scores[5];
//
//	scores[0] = 10;
//	scores[1] = 20;
//	scores[2] = 30;
//	scores[3] = 40;
//	scores[4] = 50;
//
//	for (i = 0; i < 5; i++) {
//		printf("scores[%d] = %d\n", i, scores[i]);
//	}
//}





//int A;
//void add();
//
//int main() {
//	A = 5;
//	printf("%d\n", A);
//
//	add();
//	printf("%d\n", A);
//}
//
//void add() {
//	A += 5;
//}





//int main() {
//	double result = 0, value = 1.8;
//
//	result = floor(value);
//	printf("%f\n", result);
//	result = ceil(value);
//	printf("%f\n", result);
//
//	printf("���� : %d\n", abs(132));
//	printf("���� : %d\n", abs(-132));
//	printf("10�� 3���� %.0f\n", pow(10.0, 3.0));
//	printf("16�� �������� %.0f\n", sqrt(64));
//}





//void cac(float, float);
//float getweight();
//float getheight();
//
//int main() {
//
//	float weight = 0, height = 0, bmi = 0;
//
//	weight = getweight();
//	height = getheight();
//
//	cac(weight, height);
//
//	return 0;
//}
//
//void cac(float weight, float height) {
//
//	height = height / 100;
//	float bmi = weight / (height * height);
//
//	printf("����� bmi�� %.2f�Դϴ�.\n", bmi);
//
//	if (bmi > 25) {
//		printf("���Դϴ�.\n");
//	}
//	else if (bmi > 23) {
//		printf("��ü���Դϴ�.\n");
//	}
//	else if (bmi > 18.5) {
//		printf("�����Դϴ�.\n");
//	}
//	else {
//		printf("��ü���Դϴ�.\n");
//	}
//}
//
//float getweight() {
//	float weight;
//	printf("������ �Է� : \n");
//	scanf("%f", &weight);
//	
//	return weight;
//}
//
//float getheight() {
//	float height;
//	printf("Ű �Է� : \n");
//	scanf("%f", &height);
//
//	return height;
//}