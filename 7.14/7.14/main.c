#define _CRT_SECURE_NO_WARNINGS
//��ɵ��� �����ϴ�
#include <stdio.h>

#define intinput(text, value) printf(text); scanf("%d",&value);
#define floatinput(text, value) printf(text); scanf("%f",&value);
#define charinput(text, value) printf(text); scanf("%s",value);
int main() {
	//������ �̸� ��Ģ : ������ ��ҹ��� �� ���� �� �����(_)������
	//���ڴ� ù���ڷ� �� �� ���� 
	//���� �Ұ�
	//int a = 3; //���� ����
	//printf("%d , %d\n ",5,5);
	//float number = 15.4;
	//printf("%.2f\n", number);
	//char qwe = 'c';
	//printf("%c\n", qwe);
	//int BirthDay;
	//printf("�Է��Ͻÿ� :");
	//scanf_s("%d", &BirthDay);
	//float weight = 123.412;
	//printf("%d\n", BirthDay);
	//printf("%.2f", weight);
	//char name[100];
	//scanf_s("%s", name);
	//printf("%s", name);

	/*
	int year, month, day;
	printf("����:"); scanf_s("%d", &year);
	printf("��:"); scanf_s("%d", &month);
	printf("��:"); scanf_s("%d", &day);
	float weight;
	printf("������:"); scanf_s("%f", &weight);
	char gender[100], name[100];
	
	printf("����:"); scanf("%s", gender);
	printf("�̸�:"); scanf("%s", name);
	printf("%d/%d/%d", year, month, day);
	printf(" ���� : %s  ���� : %s", gender, name);
	printf("\n������:%-9.2f", weight); 
	*/
	//UNICODE --> UTF-8
	//�ѱ��� ��ĭ�� ��������
	char gender[100], name[100];
	int year, month, day, age;
	float weight, cm;
	/*printf("����:"); scanf("%s", gender);//=> charinput("����:",gender)
	printf("����:"); scanf("%d", &age); //=> intinput("����:",age)
	printf("�̸�:"); scanf("%s", name); //=> charinput("����:",gender)
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	printf("���� : %4d/%2d/%2d\n", year, month, day);
	printf("���� : %10s\n", gender);
	printf("�̸� : %10s\n", name);
	printf("���� : %10d��", age);
	*/
	
	charinput("�̸�:", name);
	intinput("����:", age);
	charinput("����:", gender);
	intinput("��:", year);
	intinput("��:", month);
	intinput("��:", day);
	floatinput("������:", weight);
	floatinput("Ű:",cm);
	printf("�̸�	: %10s\n", name);
	printf("����	: %10d��\n", age);
	printf("����	: %10s\n", gender);
	printf("����	: %4d/%2d/%2d\n", year, month, day);
	printf("������	: %10.2f\n", weight);
	printf("Ű	: %10.1f\n", cm);

}
