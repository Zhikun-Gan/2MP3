#include<stdio.h>

void stringConc(char*,char*);
int main(){
	char string1[50];
	char string2[50];
	printf("please enter the first string:");
	scanf("%s",string1);
	printf("please enter the second string:");
	scanf("%s",string2);
	char* s1Ptr=string1;
	char* s2Ptr=string2;

	stringConc(s1Ptr,s2Ptr);
}

void stringConc(char* s1Ptr, char* s2Ptr){
	while(*s1Ptr!='\0'){
		printf("%c",*s1Ptr);
		s1Ptr++;
	}
	while(*s2Ptr!='\0'){
		printf("%c",*s2Ptr);
		s2Ptr++;
	}
	printf("\n");
}