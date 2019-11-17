#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n;
	int ab;
	printf("please enter an integer between 1 and 10:");
	scanf("%d",&n);
	if (1<=n&n<=10){
		for (int i=1;i<=2*n-1;i++){
			ab=abs(n-i);
			for (int j=1;j<=2*n-1;j++){
				if (j>=n-(n-ab)+1){
					if (j<=n+(n-ab)-1){
						printf("*");}
					else{
						printf(" ");}}
				else{
					printf(" ");}
			}
			printf("\n");
		}
	}
	else{
		printf("please enter a valid number.");}
	return 0;
}
