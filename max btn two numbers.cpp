#include<stdio.h>

 #define MAX(a,b) ((a)>(b))? (a) : (b)

int main (void){
printf("Max between 5 and 10 is %d\n", MAX(10, 20));
	 return 0;
}