#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*A_008-------------------------------------------------------*/

	/*int i;
	double d;

	d = 5 / 4;
	printf("%d\n", d);

	d = (double)5 / 4;
	printf("%lf\n", d);*/
	// 큰쪽은 자동변환 안되면 강제로 (타입) 형태 
	


	/*A_007-------------------------------------------------------*/

	//int x, y;
	//x = 2 + 5, 5 - 3;
	//printf("a"), printf("b");
	//printf("\n%d", x); //앞에만 계산됨



	/*A_006-------------------------------------------------------*/
	 
	/*int x = 1, y = 2;
	int a, b, c, d = 19;
	a = (x > 0) ? x : -x;
	b = (x > y) ? x : y;
	c = (x < y) ? x : y;
	printf("%d %d %d\n", a, b, c);
	(d > 20) ? printf("성인") : printf("청소년");*/

	

	/*A_005-------------------------------------------------------*/

	/*int x, y;

	printf("두개의 정수 입력 : ");
	scanf("%d%d", &x, &y);

	printf("%d && %d = %d \n", x, y, x && y);
	printf("%d || %d = %d \n", x, y, x || y);
	printf("!%d = %d \n", x, !x);*/



	/*A_004-------------------------------------------------------*/

	/*int x, y;

	printf("두개의 정수 입력 : ");
	scanf("%d%d", &x, &y);

	printf("%d\n", x == y);
	printf("%d\n", x != y);
	printf("%d\n", x > y);
	printf("%d\n", x < y);
	printf("%d\n", x >= y);
	printf("%d\n", x <= y);*/



	/*A_003-------------------------------------------------------*/

	/*int x = 10, y = 10, z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20;

	printf("%d %d %d", x, y, z);*/



	/*A_002-------------------------------------------------------*/

	/*int x, y;
	x = 1;
	printf("%d", x + 1);
	printf("%d", y=x + 1);
	printf("%d", y=10+(x=2+7));
	printf("%d", y=x=3);*/



	/*A_001-------------------------------------------------------*/

	/*int a;
	a = 10;

	printf("a는 %d\n", a);

	a++;
	printf("a는 %d\n", a);

	a++;
	printf("a는 %d\n", a);

	int b = 10;
	printf("b = %d\n", ++b);
	printf("b = %d\n", b++);
	printf("b = %d\n", b);*/



	/*Q_002-------------------------------------------------------*/
	
	/*int user_money, price, change;

	printf("물건값 : ");
	scanf("%d", &price);
	printf("사용자가 낸 돈 : ");
	scanf("%d", &user_money);

	change = user_money - price;

	printf("10000원 : %d\n", change / 10000);
	change %= 10000;
	printf("5000원 : %d\n", change / 5000);
	change %= 5000;
	printf("1000원 : %d\n", change / 1000);
	change %= 1000;
	printf("500원 : %d\n", change / 500);
	change %= 500;
	printf("100원 : %d\n", change / 100);
	change %= 100;
	printf("50원 : %d\n", change / 50);
	change %= 50;
	printf("10원 : %d\n", change / 10);
	change %= 10;*/



	/*Q_001-------------------------------------------------------*/

	/*int weight, stature;
	float bmi, stature_1;
	printf("몸무게(kg)와 키(cm)를 입력 : ");

	scanf("%d %d", &weight, &stature);

	stature_1 = ((float)stature/100);
	bmi = weight / (stature_1 * stature_1);

	printf(" bmi = %.2f\n", bmi);

		if (bmi > 25) {
			printf("비만");
		}else if(bmi > 23){
			printf("과체중");
		}else if (bmi > 18.5) {
			printf("정상");
		}else {
			printf("저체중");
		}*/

	return 0;
}