#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int month, days;
	scanf("%d", &month);

	switch (month) {
	case 2:
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d�� �ϼ��� %d �Դϴ�.", month, days);


	/*float height, weight, bmi;

	printf("�����Կ� Ű �Է� : ");
	scanf("%f %f", &weight, &height);

	height = height / 100;
	bmi = weight / (height * height);
	
	if (bmi < 18.5) {
		printf("%.2f�� ��ü�� �Դϴ�.", bmi);
	}
	else if (bmi < 23) {
		printf("%.2f�� ���� �Դϴ�.", bmi);
	}
	else if (bmi < 25) {
		printf("%.2f�� ��ü�� �Դϴ�.", bmi);
	}
	else {
		printf("%.2f�� ���Դϴ�.", bmi);
	}*/

	/*int score;

	printf("�����Է� : ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("�հ� : ���� A\n");
	}
	else if(score >= 80) {
		printf("�հ� : ���� B\n");
	}
	else if (score >= 70) {
		printf("�հ� : ���� C\n");
	}
	else if (score >= 60) {
		printf("�հ� : ���� D\n");
	}
	else {
		printf("���հ�\n");
	}*/

	/*int age;

	printf("���̸� �Է��Ͻÿ�.");
	scanf("%d", &age);

	if (age < 20) {
		printf("�л��Դϴ�.\n");
		if (age <= 13) {
			printf("�ʵ��л��Դϴ�.\n");
		}
		else {
			printf("��/����л��Դϴ�.\n");
		}
	}
	else {
		printf("�Ϲ��Դϴ�.\n");
	}*/

	/*int year;
	printf("���� �Է� : ");
	scanf("%d", &year);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("%d�� �����Դϴ�.", year);
	}
	else {
		printf("%d�� ������ �ƴմϴ�.", year);
	}*/

	/*int num;
	printf(" ������ �Է� : ");
	scanf("%d", &num);

	if ((num % 2) == 0) {
		printf("¦��\n");
	}else {
		printf("Ȧ��\n");
	}*/
	
	/*int num;
	printf("�����Է� : ");
	scanf("%d", &num);

	if (num > 0) {
		printf("���\n");
	}
	printf("�Էµ� ���� %d", num);*/

	/*int age;

	printf("���̸� �Է� : ");
	scanf("%d", &age);

	if (age < 20) {
		printf("�л��Դϴ�.\n");
	}
	else {
		printf("�Ϲ��Դϴ�.\n");
	}
	printf("�Է¹��� ���� %d �Դϴ�.", age);*/

	return 0;
}