//1.변수 a,b를 각각 선언하고 10과 20을 넣은 후,포인터를 사용해서 서로 숫자 바꾸기
//2.문자열:'americano'를 선언 후 유저에게 정수 n과 문자 m를 입력받고 해당 n번째의 글에서 
//m문자로 바꾸기
//3.문자열 배열에서 오른쪽과 같이 있고 'americano','latte','vanilla' 유저에게 
//문자열을 입력받고 해당 커피를 추가한 후 전부 보여주기
#include<stdio.h>
#include<string.h>
int main() {
	//1.
	//int a = 10;
	//int b = 20;

	//int* pa;
	//int* pb;
	//pa = &a;
	//pb = &b;
	//printf("a:%d b:%d\n", a, b);

	//int temp;
	//temp = *pa;//10
	//*pa = *pb;//20
	//*pb = temp;//10
	//printf("a:%d b:%d\n", a, b);
	
	/*char king = 'k';
	char queen = 'q';
	char* pk;
	char* pq;
	pk = &king;
	pq = &queen;
	printf("king:%c queen:%c\n", king, queen);

	int temp;
	temp = *pk;
	*pk = *pq;
	*pq = temp;
	printf("king:%c queen:%c", king, queen);*/

	//2.
	/*char coffee[] = "americano";
	int num;
	printf("n을 입력");
	scanf("%d", &num);
	getchar();
	char alpha;
	printf("alphabet 입력:");
	scanf("%c", &alpha);
	coffee[num] = alpha;
	printf("%s", coffee);*/

	//3.
	char menu[4][20] = {
		"americano",
		"latte",
		"vanilla",
	};
	char newMenu[20];
	printf("메뉴 추가:");
	scanf("%s", newMenu);
	strcpy(menu[3],newMenu);//strcpy(어디에, 무엇을)

	for (int i = 0; i < 4; i++) {
		printf("%s\n", menu[i]);
	}
	return 0;
}