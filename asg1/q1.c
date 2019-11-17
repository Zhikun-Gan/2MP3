
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	printf("please enter an integer between 1 and 100:");
	scanf("%d",&x);
	if (x<=100)
		if (x>=90){
			printf("%d \n",12);}
		else if(x>=85){
			printf("%d \n",11);}
		else if(x>=80){
			printf("%d \n",10);}
		else if(x>=77){
			printf("%d \n",9);}
		else if(x>=73){
			printf("%d \n",8);}
		else if(x>=70){
			printf("%d \n",7);}
		else if(x>=67){
			printf("%d \n",6);}
		else if(x>=63){
			printf("%d \n",5);}
		else if(x>=60){
			printf("%d \n",4);}
		else if(x>=57){
			printf("%d \n",3);}
		else if(x>=53){
			printf("%d \n",2);}
		else if(x>=50){
			printf("%d \n",1);}
		else if(x>=0){
			printf("%d \n",0);}
		else{
			printf("Please enter an integer between 0 an 100 \n");}

	else {
		printf("Please enter an integer between 0 an 100 \n");}

}

