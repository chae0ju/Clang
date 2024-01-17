#include<stdio.h>

//int add(int x, int y) {
//	return x + y;
//}
//int multi(int x, int y){
//	return x * y;
//}
//int minus(int x, int y) {
//	return x - y;
//}
//
//int main() {
//
//	int a = add(10, 20);//30
//	printf("%d\n", a);
//	int b = multi(10, 20);//200
//	printf("%d\n", b);
//	int c = minus(10, 20);//-10
//	printf("%d", c);

//void printArray(int x[]) {
//	for (int i = 0; i < 10; i++) {
//		printf("%d", x[i]);
//	}
//}

//int main(){
//	int a[10] = { 1,2,3,4,5 };
//	int b[10] = { 4,1,23,5,6 };
//	printArray(a);

//void swap(int *x, int *y) {
//	int temp = *x;
//	*x = *y; //a == 8
//	*y = temp;//b == 5
//}
//int main(){
//
//	int a = 5;
//	int b = 8;
//	printf("a:%d b:%d\n", a, b);//5 8
//	
//	swap(&a, &b);
//	printf("a:%d b:%d\n", a, b);//8 5

void charswap(char* x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	char x = 'a';
	char y = 'b';
	printf("%c %c\n", x, y);

	charswap(&x, &y);
	printf("%c %c", x, y);
	return 0;
}