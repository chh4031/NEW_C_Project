#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	/*long fact = 1;
	int i = 1, n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	while (i <= n)
	{
		fact = fact * i;
		i++;
	}
	printf("%d!�� %d�Դϴ�.", n, fact);*/



	/*long fact = 1;
	int i, n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		fact = fact * i;
	printf("%d!�� %d�Դϴ�.\n", n, fact);*/



	/*int i;
	printf("**********\n");
	for (i = 0; i < 5; i++)
		printf("*		 *\n");
	printf("**********\n");*/



	/*int i, n;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	printf("====================\n");
	printf(" i i�� ������\n");
	printf("====================\n");
	for (i = 1; i <= n; i++)
		printf("%5d %5d\n", i, i * i * i);*/



	//int i, sum;
	//sum = 0;
	//for (i = 1; i <= 10; i++)
	//	sum += i; // sum = sum + i;�� ����
	//printf("1���� 10������ ������ ��= %d\n", sum);



	//int i;
	//for (i = 0; i < 5; i++) // i�� 0���� 4���� ����
	//	printf("Hello World!\n");
	//return 0;



	//int answer = 59; // ����
	//int guess;
	//int tries = 0;
	//do {
	//	printf("������ �����Ͽ� ���ÿ�: ");
	//	scanf("%d", &guess);
	//	tries++;
	//	if (guess > answer) // ����ڰ� �Է��� ������ ���亸�� ������
	//		printf("������ ������ �����ϴ�.");
	//	if (guess < answer) // ����ڰ� �Է��� ������ ���亸�� ������
	//		printf("������ ������ �����ϴ�.");
	//} while (guess != answer);
	//printf("�����մϴ�. �õ�Ƚ��=%d", tries);



	/*int n = 0;
	do {
		printf(" % d\n", n);
		n = n + 1;
	} while (n < 3);*/



	/*int i = 0;
	do
	{
		printf("1---���θ����\n");
		printf("2---���Ͽ���\n");
		printf("3---���ϴݱ�\n");
		printf("�ϳ��� �����Ͻÿ�.\n");
		scanf("%d", &i);
	} while (i < 1 || i > 3);
	printf("���õ� �޴�=%d\n", i);*/



	//int number, sum = 0;
	//// ���� ��ü�� ��� �ѹ��� ����ȴ�. 
	//do
	//{
	//	printf("������ �Է��Ͻÿ�: ");
	//	scanf("%d", &number);
	//	sum += number;
	//} while (number != 0);
	//printf("���ڵ��� �� = %d \n", sum);



	/*double money = 1.0;
	for (int i = 2; i <= 30; i++) {
		money *= 2.0;
		printf("%d�ϳ� ���� �ݾ�=%lf\n", i, money);
	}*/



	/*int halflife;
	double initial;
	double current;
	int years = 0;
	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	scanf("%d", &halflife);
	initial = 100.0;
	current = initial;
	while (current > initial / 10.0) {
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� ��=%f", years, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð�=%d��", years);*/



	/*int x, y, r;
	printf("�ΰ��� ������ �Է��Ͻÿ�(ū��, ������): ");
	scanf("%d%d", &x, &y);
	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);*/



	/*int grade, n;
	float sum, average;

	n = 0;
	sum = 0;
	grade = 0;
	printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ�\n");
	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);
		sum += grade;
		n++;
	}
	sum = sum - grade; 
	n--;

	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);*/



	/*int i = 3;
	while (i)
	{
		printf("%d�� ���Դϴ�.", i);
		i--;
	}
	printf("%d�� �����Դϴ�.", i);*/



	//int i, n, sum;
	//i = 0; // ���� �ʱ�ȭ
	//sum = 0; // ���� �ʱ�ȭ
	//while (i < 5)
	//{
	//	printf("���� �Է��Ͻÿ�: ");
	//	scanf("%d", &n);
	//	sum = sum + n; // sum += n;�� ����.
	//	i++;
	//}
	//printf("�հ�� %d�Դϴ�.\n", sum);



	/*int i, n, sum;
	printf("���� �Է� : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum);*/



	/*int n;
	int i = 1;
	printf("����ϰ����ϴ°� : \n");
	scanf("%d", &n);

	while (i <= 9) {
		printf("%d * %d = %d\n", n, i, n*i);
		i++;
	}*/



	/*int n;
	printf("===============\n");
	printf("n n�� ����\n");
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