//switch.cpp
//control statement(제어문)
//conditional statement(조건문)
//if문-switch문
#include<stdio.h>
int main() {
	//char alpha = 'b';
	//switch (alpha) {
	//case 'a':
	//	printf("a를 선택하셨군요!");
	//	break;//break 필수!
	//case 'b':
	//	printf("b를 선택하셨군요!");
	//	break;

	//default:
	//	printf("선택하신 알파벳이 없음");
	//	break;
	//}

	//1)유저에게 1~3까지 입력받고,
	//1>1월입니다
	//2>2월입니다
	/*int month;
	printf("달입력:");
	scanf_s("%d", &month);
	switch (month) {
	case (1):
		printf("1월입니다.");
	    break;
	case (2):
		printf("2월입니다.");
	    break;
	case (3):
		printf("3월입니다.");
	    break;
	default:
		printf("오류");
		break;
	}*/


	//2)유저에게 두 수의 정수를 입력받고, +/-/*를 입력받고
	//+>두수의 합을 나타내고
	//->두수의 차를 나타내고
	//*>두수의 곱을 나타내는 프로그램
	//3 5 + > 3 + 5 = 8
	//4 2 - > 4 * 2 = 8
	/*int first, second;
	char op;

	printf("첫번째 정수:");
	scanf_s("%d", &first);
	printf("두번째 정수:");
	scanf_s("%d", &second);
	getchar();
	printf("+ - * 입력:");
	scanf_s("%c", &op);

	switch (op) {
	case '+':
			printf("%d %c %d = %d", first, op, second, first + second);
			break;
	case '-':
		printf("%d %c %d = %d", first, op, second, first - second);
		break;
	case '*':
		printf("%d %c %d = %d", first, op, second, first * second);
		break;
	defaut:
		printf("오류");
		break;
	}*/


	return 0;
}