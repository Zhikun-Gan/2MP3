#include<stdio.h>
#include<string.h>

float converter(float);
struct stud_info{
	char stud_firstName[100];
	char stud_lastName[100];
	int stud_studentNum;
	char stud_program[100];
	float stud_gpa;
};

int main(){
	struct stud_info mcmaster;
	struct stud_info *mcmasterPtr;
	mcmasterPtr=&mcmaster;

	char firstName[100];
	char lastName[100];
	int studentNum;
	char program[100];
	float gpa;

	printf("please enter the first name of the student:");
	scanf("%s",firstName);
	printf("please enter the last name of the student:");
	scanf("%s",lastName);
	printf("please enter the student number of the student:");
	scanf("%d",&studentNum);
	printf("please enter the program of the student:");
	scanf("%s",program);
	printf("please enter the 12-point gpa of the student:");
	scanf("%f",&gpa);

	strcpy(mcmasterPtr->stud_firstName,firstName);
	strcpy(mcmasterPtr->stud_lastName,lastName);
	mcmasterPtr->stud_studentNum=studentNum;
	strcpy(mcmasterPtr->stud_program,program);
	mcmasterPtr->stud_gpa=gpa;

	printf("the 4-point GPA for %s %s is %.1f\n",firstName,lastName,converter(gpa));

	puts("");
	printf("information for the student:\n");
	printf("name: %s %s\n",mcmasterPtr->stud_firstName,mcmasterPtr->stud_lastName);
	printf("student number: %d\n",mcmasterPtr->stud_studentNum);
	printf("program: %s\n",mcmasterPtr->stud_program);
	printf("12-point gpa: %.1f\n",mcmasterPtr->stud_gpa);
}


float converter(float a){
	float b;
	if (a<=12){
		if(a>=10.9){
		b=4.0;}
		
		else if(a>=10.6){
		b=3.9;}
		
		else if(a>=10.3){
		b=3.8;}

		else if(a>=10.0){
		b=3.7;}

		else if(a>=9.7){
		b=3.6;}

		else if(a>=9.4){
		b=3.5;}

		else if(a>=9.1){
		b=3.4;}

		else if(a>=8.8){
		b=3.3;}

		else if(a>=8.5){
		b=3.2;}

		else if(a>=8.2){
		b=3.1;}

		else if(a>=7.9){
		b=3.0;}

		else if(a>=7.6){
		b=2.9;}

		else if(a>=7.3){
		b=2.8;}

		else if(a>=7.0){
		b=2.7;}

		else if(a>=6.7){
		b=2.6;}

		else if(a>=6.4){
		b=2.5;}

		else if(a>=6.1){
		b=2.4;}

		else if(a>=5.8){
		b=2.3;}

		else if(a>=5.5){
		b=2.2;}

		else if(a>=5.2){
		b=2.1;}

		else if(a>=4.9){
		b=2.0;}

		else if(a>=4.6){
		b=1.9;}

		else if(a>=4.3){
		b=1.8;}

		else if(a>=4.0){
		b=1.7;}

		else if(a>=3.7){
		b=1.6;}

		else if(a>=3.4){
		b=1.5;}

		else if(a>=3.1){
		b=1.4;}

		else if(a>=2.8){
		b=1.3;}

		else if(a>=2.5){
		b=1.2;}

		else if(a>=2.2){
		b=1.1;}

		else if(a>=1.8){
		b=1.0;}

		else if(a>=1.6){
		b=0.9;}

		else if(a>=1.3){
		b=0.8;}

		else if(a>=1.0){
		b=0.7;}

		else if(a>=0.9){
		b=0.6;}

		else if(a>=0.7){
		b=0.5;}

		else if(a>=0.6){
		b=0.4;}

		else if(a>=0.4){
		b=0.3;}

		else if(a>=0.3){
		b=0.2;}

		else if(a>=0.1){
		b=0.1;}

		else if(a>=0.0){
		b=0.0;}
		}
	return b;
}