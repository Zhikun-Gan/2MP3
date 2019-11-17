#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	float a;
	float b;
	float c;
	int n;
	float result1;
	float result2;
	printf("please enter the value of a:");
	scanf("%f",&a);
	printf("please enter the value of b:");
	scanf("%f",&b);
	printf("please enter the value of c:");
	scanf("%f",&c);
	printf("please enter the number of digits you want to keep:");
	scanf("%d",&n);
	result1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	result2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	printf("the first root is located at %.*f and the second root is located at %.*f \n",n,result1,n,result2);
	return 0;
}