#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	printf("This program will tell you the factorial of a number\n");
	printf("please enter an integer:");
	scanf("%d",&x);

	int test =1;
	int med=1;

	while(test<=x){
		med=med*test;
		test=test+1;}

	printf("%d\n",med);
	}


