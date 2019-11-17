#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int result;
	int first=0,second=1;
	printf("Please enter an integer n, this program will find the first n terms of Fibonacci series: " );
	scanf("%d",&n);

	if(n==0){
		printf("  \n");}

	else if(n==1){
		printf("%d \n",first);
	}

	else if(n==2){
		printf("%d,%d \n",first,second);
	}
	
	else if(n>2){
		printf("%d,%d,",first,second);
		for (int i=2;i<n-1;i++){
			result=first+second;
			first=second;
			second=result;
			printf("%d,",result);}
		result=first+second;
		printf("%d \n",result);
	}
	return 0;
}
