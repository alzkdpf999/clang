#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Լ�
int/*������� ����*/ A/*�Լ��� �̸�*/(/*�Է� ��*/int a, int b, int c) {
	printf("A");
	printf("B");
	printf("%d", &a);
	return 0; // 0�� �Լ��� ���� ����μ� �����ش�.

	//printf() �̰͵� �Լ�
}

//�Լ� �����
int Plus(int a, int b) 
{
	return a + b;
}
int Minu(int a, int b) {
	return a - b;
}
int rhq(int a, int b) {
	return a * b;
}
float sksnrl(int a, int b) {
	return (float)a / b;
}

void MemorySwap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//������ �迭�� ����

void Case() {
	printf("======================================================\n");

}
float Calculator(char operator1,float number1, float number2) {
	switch (operator1) { //����ġ������ �� ����¥�� ���ڴ� ����
	case '+': return number1 + number2;
	case '-': return number1 - number2;
	case '*': return number1 * number2;
	case '/': return number1 / number2;
	}
	return 0;
}
float ScanNumber() {
	float temp;
	scanf("%f", &temp);
	return temp;
}
char ScanOperator() {
	int temp;
	printf("1: + 2: - 3: * 4: /\n");
	scanf("%d", &temp);
	switch (temp) {
	case 1: return '+' ;
	case 2: return '-' ;
	case 3: return '*';
	case 4: return '/' ;
	default: printf("�߸� �Է�");
	
	}
	printf("\n");
}
int main() { //������ �����Լ�
	{
	char arr[2][3] = { 1,2,3,4,5,6 };
	int* ptr = arr; // �����Ϳ� �迭�� �ּ� �ֱ� 1���� �迭�� �ּ�ó�� ���
	//int** ptr = arr ������ �迭���ּ�ó�� ���
	printf("%x\n", arr);
	printf("%x\n", &arr[0]);
	printf("%x\n", &arr[1]);
	printf("%x\n", &arr[0][0]);
	printf("%d\n", arr[0][0]);  // 1

	int gugu[9][9] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			gugu[i][j] = i * j;
			printf("%d |", gugu[i][j]);
		}
		printf("\n");
	}

	int gugu2[81] = { 0 };
	for (int i = 0; i < 81; i++)
	{
		gugu2[i] = (i / 9) * (i % 9);

		if (i % 9 == 0) printf("\n");
		else if (i == 0) continue;
		else {
			printf("%d |", gugu2[i]);
		}
	}
	} //������ �迭
	{
		printf("\n%d\n", Plus(3, 4));
		int m = 0, n = 0;
		char k = 'a';
		printf("���ڸ� �Է��Ͻÿ�");
		//scanf("%d", &m);
		printf("������ �Է��Ͻÿ�");
		//scanf(" %c", &k);
		printf("���ڸ� �Է��Ͻÿ�");
		//scanf("%d", &n);

		switch (k) {
		case '+':
			printf("%d", Plus(m, n));
			break;
		case '-':
			printf("%d", Minu(m, n));
			break;

		case '*':
			printf("%d", rhq(m, n));
			break;

		case '/':
			printf("%.2f", sksnrl(m, n));
			break;
		default: printf("err");
		}
		
		int a = 5, b = 3;
		printf("a: %d\nb: %d\n", a, b);
		MemorySwap(&a, &b);
		printf("a: %d\nb: %d\n", a, b);
		system("cls");
	} //�Լ��� �̿��� ���� ,�޸� ����
	//Case();
	//printf("%.2f\n", Calculator(ScanOperator(),  ScanNumber(), Calculator(ScanOperator(), ScanNumber(), ScanNumber())));
	////���ڸ� �����ʿ��� �������� �����Ѵ� ���� ScanOperator() �� �������̸� ���� ����
	//Case();
	float result = ScanNumber();
	while (1) {
		result = Calculator(ScanOperator(), ScanNumber(),result);
		printf("%.2f\n", result);
		Case();
		
	}

}

