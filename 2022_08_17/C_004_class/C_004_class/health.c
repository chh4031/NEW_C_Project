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
	// ū���� �ڵ���ȯ �ȵǸ� ������ (Ÿ��) ���� 
	


	/*A_007-------------------------------------------------------*/

	//int x, y;
	//x = 2 + 5, 5 - 3;
	//printf("a"), printf("b");
	//printf("\n%d", x); //�տ��� ����



	/*A_006-------------------------------------------------------*/
	 
	/*int x = 1, y = 2;
	int a, b, c, d = 19;
	a = (x > 0) ? x : -x;
	b = (x > y) ? x : y;
	c = (x < y) ? x : y;
	printf("%d %d %d\n", a, b, c);
	(d > 20) ? printf("����") : printf("û�ҳ�");*/

	

	/*A_005-------------------------------------------------------*/

	/*int x, y;

	printf("�ΰ��� ���� �Է� : ");
	scanf("%d%d", &x, &y);

	printf("%d && %d = %d \n", x, y, x && y);
	printf("%d || %d = %d \n", x, y, x || y);
	printf("!%d = %d \n", x, !x);*/



	/*A_004-------------------------------------------------------*/

	/*int x, y;

	printf("�ΰ��� ���� �Է� : ");
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

	printf("a�� %d\n", a);

	a++;
	printf("a�� %d\n", a);

	a++;
	printf("a�� %d\n", a);

	int b = 10;
	printf("b = %d\n", ++b);
	printf("b = %d\n", b++);
	printf("b = %d\n", b);*/



	/*Q_002-------------------------------------------------------*/
	
	/*int user_money, price, change;

	printf("���ǰ� : ");
	scanf("%d", &price);
	printf("����ڰ� �� �� : ");
	scanf("%d", &user_money);

	change = user_money - price;

	printf("10000�� : %d\n", change / 10000);
	change %= 10000;
	printf("5000�� : %d\n", change / 5000);
	change %= 5000;
	printf("1000�� : %d\n", change / 1000);
	change %= 1000;
	printf("500�� : %d\n", change / 500);
	change %= 500;
	printf("100�� : %d\n", change / 100);
	change %= 100;
	printf("50�� : %d\n", change / 50);
	change %= 50;
	printf("10�� : %d\n", change / 10);
	change %= 10;*/



	/*Q_001-------------------------------------------------------*/

	/*int weight, stature;
	float bmi, stature_1;
	printf("������(kg)�� Ű(cm)�� �Է� : ");

	scanf("%d %d", &weight, &stature);

	stature_1 = ((float)stature/100);
	bmi = weight / (stature_1 * stature_1);

	printf(" bmi = %.2f\n", bmi);

		if (bmi > 25) {
			printf("��");
		}else if(bmi > 23){
			printf("��ü��");
		}else if (bmi > 18.5) {
			printf("����");
		}else {
			printf("��ü��");
		}*/

	return 0;
}