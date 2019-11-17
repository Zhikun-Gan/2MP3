#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int loadValues(int x, int y, int(*M)[y]);
void Subtract(int x, int y, int(*M)[y],int(*N)[y]);
void Print(int x, int y,int (*M)[y]);
void Transpose(int x, int y, int (*M)[y]);
int Rank(int x,int y,int(*M)[y]);

void main(){
	int x,y,m,n,z;
	printf("please enter the number of rows for the first matrix:");
	scanf("%d",&x);
	printf("please enter the number of columns for the first matrix:");
	scanf("%d",&y);
	printf("please enter the number of rows for the second matrix:");
	scanf("%d",&m);
	printf("please enter the number of columns for the second matrix:");
	scanf("%d",&n);
	int A[x][y];
	int B[m][n];
	int judgeA=0;
	int judgeB=0;
	do{
	printf("Please enter a number between 1 and 6 to choose the action you want to do.\n1.Load values in the Matrix(A or B)\n2. Subtract matrices (A-B or B-A)\n3. Print matrix (A or B)\n4. Transpose matrix (A or B)\n5. Rank of matrix (A or B)\n6. Exit\n");
	scanf("%d",&z);
	if (z==1){
		printf("please enter the values of matrix A\n");
		judgeA=loadValues(x,y,A);
		printf("please enter the values of matrix B\n");
		judgeB=loadValues(m,n,B);
	}
	
	else if(z==2){
		int k;
		if (judgeA!=0&&judgeB!=0){
			if(x==m&&y==n){
				printf("If you want to see the result of A-B,please enter 1, if B-A, please enter 2.\n");
				scanf("%d",&k);
				if (k==1)
					Subtract(x,y,A,B);
				else if(k==2)
					Subtract(x,y,B,A);
				else 
					printf("Invalid Input %d\n",k);
			}
			else 
				printf("The matrices are not of same size.\n");
		}
		else
			printf("This action cannot be excuted as one or more matrices are empty\n");
	}

	else if(z==3){
		int j;
		printf("which matrix do you want to print?(enter 1 for A, 2 for B)\n");
		scanf("%d",&j);
		if (j==1){
			if (judgeA==0)
				printf("This action cannot be excuted as matrix A is empty.\n");
			else Print(x,y,A);
		}
		else if (j==2){
			if (judgeB==0)
				printf("This action cannot be excuted as matrix B is empty.\n");
			else Print(m,n,B);
		}
		else printf("Invalid input %d\n",j);
	}

	else if(z==4){
		int i;
		printf("which matrix do you want to transpose?(enter 1 for A, 2 for B\n");
		scanf("%d",&i);
		if (i==1){
			if(judgeA!=0){
				Transpose(x,y,A);
			}
			else printf("This action cannot be excuted as matrix A is empty.\n");
		}
		if (i==2){
			if(judgeB!=0){
				Transpose(m,n,B);
			}
			else printf("This action cannot be excuted as matrix B is empty.\n");
		}
	}

	else if(z==5){
		int t;
		printf("which matrix do you want to see the rank?(enter 1 for A, 2 for B\n");
		scanf("%d",&t);
		if (t==1){
			if(judgeA!=0){
				if(x==2&&y==2)
					printf("The rank of matrix A is %d.\n",Rank(x,y,A));
				else printf("This program can only compute 2x2 matrices.\n");
			}
		}
		else if(t==2){
			if(judgeB!=0){
				if(m==2&&n==2)
					printf("The rank of matrix B is %d.\n",Rank(m,n,B));
				else printf("This program can only compute 2x2 matrices.\n");
			}
		}
		else printf("Invalid Input\n");
	}
	else if(z==6)
		break;
	else {
		printf("Invalid input, please enter an integer between 1 and 6.\n");
	}
	}while(z!=6);
}

int loadValues(int x, int y, int(*M)[y]){
	for (int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&M[i][j]);
		}
	}
	printf("load completed.\n");
	return 1;
}
	

void Subtract(int x, int y, int(*M)[y],int(*N)[y]){
	printf("the result of substraction is:\n"); 
	int result[x][y];
	for (int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			result[i][j] = (M[i][j] - N[i][j]);
			printf("%5d",result[i][j]);
		}
		printf("\n");
	}
}

void Print(int x, int y,int (*M)[y]){
	
	for (int i=0;i<x;i++){
		for (int j=0;j<y;j++){
			printf("%5d",M[i][j]);
		}
		printf("\n");
	}
}
	
void Transpose(int x, int y, int (*M)[y]){
	for (int j=0;j<y;j++){
		for(int i=0;i<x;i++){
			printf("%5d",M[i][j]);
		}
		printf("\n");
	}
}
	
int Rank(int x,int y,int(*M)[y]){
	int rank;
	if ((M[0][0]*M[1][1]-M[0][1]*M[1][1])==0)
		rank=1;
	else if((M[0][0]*M[1][1]-M[0][1]*M[1][1])!=0)
		rank=2;
return rank;
}
