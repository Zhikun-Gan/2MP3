#include<stdio.h>

int main(){
	int IntVar;
	float FloatVar;
	char CharVar;
	printf("please input a floating point number:");
	scanf("%f",&FloatVar);
	printf("please input an integer:");
	scanf("%d",&IntVar);
	printf("please input a character:");
	scanf("%c",&CharVar);
	scanf("%c",&CharVar);

	int *inputIntPtr=&IntVar;
	float *inputFloatPtr=&FloatVar;
	char *inputCharPtr=&CharVar;

	printf("%s\n","floating point number:");
	printf("address: %p\n",inputFloatPtr);
	printf("value: %f\n",*inputFloatPtr);
	printf("Memory size: %d\n",sizeof(float));
	printf("\n");

	printf("%s\n","integer number:");
	printf("address: %p\n", inputIntPtr);
	printf("value: %d\n", *inputIntPtr);
	printf("Memory size: %d\n",sizeof(int));
	printf("\n");

	printf("%s\n","character:");
	printf("address: %p\n",inputCharPtr);
	printf("value: %s\n",inputCharPtr);
	printf("Memory size: %d\n",sizeof(char));
	printf("\n");
}
