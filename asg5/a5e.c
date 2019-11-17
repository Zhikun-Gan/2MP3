#include<stdio.h>

int main(){
	char string[100];
	printf("please enter a string\n");
	scanf("%s",string);
	char *strPtr=string;
	int count=0;
	
	while(*strPtr!='\0'){
	count++;
	strPtr++;
	}

	for(int i=0;i<count;i++){
		printf("%c",*(strPtr-1-i));
	}
}