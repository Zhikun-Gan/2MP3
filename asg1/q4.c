#include <stdio.h>
#include <stdlib.h>
int main(){
	int x;
	printf("please enter an integer:");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d is an even number \n",x);}
	else{
		printf("%d is an odd number \n",x);}
}
