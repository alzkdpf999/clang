#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //rand �����ϴ� ���̺귯��
#include <string.h> // ���ڿ� ���
//������ ������ -> �ι���(NULL)�� ������ ����;
int main() {
	srand(time(NULL)); //�ð��� ���� �ٸ� �õ带 �Ἥ ���� ���ڸ� ���ϰ� ���ش�.
	/*int(4Byte) float(4Byte), char (1Byte) short(2Byte) long long(8Byte)*/
	//�迭
	int a[2] = { 1,2 };// �ʱ�ȭ �ѹ��� ���� 
	//a[2] = {1,2} //a[2] -> a�� �迭�� ���ۺ��� 2ĭ �ڿ� �ִ� ĭ ���� �Ұ���

	int b[100];
	for (int i = 0; i < 100; i++) {
		b[i] = i + 1;
		printf("%d |", b[i]);
	}

	//int c[10], input, max = -2100000000, min = 2100000000;
	//for (int i = 0; i < 10; i++) {
	//	//printf("�Է�:");
	//	//scanf("%d", &input);
	//	c[i] = rand() % 46; //���� ���� �ֱ�
	//	if (max < c[i]) max = c[i];
	//	if (min > c[i]) min = c[i];
	//}
	//for (int i = 0; i < 10; i++) {
	//	printf("[%d] ", c[i]);
	//}
	//printf("max : %d, min : %d", max, min);

	//printf("%d", 'A');
	//printf("hello world");
	////72 68 68 92 96
	////"ASVSASDQEZ" // -> �迭 
	//system("cls");
	//char d[4] = { 'a','b','c'};// "abc" ���� d[3]���� NULL�� �� ����
	//scanf("%s", d);//���ڴ� &���� 
	//printf("%s\n", d);
	//printf("%d %d %d %d\n", d[0], d[1], d[2], d[3]);
	//


	char k[10] = "ABC";
	printf("%s\n", k);
	/*
		char a[10]="ABC";
		a[0]="m"
		a[1]="c"
		a[2]="d"
		a[3]= 0 null����
		strcpy(a,"CMP");
	*/
	strcpy(k, "CMP");
	printf("%s", k);
	//�� ���� �Է� �� ��� ���α׷�
	//���̸� �� �б� �� �й� �� ���� �Է¹޾� ��� 
	//�� ������ ������ ��յ� ���

	int score[5], ssn, in;
	int sum = 0;
	char schoolName[20], name[10];
	printf("�̸�:"); scanf("%s", name);
	printf("�б� �̸�:"); scanf("%s", schoolName);
	printf("�й�:"); scanf("%d", &ssn);
	for (int i = 0; i < 5; i++) {
		switch (i) {
		case 0:
			printf("%s", "����");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		case 1:
			printf("%s", "����");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		case 2:
			printf("%s", "��ȸ");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		case 3:
			printf("%s", "����");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		default:
			printf("%s", "����");
			scanf("%d", &in);
			score[i] = in;
			sum += in;

		}
	}
		printf("| �̸� : %s | �б� �� : %s | �й� : %d | ���� : %d | ���� : %d | ��ȸ :%d | ���� : %d | ���� : %d | ���� : %d | ��� : %.2f|", name, schoolName, ssn, score[0], score[1], score[2], score[3], score[4], sum, (float)sum / 5);
}
