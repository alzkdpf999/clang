#define _CRT_SECURE_NO_WARNINGS
//기능들을 무시하는
#include <stdio.h>

#define intinput(text, value) printf(text); scanf("%d",&value);
#define floatinput(text, value) printf(text); scanf("%f",&value);
#define charinput(text, value) printf(text); scanf("%s",value);
int main() {
	//변수명 이름 규칙 : 영문자 대소문자 및 숫자 및 언더바(_)만가능
	//숫자는 첫글자로 올 수 없음 
	//띄어쓰기 불가
	//int a = 3; //변수 선언
	//printf("%d , %d\n ",5,5);
	//float number = 15.4;
	//printf("%.2f\n", number);
	//char qwe = 'c';
	//printf("%c\n", qwe);
	//int BirthDay;
	//printf("입력하시요 :");
	//scanf_s("%d", &BirthDay);
	//float weight = 123.412;
	//printf("%d\n", BirthDay);
	//printf("%.2f", weight);
	//char name[100];
	//scanf_s("%s", name);
	//printf("%s", name);

	/*
	int year, month, day;
	printf("생년:"); scanf_s("%d", &year);
	printf("월:"); scanf_s("%d", &month);
	printf("일:"); scanf_s("%d", &day);
	float weight;
	printf("몸무게:"); scanf_s("%f", &weight);
	char gender[100], name[100];
	
	printf("성별:"); scanf("%s", gender);
	printf("이름:"); scanf("%s", name);
	printf("%d/%d/%d", year, month, day);
	printf(" 성별 : %s  나이 : %s", gender, name);
	printf("\n몸무게:%-9.2f", weight); 
	*/
	//UNICODE --> UTF-8
	//한글은 두칸씩 가져간다
	char gender[100], name[100];
	int year, month, day, age;
	float weight, cm;
	/*printf("성별:"); scanf("%s", gender);//=> charinput("성별:",gender)
	printf("나이:"); scanf("%d", &age); //=> intinput("성별:",age)
	printf("이름:"); scanf("%s", name); //=> charinput("성별:",gender)
	scanf("%d",&year);
	scanf("%d",&month);
	scanf("%d",&day);
	printf("생년 : %4d/%2d/%2d\n", year, month, day);
	printf("성별 : %10s\n", gender);
	printf("이름 : %10s\n", name);
	printf("나이 : %10d세", age);
	*/
	
	charinput("이름:", name);
	intinput("나이:", age);
	charinput("성별:", gender);
	intinput("년:", year);
	intinput("월:", month);
	intinput("일:", day);
	floatinput("몸무게:", weight);
	floatinput("키:",cm);
	printf("이름	: %10s\n", name);
	printf("나이	: %10d세\n", age);
	printf("성별	: %10s\n", gender);
	printf("생년	: %4d/%2d/%2d\n", year, month, day);
	printf("몸무게	: %10.2f\n", weight);
	printf("키	: %10.1f\n", cm);

}
