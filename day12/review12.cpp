//1. Book 구조체를 만들어 주세요 >  책 제목,작가,가격,ISBN
#include<stdio.h>
#include<string.h>
//struct Book{
//	char title[50];
//	char writer[50];
//	int price;
//	int ISBN;
//};
//2.책의 가격을 올려주는 RaiseBookPrice를 함수 만들어주세요.
//int RaiseBookPrice(Book* price,int add) {
//	price += add;
//}
//3.책의 작가를 바꿔주는 ChangeWriter를 함수 만들어주세요.
//void ChangeWriter(Book* writer, char new_writer) {
//	Book.writer = *new_writer;
//}
//int main() {
//	Book.title = "ABC";
//
//	printf("책 제목:%s 작가:%s 가격:%d ISBN:%d",Book.title,Book.writer,Book.price,Book.ISBN );
//
//	return 0;
//}



typedef struct Book {
	char title[50];
	char writer[50];
	int price;
	int ISBN;
}Book;
void RaiseBookPrice(Book* something) {
	
	int p;
	printf("가격을 입력:");
	scanf("%d", &p);
	something->price += p;
}
void ChangeWriter(Book* something) {
	char name[50];
	printf("작가를 입력:");
	scanf("%s", &name);
	strcpy(something->writer, name);
}
int main() {
	Book a = { "mega","study",15000,1234 };
	RaiseBookPrice(&a);
	ChangeWriter(&a);
	printf("책 제목:%s 작가:%s 가격:%d ISBN:%d", a.title, a.writer,a.price, a.ISBN);

	return 0;

}

