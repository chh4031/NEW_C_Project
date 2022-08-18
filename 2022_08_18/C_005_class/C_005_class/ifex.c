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
	printf("%d의 일수는 %d 입니다.", month, days);


	/*float height, weight, bmi;

	printf("몸무게와 키 입력 : ");
	scanf("%f %f", &weight, &height);

	height = height / 100;
	bmi = weight / (height * height);
	
	if (bmi < 18.5) {
		printf("%.2f는 저체중 입니다.", bmi);
	}
	else if (bmi < 23) {
		printf("%.2f는 정상 입니다.", bmi);
	}
	else if (bmi < 25) {
		printf("%.2f는 과체중 입니다.", bmi);
	}
	else {
		printf("%.2f는 비만입니다.", bmi);
	}*/

	/*int score;

	printf("성적입력 : ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("합격 : 학점 A\n");
	}
	else if(score >= 80) {
		printf("합격 : 학점 B\n");
	}
	else if (score >= 70) {
		printf("합격 : 학점 C\n");
	}
	else if (score >= 60) {
		printf("합격 : 학점 D\n");
	}
	else {
		printf("불합격\n");
	}*/

	/*int age;

	printf("나이를 입력하시오.");
	scanf("%d", &age);

	if (age < 20) {
		printf("학생입니다.\n");
		if (age <= 13) {
			printf("초등학생입니다.\n");
		}
		else {
			printf("중/고등학생입니다.\n");
		}
	}
	else {
		printf("일반입니다.\n");
	}*/

	/*int year;
	printf("연도 입력 : ");
	scanf("%d", &year);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("%d는 윤년입니다.", year);
	}
	else {
		printf("%d는 윤년이 아닙니다.", year);
	}*/

	/*int num;
	printf(" 정수를 입력 : ");
	scanf("%d", &num);

	if ((num % 2) == 0) {
		printf("짝수\n");
	}else {
		printf("홀수\n");
	}*/
	
	/*int num;
	printf("정수입력 : ");
	scanf("%d", &num);

	if (num > 0) {
		printf("양수\n");
	}
	printf("입력된 값은 %d", num);*/

	/*int age;

	printf("나이를 입력 : ");
	scanf("%d", &age);

	if (age < 20) {
		printf("학생입니다.\n");
	}
	else {
		printf("일반입니다.\n");
	}
	printf("입력받은 수는 %d 입니다.", age);*/

	return 0;
}