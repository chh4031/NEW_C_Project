#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	/*long fact = 1;
	int i = 1, n;
	printf("정수를 입력하시요: ");
	scanf("%d", &n);
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!은 %d입니다.", n, fact);*/



	/*long fact = 1;
	int i, n;
	printf("정수를 입력하시요:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		fact = fact * i;
	printf("%d!은 %d입니다.\n", n, fact);*/



	/*int i;
	printf("**********\n");
	for (i = 0; i < 5; i++)
		printf("*		 *\n");
	printf("**********\n");*/



	/*int i, n;
	printf("정수를 입력하시요:");
	scanf("%d", &n);
	printf("====================\n");
	printf(" i i의 세제곱\n");
	printf("====================\n");
	for (i = 1; i <= n; i++)
		printf("%5d %5d\n", i, i * i * i);*/



	//int i, sum;
	//sum = 0;
	//for (i = 1; i <= 10; i++)
	//	sum += i; // sum = sum + i;와 같음
	//printf("1부터 10까지의 정수의 합= %d\n", sum);



	//int i;
	//for (i = 0; i < 5; i++) // i는 0부터 4까지 증가
	//	printf("Hello World!\n");
	//return 0;



	//int answer = 59; // 정답
	//int guess;
	//int tries = 0;
	//do {
	//	printf("정답을 추측하여 보시오: ");
	//	scanf("%d", &guess);
	//	tries++;
	//	if (guess > answer) // 사용자가 입력한 정수가 정답보다 높으면
	//		printf("제시한 정수가 높습니다.");
	//	if (guess < answer) // 사용자가 입력한 정수가 정답보다 낮으면
	//		printf("제시한 정수가 낮습니다.");
	//} while (guess != answer);
	//printf("축하합니다. 시도횟수=%d", tries);



	/*int n = 0;
	do {
		printf(" % d\n", n);
		n = n + 1;
	} while (n < 3);*/



	/*int i = 0;
	do
	{
		printf("1---새로만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하시요.\n");
		scanf("%d", &i);
	} while (i < 1 || i > 3);
	printf("선택된 메뉴=%d\n", i);*/



	//int number, sum = 0;
	//// 루프 몸체가 적어도 한번은 실행된다. 
	//do
	//{
	//	printf("정수를 입력하시오: ");
	//	scanf("%d", &number);
	//	sum += number;
	//} while (number != 0);
	//printf("숫자들의 합 = %d \n", sum);



	/*double money = 1.0;
	for (int i = 2; i <= 30; i++) {
		money *= 2.0;
		printf("%d일날 현재 금액=%lf\n", i, money);
	}*/



	/*int halflife;
	double initial;
	double current;
	int years = 0;
	printf("반감기를 입력하시오(년): ");
	scanf("%d", &halflife);
	initial = 100.0;
	current = initial;
	while (current > initial / 10.0) {
		years += halflife;
		current = current / 2.0;
		printf("%d년 후에 남은 양=%f", years, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간=%d년", years);*/



	/*int x, y, r;
	printf("두개의 정수를 입력하시오(큰수, 작은수): ");
	scanf("%d%d", &x, &y);
	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수는 %d입니다.\n", x);*/



	/*int grade, n;
	float sum, average;

	n = 0;
	sum = 0;
	grade = 0;
	printf("성적 입력을 종료하려면 음수를 입력하시오\n");
	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);
		sum += grade;
		n++;
	}
	sum = sum - grade; 
	n--;

	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);*/



	/*int i = 3;
	while (i)
	{
		printf("%d은 참입니다.", i);
		i--;
	}
	printf("%d은 거짓입니다.", i);*/



	//int i, n, sum;
	//i = 0; // 변수 초기화
	//sum = 0; // 변수 초기화
	//while (i < 5)
	//{
	//	printf("값을 입력하시오: ");
	//	scanf("%d", &n);
	//	sum = sum + n; // sum += n;과 같다.
	//	i++;
	//}
	//printf("합계는 %d입니다.\n", sum);



	/*int i, n, sum;
	printf("정수 입력 : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1투어 %d까지의 합은 %d 입니다.\n", n, sum);*/



	/*int n;
	int i = 1;
	printf("출력하고자하는것 : \n");
	scanf("%d", &n);

	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}*/



	/*int n;
	printf("===============\n");
	printf("n n의 제곱\n");
	printf("===============\n");

	n = 1;
	while (n <= 10) {
		printf("%5d %5d\n", n, n * n);
		n++;
	}*/



	/*int i = 0;

	while (i < 5) {
		printf("Hello world\n");
		i++;
	}*/

	return 0;
}