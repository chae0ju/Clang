//1 char coffee[3][20]을 선언 후 유저에게 3개의 문자열을 입력받고 포인터 배열을 사용해서 
//각각의 커피 메뉴를 출력하는 프로그램 만들기
//2.int a = 10, int b = 20을 선언한 후 더블포인터를 선언 후 처음에는 a를 가리키는 코드를 만들고
//출력 후 b로 가리키는 코드로 작성하고 b를 출력하는 코드 만들기
//예) **pt > 10 **pt >20
#include<stdio.h>
#include<string.h>
int main() {
	////커피 3종류(20글자 이하)
	//char coffee[3][20];
	////유저에게 메뉴 입력
	//for (int i = 0; i <3; i++) {
	//	printf("메뉴 입력:");
	//	scanf("%s", coffee[i]);
	//}
	////20글자의 포인터 배열
	//char(*pc)[20];
	////포인터 배열을 사용한 값 출력
	//for (int i = 0; i < 3; i++) {
	//	pc = &coffee[i];
	//	printf("%d번째 메뉴:%s\n", i, pc);
	//}
	
	int a = 10;
	int b = 20;
	int* pt;
	int** ppt;

	pt = &a;
	ppt = &pt;
	printf("**ppt=%d\n", **ppt);

	pt = &b;
	printf("**ppt:%d\n", **ppt);


	return 0;
}