#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int n;
	int ab;
	int i=1;
	printf("please enter an integer between 1 and 10:");
	scanf("%d",&n);
	if (n>=1&n<=10){
		do{
			ab=abs(n-i);
			int j=n-(n-ab)+1;
			int h=n+(n-ab)-1;
			int k=0;
			do{
				(printf(" "));}
			while(++k<n-(n-ab)+1);
		
			do{
				(printf("*"));}
			while(++j<=n+(n-ab)-1);
		
			do{
				(printf(" "));}
			while(++h<=2*n-1);
			printf("\n");}
		while(++i<=2*n-1);
	}
	else{
		printf("Please enter a valid number.");
	}
	return 0;
}
	
	
		
