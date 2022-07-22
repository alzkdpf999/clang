#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//포인터에 저장된 숫자는 주소
//0123456789 이런식으로 맨 앞에서 몇 칸 떨어져 있는지가 주소
int main() {
	int a;
	//&a --> a의 주소를 나오게 해줌
	printf("%d\n", &a);
	int b[2];
	printf("%d | %d\n", b, b + 1);
	// + 하면  자료형의 크기 만큼 여기서는 4바이트 만큼
	char c[2];
	printf("%d | %d\n", c, c + 1);
	printf("%d\n", sizeof(c[1])); //여기서는 1바이트 char이기 때문에

	printf("%d | %d\n", b, b + 0);
	printf("%d\n", &b[0]); // === b
	printf("%d\n", &b[1]); // === b + 1

	int e = 0;
	int f = 5;
	int* p = &e; // 포인터 표시 *  주소를 담는 int형
	char* d; // char형 포인터 주소를 담는
	printf("%d\n", *p);
	p = &f;
	//*&을 같이 쓰면 상쇄함
	printf("%d\n", *p);
	system("cls");


	//int g, h, i; 이상한 오류 발생 왜인지 모르겠음
	//printf("%d>", 1); scanf("%d", &g);
	//printf("%d>", 2); scanf("%d", &h);
	//printf("%d>", 3); scanf("%d", &i);

	//int* ptr[3]; //주소를 담는 배열
	//ptr[0] = &g;
	//ptr[1] = &h;
	//ptr[2] = &i;
	//for (int q = 0; q < 3; q++) {
	//	printf("%d >", q); scanf("%d\n", ptr[q]);
	//}


	/*
	int score[5]; //성적
	int index[5]; //학번
	int grade[5]; //학년
	for (int i = 0; i < 5; i++) {
		printf("성적"); scanf("%d", &score[i]);
		printf("학번"); scanf("%d", &index[i]);
		printf("학년"); scanf("%d", &grade[i]);
	}
	int* selectScore=0;
	int* selectIndex=0;
	int* selectGrade=0;
	int select;
	scanf("%d", &select);
		switch (select) {
		case 1:
			selectScore = &score[0];
			selectIndex = &index[0];
			selectGrade = &grade[0]; break;
		case 2:
			selectScore = &score[1];
			selectIndex = &index[1];
			selectGrade = &grade[1]; break;
		case 3:
			selectScore = &score[2];
			selectIndex = &index[2];
			selectGrade = &grade[2]; break;
		case 4:
			selectScore = &score[3];
			selectIndex = &index[3];
			selectGrade = &grade[3]; break;
		case 5:
			selectScore = &score[4];
			selectIndex = &index[4];
			selectGrade = &grade[4]; break;
		}
		printf("주소\n");
		printf("%d / %d / %d \n", *selectScore, *selectIndex, *selectGrade);
		*/
	srand(time(0));
	int arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 100 + 1; //1~100
	}
	int* find = 0;
	for (int q = 0; q < 100; q++) {
		if (arr[q] == 50) {
			find = &arr[q]; printf("Find!\n");
		}
	}
	printf("%d   |   %d   |   %d\n", *(find - 1), *(find + 0), *(find + 1));
	for (int q = 0; q < 100; q++) {
		printf("%d > ", arr[q]);
	}
	system("cls");



	srand(time(0));
	int arr1[10000];
	for (int i = 0; i < 10000; i++) {
		arr1[i] = rand() % 1000 + 1; //1~1000
	}
	int* find1 = 0;
	for (int q = 0; q < 10000 - 1; q++) {
		if ((arr1[q - 1] % 2 == 0) && (arr1[q] % 2 == 0) && (arr1[q + 1] % 2 == 0)) {
			find1 = &arr1[q];
		}
	}
	printf("%d   |   %d   |   %d\n", *(find1 - 1), *(find1 + 0), *(find1 + 1));
	//printf("%d | %d", find1, *find1);
	system("cls");

	int* task[100];
	int taskindex = 0;
	srand(time(0));
	int at[10000];
	for (int i = 0; i < 10000; i++) {
		at[i] = rand() % 1000 + 1; //1~1000
	}
	for (int q = 0; q < 10000 - 1; q++) {
		if ((at[q - 1] % 2 == 0) && (at[q] % 2 == 0) && (at[q + 1] % 2 == 0)) {
			if (taskindex < 100) {
				task[taskindex] = &at[q];
				taskindex++;
			}
		}
	}
	for (int i = 0; i < taskindex; i++) {
		printf("%d\n", *task[i]);
	}
	//printf("%d | %d", find1, *find1);
	system("cls");

	srand(time(0));
	int am[10000];
	for (int i = 0; i < 10000; i++) {
		am[i] = rand() % 1000 + 1; //1~1000
	}
	int* fit[100] = { 0 };
	int findeindex = 0;
	for (int q = 0; q < 10000 - 1; q++) {
		if ((am[q - 1] % 2 == 0) && (am[q] % 2 == 0) && (am[q + 1] % 2 == 0)) {
			q = q;
		}
		else {
			if (findeindex < 100) {
				fit[findeindex] = &am[q];
				findeindex++;
			}
		}
	}
	//printf("%d | %d", find1, *find1);
	for (int i = 0; i < findeindex; i++) {
		printf("%d\n", *fit[i]);
	}
	system("cls");
	int w = 10;
	int* r = &w;
	int** rr = &r; //이중 포인터
	// w == *r == **rr
	// &w == r == *rr
	// &w != &r == rr
	// &w != &r != &rr
	w = &r;
	printf("%d\n", *r);//55번쨰 줄과 같은 결과
	printf("%d\n", &r);
	printf("%d\n", **(int**)r); //w의 주소와 같은 결과
	printf("%d\n", &w);
	//밤에 영상 확인하면서 다시 체크


}