#include<stdio.h>

int main(){
	char string[100];
	printf("please enter a string:\n");
	scanf("%s",string);
	char* strPtr=string;
	int vowelCount=0;
	int consCount=0;

	while(*strPtr!='\0'){
		switch(*strPtr){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			vowelCount++;
			break;
		default:
			consCount++;
		}
		strPtr++;
	}
	printf("The string has %d consonants and %d vowels",consCount,vowelCount);
}