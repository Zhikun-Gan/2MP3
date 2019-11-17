#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,z;
	int big, mid, small;
	printf("please enter the first integer:");
	scanf("%d",&x);
	printf("please enter the second integer:");
	scanf("%d",&y);
	printf("please enter the third integer:");
	scanf("%d",&z);
	
	if (x>y){
		if (y<z){
			if(z>x){
				big=z,mid=x,small=y;}
			if(z<x){
				big=x, mid=z, small=y;}
		}
		if(y>z){
			big=x,mid=y,small=z;}
	}
	if(y>x){
		if(y>z){
			if(z>x){
			big=y,mid=z,small=x;}
			if(z<x){
			big=y,mid=x,small=z;}
			}
		if(y<z){
			big=z,mid=y,small=x;}
	}
	printf("%d is the largest number,followed by %d and %d \n",big, mid ,small);
	}


	
