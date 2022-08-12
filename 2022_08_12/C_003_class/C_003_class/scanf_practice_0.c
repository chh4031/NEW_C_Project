#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60 //60이라는 상수 선언
#include <stdio.h>

int main() {

	int input, minute, second;

	printf("초를 입력하시오 : ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("현재 %d 초는 %d 분 %d 초 입니다.\n", input, minute, second);



	/*int x, y, result;
	printf("두 정수 입력");
	scanf("%d %d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);
	result = x - y;
	printf("%d - %d = %d\n", x, y, result);
	result = x * y;
	printf("%d * %d = %d\n", x, y, result);
	result = x / y;
	printf("%d / %d = %d\n", x, y, result);
	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);*/



	/*double rate;
	double usd;
	int krw;

	printf("환율을 입력하시오. : "); scanf("%lf", &rate);
	printf("원화를 입력하시오. : "); scanf("%d", &krw);
	
	usd = krw / rate;
	printf("원화 %d원은 %lf달러 입니다.\n", krw, usd);*/



	/*float crl;

	printf("반지름 입력 : "); scanf("%f", &crl);
	printf("원의 면적 : %f", crl * crl * (float)3.14);*/


	/*int year_money;

	
	printf("연봉을 입력하시오 : "); 
	scanf("%d", &year_money);
	printf("월 수령액 : %d", (year_money / 12));*/
	



	/*int num1, num2;

	printf("첫번째 숫자를 입력 : "); scanf("%d", &num1);
	printf("두번째 숫자를 입력 : "); scanf("%d", &num2);
	printf("두수의 합 : %d", num1 + num2);*/



	/*char input = 'b';

	printf("%c\n", input);

	scanf("%c", &input);

	printf("%c\n", input);*/



	/*
	int num1, num2, num3;
	printf("정수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d %d %d를 입력함.\n", num1, num2, num3);
	*/

	return 0;
}

/* ★★★★★
* scanf 에러가 뜰 수 있음.(비주얼에서)
* scanf_s를 쓰거나 #define _CRT_SECURE_NO_WARNINGS를 사용.
* 단 절차지향의 영향인지 모르겠는데 맨 위에 쓰지 않으면 오류의 발생.
*/