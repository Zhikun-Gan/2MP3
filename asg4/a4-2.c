#include<stdio.h>
#include<stdlib.h>
void placeShipPos(char (*M)[10], int depth, int width,int row,int col);
void placeShipNeg(char (*M)[10], int depth, int width,int row,int col);
void check(char(*M)[10],int depth, int width, int dim,char O,int*x);

void main(){
	char board[10][10];
	char board1[10][10];
	char board2[10][10];
	int aCheck=0;
	int bCheck=0;
	int cCheck=0;
	int dCheck=0;
	printf("In this game, each of both players will put 3 boats of dimensions 1*5, 1*3 and 1*4 into the 10*10 battleground. After done loading, each player will hit the opponent's battleground without knowing the specific position of the boats. Player who takes all opponent's boats down first is the winner.Below is your battleground. Good Luck!\n\n");
	int z=0;
	int row, col;
	int opt;
	do{
		{for (int i=0;i<10;i++){
			for (int j=0;j<10;j++){
			board[i][j]= 'O' ;
			}
		}
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",board[i][j]);}
			}
			printf("\n");
		}
		}
		printf("In this step you need to enter the starting point for the 1*5 ship.\n");
	int r=0;
	int x[4];	
	do{
		printf("please enter the number of the row:");
		scanf("%d",&row);
		printf("please enter the number of the column:");
		scanf("%d",&col);
		
		check(board,row,col,5,'O',x);
		aCheck=x[0];
		bCheck=x[1];
		cCheck=x[2];
		dCheck=x[3];
		printf("please select one of the following options\n");
			
		if (aCheck==6){
			printf("1. x+: ");
			{for (int i=0;i<5;i++){
				printf("%d %d, ",row,col+i);
			}
			}
			printf("\n");
			r+=1;
		}
		if (bCheck==6){
			printf("2. x-: ");
			{for (int i=0;i<5;i++){
				printf("%d %d, ",row,col-i);
			}
			}
			printf("\n");
			r+=1;
		}
		if (cCheck==6){
			printf("3. y+: ");
			{for (int i=0;i<5;i++){
				printf("%d %d, ",row+i,col);
			}
			}
			printf("\n");
			r+=1;
		}
		if (dCheck==6){
			printf("4. y-: ");
			{for (int i=0;i<5;i++){
				printf("%d %d, ",row-i,col);
			}
			}
			printf("\n");
			r+=1;
		}
		if(aCheck!=6&&bCheck!=6&&cCheck!=6&&dCheck!=6){
			printf("Invalid Input,please try again.\n");
		}
	}while(r<1);
	
		
		{for(int i=0;i<1;){
			scanf("%d",&opt);
			if(opt>=1&&opt<=4&&x[opt-1]==6)
				i+=1;
			else
				printf("Invalid Input, please try again\n");

		}
		}
		
		switch(opt){
			case 1:
			placeShipPos(board,row,col,1,5);
			break;

			case 2:
			placeShipNeg(board,row,col,1,5);
			break;

			case 3:
			placeShipPos(board,row,col,5,1);
			break;

			case 4:
			placeShipNeg(board,row,col,5,1);
			break;
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",board[i][j]);}
			}
			printf("\n");
		}
		}
		printf("Then you are going to place the next 1*3 ship.\n");
	int q=0;
	int y[4];	
	do{
		printf("Which row do you want to start with:");
		scanf("%d",&row);
		printf("Which column do you want to start with:");
		scanf("%d",&col);


		check(board,row,col,3,'O',y);
		aCheck=y[0];
		bCheck=y[1];
		cCheck=y[2];
		dCheck=y[3];
		printf("please select one of the following options\n");
			
		if (aCheck==4){
			printf("1. x+: ");
			{for (int i=0;i<3;i++){
				printf("%d %d, ",row,col+i);
			}
			}
			printf("\n");
			q+=1;
		}
		if (bCheck==4){
			printf("2. x-: ");
			{for (int i=0;i<3;i++){
				printf("%d %d, ",row,col-i);
			}
			}
			printf("\n");
			q+=1;
		}
		if (cCheck==4){
			printf("3. y+: ");
			{for (int i=0;i<3;i++){
				printf("%d %d, ",row+i,col);
			}
			}
			printf("\n");
			q+=1;
		}
		if (dCheck==4){
			printf("4. y-: ");
			{for (int i=0;i<3;i++){
				printf("%d %d, ",row-i,col);
			}
			}
			printf("\n");
			q+=1;
		}
		if(aCheck!=4&&bCheck!=4&&cCheck!=4&&dCheck!=4){
			printf("Invalid Input,please try again.\n");
		}
	}while(q<1);
	
		
		{for(int i=0;i<1;){
			scanf("%d",&opt);
			if(opt>=1&&opt<=4&&y[opt-1]==4)
				i+=1;
			else
				printf("Invalid Input, type in again\n");

		}
		}
		
		switch(opt){
			case 1:
			placeShipPos(board,row,col,1,3);
			break;

			case 2:
			placeShipNeg(board,row,col,1,3);
			break;

			case 3:
			placeShipPos(board,row,col,3,1);
			break;

			case 4:
			placeShipNeg(board,row,col,3,1);
			break;
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",board[i][j]);}
			}
			printf("\n");
		}
		}

		printf("Then you are going to place the next 1*4 ship.\n");
	int p=0;
	int t[4];
	do{
		printf("Which row do you want to start with:");
		scanf("%d",&row);
		printf("Which column do you want to start with:");
		scanf("%d",&col);
			
		check(board,row,col,4,'O',t);
		aCheck=t[0];
		bCheck=t[1];
		cCheck=t[2];
		dCheck=t[3];
		printf("please select one of the following options\n");
			
		if (aCheck==5){
			printf("1. x+: ");
			{for (int i=0;i<4;i++){
				printf("%d %d, ",row,col+i);
			}
			}
			printf("\n");
			p+=1;
		}
		if (bCheck==5){
			printf("2. x-: ");
			{for (int i=0;i<4;i++){
				printf("%d %d, ",row,col-i);
			}
			}
			printf("\n");
			p+=1;
		}
		if (cCheck==5){
			printf("3. y+: ");
			{for (int i=0;i<4;i++){
				printf("%d %d, ",row+i,col);
			}
			}
			printf("\n");
			p+=1;
		}
		if (dCheck==5){
			printf("4. y-: ");
			{for (int i=0;i<4;i++){
				printf("%d %d, ",row-i,col);
			}
			}
			printf("\n");
			p+=1;
		}
		if(aCheck!=5&&bCheck!=5&&cCheck!=5&&dCheck!=5){
			printf("Invalid Input,please try again.\n");
		}
	}while(p<1);
	
		
		{for(int i=0;i<1;){
			scanf("%d",&opt);
			if(opt>=1&&opt<=4&&t[opt-1]==5)
				i+=1;
			else
				printf("Invalid Input, please try again.\n");

		}
		}
		
		switch(opt){
			case 1:
			placeShipPos(board,row,col,1,4);
			break;

			case 2:
			placeShipNeg(board,row,col,1,4);
			break;

			case 3:
			placeShipPos(board,row,col,4,1);
			break;

			case 4:
			placeShipNeg(board,row,col,4,1);
			break;
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",board[i][j]);}
			}
			printf("\n");
		}
		}
		{if (z==0){
			for (int i=0;i<10;i++){
				for(int j=0;j<10;j++){
					board1[i][j]=board[i][j];
				}
			}
		}
		}
		{if (z==1){
			for(int i=0;i<10;i++){
				for(int j=0;j<10;j++)
					board2[i][j]=board[i][j];
				}
			}
		}
		system("clear");
		printf("Now player 2 please set your boat.\n");
		z=z+1;
	}while(z<2);
	char newboard1[10][10];
	char newboard2[10][10];
	int count=0;
	int newrow,newcol;
	int count1=0;
	int count2=0;
	{for (int i=0;i<10;i++){
			for (int j=0;j<10;j++){
			newboard1[i][j]= 'O' ;
			}
		}
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",newboard1[i][j]);}
			}
			printf("\n");
		}
		}



	printf("now player 1 start guessing.\n");
	while (count<12){
		printf("which point do you want to hit:\n");
		printf("# of row:");
		scanf("%d",&newrow);
		printf("# of column:");
		scanf("%d",&newcol);
		count1+=1;
		if(newrow<=9&&newrow>=0&&newcol<=10&&newcol>=0){
			if (newboard1[newrow][newcol]=='O'){
				if(board[newrow][newcol]=='S'){
					newboard1[newrow][newcol]='H';
					count+=1;
				}
				else if(board[newrow][newcol]=='O'){
					newboard1[newrow][newcol]='X';
				}
			}
			else{
				printf("Invalid Input.You lost one chance.\n");
			}
		}
		else{
			printf("Invalid Input. You lost one chance.\n");
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",newboard1[i][j]);}
			}
			printf("\n");
		}
		}

	}
	printf("you have used %d times to get all your opponent's boat.\n",count1);



	{for (int i=0;i<10;i++){
			for (int j=0;j<10;j++){
			newboard2[i][j]= 'O' ;
			}
		}
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",newboard2[i][j]);}
			}
			printf("\n");
		}
		}


	printf("now player 2 start guessing.\n");
	count=0;
	while (count<12){
		printf("which point do you want to hit:\n");
		printf("# of row:");
		scanf("%d",&newrow);
		printf("# of column:");
		scanf("%d",&newcol);
		count2+=1;
		if(newrow<=9&&newrow>=0&&newcol<=10&&newcol>=0){
			if (newboard2[newrow][newcol]=='O'){
				if(board[newrow][newcol]=='S'){
					newboard2[newrow][newcol]='H';
					count+=1;
				}
				else if(board[newrow][newcol]=='O'){
					newboard2[newrow][newcol]='X';
				}
			}
			else{
				printf("Invalid Input.You lost one chance.\n");
			}
		}
		else{
			printf("Invalid Input.You lost one chance.\n");
		}
		printf("   0 1 2 3 4 5 6 7 8 9\n");
		{for(int i=0;i<10;i++){
			for(int j=-1;j<10;j++){
				if (j==-1){
				printf("%2d",i);}
				else if (j!=-1){
				printf("%2c",newboard2[i][j]);}
			}
			printf("\n");
		}
		}

	}
	printf("you have used %d times to get all your opponent's boat.\n",count2);

	if(count1<count2){
		printf("Congradualations to player 1! You are the winner.\n");
	}
	if(count1>count2){
		printf("Congradualations to player 2! You are the winner.\n");
	}
	if(count1==count2){
		printf("This game is tied! Goodjob!\n");
	}

		
	
}
void placeShipPos(char (*M)[10], int depth, int width, int dim1,int dim2){
	for (int i=0;i<=dim1-1;i++){
		for(int j=0;j<=dim2-1;j++){
		M[depth+i][width+j]='S';
		}
	}
}
void placeShipNeg(char (*M)[10], int depth, int width, int dim1,int dim2){
	int result[10][10];
	for (int i=0;i<=dim1-1;i++){
		for(int j=0;j<=dim2-1;j++){
		M[depth-i][width-j]='S';
		}
	}
}
void check(char(*M)[10],int depth, int width, int dim,char O,int*x){
	char a[dim];
	char b[dim];
	char c[dim];
	char d[dim];
	int aCheck=0;
	int bCheck=0;
	int cCheck=0;
	int dCheck=0;

	if(width+dim<=10){
		aCheck=1;
	}
	else{
		aCheck=0;
	}

	if(width-dim>=-1){
		bCheck=1;
	}
	else{
		bCheck=0;
	}

	if(depth+dim<=10){
		cCheck=1;
	}
	else{
		cCheck=0;
	}

	if(depth-dim>=-1){
		dCheck=1;
	}
	else{
		dCheck=0;
	}

	{if(aCheck==1){
		for(int i=0;i<dim;i++){
			a[i]=M[depth][width+i];
		}
	}
	
	if(bCheck==1){
		for(int j=0;j<dim;j++){
			b[j]=M[depth][width-j];
		}
	}

	if(cCheck==1){
		for(int k=0;k<dim;k++){
			c[k]=M[depth+k][width];
		}
	}

	if(dCheck==1){
		for(int l=0;l<dim;l++){
			d[l]=M[depth-l][width];
		}
	}
	}
	if(aCheck==1){
		for(int i=0;i<dim;i++){
			if(a[i]==O){
				aCheck+=1;
			}
		}
	}
	if(bCheck==1){
		for(int j=0;j<dim;j++){
			if(b[j]==O){
				bCheck+=1;
			}
		}
	}
	if(cCheck==1){
		for(int k=0;k<dim;k++){
			if(c[k]==O){
				cCheck+=1;
			}
		}
	}
	if(dCheck==1){
		for(int l=0;l<dim;l++){
			if(d[l]==O){
				dCheck+=1;
			}
		}
	}
	x[0]=aCheck;
	x[1]=bCheck;
	x[2]=cCheck;
	x[3]=dCheck;
}

