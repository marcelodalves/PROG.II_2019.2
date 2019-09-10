#include <stdio.h>

int num;
int func(int a, int b);

int main(){
	int first = 0, sec = 50;
	num = 10;
	num += func(first,sec); //num = -15 + 25 = 10  
	printf("\nnum = %d \tfirst = %d \tsec = %d",num,first,sec);
	
	return 0;
}
int func(int a,int b){
	a = (a + b)/2; //25
	num -= a; // num = 10 - 25; >>>> -15
	return a; // 25
}
