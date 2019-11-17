#include<stdio.h>
#include<stdlib.h>
int main(){
	float x;
	int a=0,b=0,c=0,e=0;
	float quat=0.000000, dime=0.000000,nickel=0.000000,penny=0.000000;
	printf("This calculater will help you finding optimal combinations of changes.\n");
	printf("Please enter the number of change:");
	scanf("%f",&x);

	while(x-0.250000>=quat){
		a=a+1;
		quat=0.25*a;}
	x=x-quat;
	
	
	while(x-0.100000>=dime){
		b=b+1;
		dime=0.1*b;
	}
	x=x-dime;
	
	
	while(x-0.050000>=nickel){
		c=c+1;
		nickel=0.050000*c;
	}
	x=x-nickel;
	
	e=(x+0.0005)*100;
	printf("%d",e);
	
	x=x+nickel+dime+quat;
	
	printf("To creat $%f in change use %d quarters,%d dimes,%d nickels and %d pennies.\n",x,a,b,c,e);
	}



