/*�ۼ��� : 2022_08_10
���� : ������
*/

#include <stdio.h>

int main() {
	/*ex01_________________________________________________*/

	int x;
	int y;
	int sum;

	x = 300;
	y = 700;

	sum = x + y;
	printf("�μ��� ��: %d\n", sum);

	/*ex02_________________________________________________*/

	float f; //�Ǽ���

	f = y / x;
	printf("y / x = %f\n", f);

	/*ex03_________________________________________________*/

	int num;
	x = 3;

	num = x * x - 5 * x + 6;

	printf("num = %d \n", num);

	/*ex04_________________________________________________*/

	int a, b, product;
	float quotient;

	a = 2;
	b = 3;
	product = a * b;
	quotient = (float) a / b;

	printf("product = %d\n", product);
	printf("quotient = %f\n", quotient);

	/*ex05_________________________________________________*/

	int 
		num1 = 20, 
		num2 = 10,
		a1 = num1 + num2,
		a2 = num1 - num2,
		a3 = num1 * num2,
		a4 = num1 / num2;
	
	printf(
		"�μ��� ��: %d\n�μ��� ��:%d\n�μ��� ��: %d\n�μ��� ��: %d\n",
		a1, a2, a3, a4);

	return 0;
}

/*
stdio ��ó����
int(�Լ����Ÿ��) main(�Լ��̸�) void(�Է°��� ����)
return(�� ��ȯ, �Լ����Ÿ�԰� ���ƾ���.)
*/