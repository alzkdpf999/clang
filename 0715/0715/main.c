#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { //연산 1.사칙 +,-,/,*,% 2.관계 3.논리
	//사칙연산
	//소수점이 있는 연산이여야지 소수점 나옴 아니면 정수만 나옴 
	//만약 소수점이 있는것과 없는것을 섞어쓰면 소수점 있는걸로 나옴
	int a, b,c;
	printf(">>>>"); scanf("%d", &a); 
	printf(">>>>"); scanf("%d", &b);
	printf(">>>>"); scanf("%d", &c);
	printf("%d + %d + %d = %d\n", a, b, c , a + b + c);
	printf("%d - %d - %d = %d\n", a, b, c, a - b - c);
	printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
	printf("%.2f / %.2f / %.2f= %.2f\n", (float)a, (float)b, (float)c, (float)a / b / c);
	printf("%d %% %d %% %d = %d\n", a, b, c, a % b % c);
	system("pause");
	//관계연산
	//소수점 관계없이 참이면 1, 거짓이면 0이 나옴
	int d, e;
	printf(">>>>"); scanf("%d", &d);
	printf(">>>>"); scanf("%d", &e);
	printf("%d 1이면 e가 더 크다.\n", d < e);
	printf("%d 1이면 d가 더 크다.\n", d > e);
	printf("%d 1이면 e가 더 크거나 같다.\n", d <= e);
	printf("%d 1이면 d가 더 크거나 같다.\n", d >= e);
	printf("%d 1이면 d와 e가 같다.\n", d == e);
	printf("%d 1이면 d와 e는 다르다.\n", d != e);
	system("pause");
	//논리연산
	// &&(and) ||(or) !(not)
	int f, g, h;
	f = 5, g = 4, h = 5;
	printf("%d > %d && %d > %d = %d\n", f,g,g,h,(f> g)&&(g>h));
	printf("%d > %d || %d > %d = %d\n", f, g, g, h, (f > g) || (g > h));
	printf("!(%d > %d || %d > %d) = %d\n", f, g, g, h, !((f > g) || (g > h)));
	//비트 연산
	//1111  == 15 and 연산이면 (&)  1111  == 15 or연산 (|)  1111 == 15 not연산(~)
	//1101  == 13					1101  == 13				~15 == -16  
	//1101  == 13					1111  == 15
	printf("%d & %d = %d\n", 15, 13, 15 & 13); // ==13
	printf("%d | %d = %d\n", 15, 13, 15 | 13); // ==15 
	printf("~%d = %d\n", 15, ~15); // == -16 
	// ~15 ==> 1111111 1111111 1111111 00001111 == -16
	//  15 ==> 0000000 0000000 0000000 11110000 
	//맨 왼쪽의 비트는 부호를 표시 1이면 음수 0이면 양수	
	// 0000000 0000000 0000000 00000001 = 1
	// 0000000 0000000 0000000 00000010 = 2
	// 1000000 0000000 0000000 0000000 =? 
	// 1000000 0000000 0000000 0000001 = ? +1
	// .... 
	// 1111111 1111111 111111 11110000 = ? + ?? = -16
	//소수점이 있는것은 불가능 
	int i, j;
	printf(">>>>"); scanf("%d", &i);
	printf(">>>>"); scanf("%d", &j);
	printf("%d & %d = %d\n", i,j,i&j); 
	printf("%d | %d = %d\n", i, j,  i | j);
	printf("~%d = %d\n", i + j, ~(i + j));
	printf("~%d = %d\n", i + j, ~(i + j));
	printf("~%d = %d\n", i + j, ~(i + j));
	
}