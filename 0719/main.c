#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define FOR(value,min,max) for(int value = min; value<max; value++)
#define LOOP(text,time) for(int a = 0; a<time;a++) {printf(text);}
#define ENTER printf("\n");
#define FOR1(value1,value2,min,max) FOR(value1,min,max){ FOR(value2,min+1,max) {  printf("%d X %d= %d", value1,value2,value1 * value2);} ENTER }
//�ݺ���
int main() {
	LOOP("hi", 10);
	int i = 0;
	//while��
	while (i < 10) {
		printf("%d", i);
		i++;
		if (i == 10)
		{
			printf("\n");
		}

	}
	//for��
	for (int a = 0; a < 10; a++)
	{
		printf("%d", a);
		if (a == 9)
		{
			printf("\n");
		}
	}
	i = 0;
	//do-while�� �����Ǵ��� �������� �̷�� ������ ó�� �ѹ��� ���� ����
	do
	{
		printf("%d", i);
		i++;
	} while (i < 10);
	system("cls");

	//������ 
	FOR(j,1,10)//for (int j = 1; j < 10; j++)
	{
		FOR(i,2,10)//for (int i = 2; i < 10; i++)
		{

			printf("%d X %d = %d ", i, j, i * j);

		}
		ENTER
	}
	
	//N���� ���ڸ� �Է��Ͽ� �� �� ���� ū �� �� ���� ���� �� ���
	int cnt, a,number;
	printf("��� �Է��Ͻðڽ��ϱ�?");
	scanf("%d", &cnt);
	printf("���ڸ� �Է��ϼ���");
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
	printf("%d���� �� �� ���� ū ���� %d ���� ���� ���� %d\n", cnt, max, min);
	int total = max-min+1,sum = 0;
	FOR(a,min,max+1)//for (a = min; a <= max; a++) 
	{
		sum += a;
	}
	
	printf("���� : %d ��� :%.2f max�� min������ ����: %d",sum, (float)sum/total, total);
	system("cls");
	FOR1(i, j, 1, 10);

}