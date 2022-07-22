#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//함수
int/*결과물의 형태*/ A/*함수의 이름*/(/*입력 값*/int a, int b, int c) {
	printf("A");
	printf("B");
	printf("%d", &a);
	return 0; // 0을 함수의 수행 결과로서 돌려준다.

	//printf() 이것도 함수
}

//함수 만들기
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
//다차원 배열의 묶음

void Case() {
	printf("======================================================\n");

}
float Calculator(char operator1,float number1, float number2) {
	switch (operator1) { //스위치에서는 한 글자짜리 문자는 가능
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
	default: printf("잘못 입력");
	
	}
	printf("\n");
}
int main() { //진입점 메인함수
	{
	char arr[2][3] = { 1,2,3,4,5,6 };
	int* ptr = arr; // 포인터에 배열의 주소 넣기 1차원 배열의 주소처럼 사용
	//int** ptr = arr 다차원 배열의주소처럼 사용
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
	} //다차원 배열
	{
		printf("\n%d\n", Plus(3, 4));
		int m = 0, n = 0;
		char k = 'a';
		printf("숫자를 입력하시오");
		//scanf("%d", &m);
		printf("연산을 입력하시오");
		//scanf(" %c", &k);
		printf("숫자를 입력하시오");
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
	} //함수를 이용한 계산기 ,메모리 스왑
	//Case();
	//printf("%.2f\n", Calculator(ScanOperator(),  ScanNumber(), Calculator(ScanOperator(), ScanNumber(), ScanNumber())));
	////인자를 오른쪽에서 왼쪽으로 실행한다 따라서 ScanOperator() 맨 오른쪽이면 먼저 실행
	//Case();
	float result = ScanNumber();
	while (1) {
		result = Calculator(ScanOperator(), ScanNumber(),result);
		printf("%.2f\n", result);
		Case();
		
	}

}

