#define _CRT_SECURE_NO_WARNINGS
#define SEC_PER_MINUTE 60 //60�̶�� ��� ����
#include <stdio.h>

int main() {

	int input, minute, second;

	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf("%d", &input);

	minute = input / SEC_PER_MINUTE;
	second = input % SEC_PER_MINUTE;

	printf("���� %d �ʴ� %d �� %d �� �Դϴ�.\n", input, minute, second);



	/*int x, y, result;
	printf("�� ���� �Է�");
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

	printf("ȯ���� �Է��Ͻÿ�. : "); scanf("%lf", &rate);
	printf("��ȭ�� �Է��Ͻÿ�. : "); scanf("%d", &krw);
	
	usd = krw / rate;
	printf("��ȭ %d���� %lf�޷� �Դϴ�.\n", krw, usd);*/



	/*float crl;

	printf("������ �Է� : "); scanf("%f", &crl);
	printf("���� ���� : %f", crl * crl * (float)3.14);*/


	/*int year_money;

	
	printf("������ �Է��Ͻÿ� : "); 
	scanf("%d", &year_money);
	printf("�� ���ɾ� : %d", (year_money / 12));*/
	



	/*int num1, num2;

	printf("ù��° ���ڸ� �Է� : "); scanf("%d", &num1);
	printf("�ι�° ���ڸ� �Է� : "); scanf("%d", &num2);
	printf("�μ��� �� : %d", num1 + num2);*/



	/*char input = 'b';

	printf("%c\n", input);

	scanf("%c", &input);

	printf("%c\n", input);*/



	/*
	int num1, num2, num3;
	printf("������ �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d %d %d�� �Է���.\n", num1, num2, num3);
	*/

	return 0;
}

/* �ڡڡڡڡ�
* scanf ������ �� �� ����.(���־󿡼�)
* scanf_s�� ���ų� #define _CRT_SECURE_NO_WARNINGS�� ���.
* �� ���������� �������� �𸣰ڴµ� �� ���� ���� ������ ������ �߻�.
*/