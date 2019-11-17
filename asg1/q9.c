#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n;
	printf("please enter an integer between 1 and 10, this program will generate an nxn star pattern:");
	scanf("%d",&n);
	if(n<=10){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				printf("*");
			} 
			printf("\n");
		}
	}
	else {
		printf("Please enter a number equal or less than 10.\n");}
	return 0;
}
