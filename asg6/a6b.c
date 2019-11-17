#include<stdio.h>
#include<string.h>

struct stud_info{
	char stud_firstName[100];
	char stud_lastName[100];
	int stud_studentNum;
	float stud_grade;
};
void Calculator(struct stud_info[],int);
float converter(float);
void bubblesort(float [], int );
float mode(float [],int );
void printfunction(struct stud_info[],int);

int main(){
	int number;
	char firstName[100];
	char lastName[100];
	
	printf("enter the number of students you want to enter data for:");
	scanf("%d",&number);
	struct stud_info software[number];
	

	for(int i=1;i<=number;i++){
		char firstName[100]={0};
		char lastName[100]={0};
		int studentNum=0;
		float grade=0;
		printf("please enter the first name of student %d:",i);
		scanf("%s",firstName);
		printf("please enter the last name of student %d:",i);
		scanf("%s",lastName);
		printf("please enter the student number of student %d:",i);
		scanf("%d",&studentNum);
		printf("please enter the percentage grade of student %d:",i);
		scanf("%f",&grade);

		strcpy(software[i-1].stud_firstName,firstName);
		strcpy(software[i-1].stud_lastName,lastName);
		software[i-1].stud_studentNum=studentNum;
		software[i-1].stud_grade=grade;

	}
	Calculator(software,number);
	puts("");
	printfunction(software,number);
}

void Calculator(struct stud_info software[],int count){
	float total=0;
	for(int i=0;i<count;i++){
		total=total+software[i].stud_grade;
	}
	float mean=total/count;
	printf("The mean is %.3f\n",mean);

	
	float array[count];
	for (int j=0;j<count;j++){
		array[j]=software[j].stud_grade;
	}
	bubblesort(array,count);
	if (count%2==0){
		printf("The median is %.3f\n",(array[count/2-1]+array[(count/2)])/2);
	}
	else if (count%2!=0){
		printf("The median is %.2f\n",array[count/2]);
	}


	float modeValue=mode(array,count);
	printf("The mode is %.2f\n",modeValue);
}
void bubblesort(float arr[], int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        float temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
}}
float mode(float a[],int n){
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j]*100 == a[i]*100)
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

void printfunction(struct stud_info software[],int count){
	for (int i=0;i<count;i++){
		printf("student %d: %s %s\n",i+1,software[i].stud_firstName,software[i].stud_lastName);
		printf("student number: %d\n",software[i].stud_studentNum);
		printf("grade: %.2f%%\n",software[i].stud_grade);
		puts("");
	}
}