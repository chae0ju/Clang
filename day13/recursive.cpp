//recursive.app
#include<stdio.h>

//Àç±ÍÇÔ¼ö
//4!=4*3*2*1

int factorial(int n) {
	if (n == 1) { 
		return 1; 
	}
	else { 
		return n * factorial(n - 1); 
	}
}

int main() {
	printf("%d", factorial(5));
	return 0;
}