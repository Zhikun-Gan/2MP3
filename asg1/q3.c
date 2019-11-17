#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char n[10];
	printf("please enter the name of the month:");
	scanf("%s",&n[0]);

	if (strcmp(n,"January")==0||strcmp(n,"March")==0||strcmp(n,"May")==0||strcmp(n,"July")==0||strcmp(n,"August")==0||strcmp(n,"October")==0||strcmp(n,"December")==0){
		printf("31 Days \n");
	}
	if(strcmp(n,"April")==0||strcmp(n,"June")==0||strcmp(n,"September")==0||strcmp(n,"November")==0){
		printf("30 Days \n");
	}
	if(strcmp(n,"February")==0){
		printf("28 or 29 Days \n");
	}
}
