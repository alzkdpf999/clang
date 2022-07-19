#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FOR(value,min,max) for(int value = min; value<max; value++)
#define LOOP(text,time) for(int a = 0; a<time;a++) {printf(text);}
#define ENTER printf("\n");
#define FOR1(value1,value2,min,max) FOR(value1,min,max){ FOR(value2,min+1,max) {  printf("%d X %d= %d", value1,value2,value1 * value2);} ENTER }
//반복문
int main() {
	LOOP("hi", 10);
	int i = 0;
	//while문
	while (i < 10) {
		printf("%d", i);
		i++;
		if (i == 10)
		{
			printf("\n");
		}

	}
	//for문
	for (int a = 0; a < 10; a++)
	{
		printf("%d", a);
		if (a == 9)
		{
			printf("\n");
		}
	}
	i = 0;
	//do-while은 조건판단을 나중으로 미루기 때문에 처음 한번만 실행 가능
	do
	{
		printf("%d", i);
		i++;
	} while (i < 10);
	system("cls");

	//구구단 
	FOR(j,1,10)//for (int j = 1; j < 10; j++)
	{
		FOR(i,2,10)//for (int i = 2; i < 10; i++)
		{

			printf("%d X %d = %d ", i, j, i * j);

		}
		ENTER
	}
	
	//N개의 숫자를 입력하여 그 중 가장 큰 수 와 가장 작은 수 출력
	int cnt, a,number;
	printf("몇번 입력하시겠습니까?");
	scanf("%d", &cnt);
	printf("숫자를 입력하세요");
	int max = -2147483646, min = 2147483647;
	FOR(a,0,cnt)//for (a = 0; a < cnt; a++)
	{
		scanf("%d", &number);
		int temp = number; 
		if (temp >= max)
		{
			max = temp;
		}
		if (temp <= min)
		{
			min = temp;
		}
		
	}
	printf("%d개의 수 중 가장 큰 수는 %d 가장 작은 수는 %d\n", cnt, max, min);
	int total = max-min+1,sum = 0;
	FOR(a,min,max+1)//for (a = min; a <= max; a++) 
	{
		sum += a;
	}
	
	printf("총합 : %d 평균 :%.2f max와 min사이의 갯수: %d",sum, (float)sum/total, total);
	system("cls");
	FOR1(i, j, 1, 10);

}