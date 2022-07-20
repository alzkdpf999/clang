#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //rand 포함하는 라이브러리
#include <string.h> // 문자열 기능
//글자의 마지막 -> 널문자(NULL)를 가지고 있음;
int main() {
	srand(time(NULL)); //시간의 따라 다른 시드를 써서 랜덤 숫자를 변하게 해준다.
	/*int(4Byte) float(4Byte), char (1Byte) short(2Byte) long long(8Byte)*/
	//배열
	int a[2] = { 1,2 };// 초기화 한번만 가능 
	//a[2] = {1,2} //a[2] -> a의 배열의 시작부터 2칸 뒤에 있는 칸 따라서 불가능

	int b[100];
	for (int i = 0; i < 100; i++) {
		b[i] = i + 1;
		printf("%d |", b[i]);
	}

	//int c[10], input, max = -2100000000, min = 2100000000;
	//for (int i = 0; i < 10; i++) {
	//	//printf("입력:");
	//	//scanf("%d", &input);
	//	c[i] = rand() % 46; //랜덤 숫자 넣기
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
	////"ASVSASDQEZ" // -> 배열 
	//system("cls");
	//char d[4] = { 'a','b','c'};// "abc" 가능 d[3]에는 NULL이 들어가 있음
	//scanf("%s", d);//문자는 &없이 
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
		a[3]= 0 null문자
		strcpy(a,"CMP");
	*/
	strcpy(k, "CMP");
	printf("%s", k);
	//내 정보 입력 및 출력 프로그램
	//내이름 내 학교 내 학번 내 성적 입력받아 출력 
	//내 성적의 총점과 평균도 출력

	int score[5], ssn, in;
	int sum = 0;
	char schoolName[20], name[10];
	printf("이름:"); scanf("%s", name);
	printf("학교 이름:"); scanf("%s", schoolName);
	printf("학번:"); scanf("%d", &ssn);
	for (int i = 0; i < 5; i++) {
		switch (i) {
		case 0:
			printf("%s", "수학");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		case 1:
			printf("%s", "영어");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		case 2:
			printf("%s", "사회");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		case 3:
			printf("%s", "과학");
			scanf("%d", &in);
			score[i] = in;
			sum += in;
			break;
		default:
			printf("%s", "국어");
			scanf("%d", &in);
			score[i] = in;
			sum += in;

		}
	}
		printf("| 이름 : %s | 학교 명 : %s | 학번 : %d | 수학 : %d | 영어 : %d | 사회 :%d | 과학 : %d | 국어 : %d | 총점 : %d | 평균 : %.2f|", name, schoolName, ssn, score[0], score[1], score[2], score[3], score[4], sum, (float)sum / 5);
	char str[5000]
	scanf("%[],str); //[]안에다가 넣은 것들만 나오게 함 ^를 앞에 붙이면([^])그 문자르 제외한 수 받는다
	scanf("%[^\n]",str)// == gets_s(str,5000);같다
	
	
}
