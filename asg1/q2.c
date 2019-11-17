#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	printf("please enter an integer:");
	scanf("%d", &x);
	if (x%4 == 0){
		printf("%s","Leap year \n");}
	else{
		printf("%s","Not a leap year\n");}
}
	
