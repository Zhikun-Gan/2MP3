#include<stdio.h>

int main(){
	int numlist[100]={0};
	int *numPtr=numlist;
	printf("please enter less than 100 integers,enter -1 to finish your input\n");
	
	while(numPtr-numlist<100&&*(numPtr-1)!=-1){
	scanf("%d",numPtr);
	numPtr++;
	}
	numPtr=numlist;
	for(int i=0;i<100;i++){
		for(int j=0;j<100-i-1;j++){
			if (*(numPtr+j)<*(numPtr+1+j)){
				int hold=*(numPtr+j+1);
				*(numPtr+1+j)=*(numPtr+j);
				*(numPtr+j)=hold;
			}
		}
	}
	printf("The largest integer is %d\n",*numPtr);
}