#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float a,b;
	int c;
	printf("please enter a number between 0 and 12:");
	scanf("%f",&a);
	c=a*10;
	switch(c){
	case 109 ... 120:
		b=4.0;
		break;
	case 106 ... 108:
		b=3.9;
		break;
	case 103 ... 105:
		b=3.8;
		break;
	case 100 ... 102:
		b=3.7;
		break;
	case 97 ... 99:
		b=3.6;
		break;
	case 94 ... 96:
		b=3.5;
		break;
	case 91 ... 93:
		b=3.4;
		break;
	case 88 ... 90:
		b=3.3;
		break;
	case 85 ... 87:
		b=3.2;
		break;
	case 82 ... 84:
		b=3.1;
		break;
	case 79 ... 81:
		b=3.0;
		break;
	case 76 ... 78:
		b=2.9;
		break;
	case 73 ... 75:
		b=2.8;
		break;
	case 70 ... 72:
		b=2.7;
		break;
	case 67 ... 69:
		b=2.6;
		break;
	case 64 ... 66:
		b=2.5;
		break;
	case 61 ... 63:
		b=2.4;
		break;
	case 58 ... 60:
		b=2.3;
		break;
	case 55 ... 57:
		b=2.2;
		break;
	case 52 ... 54:
		b=2.1;
		break;
	case 49 ... 51:
		b=2.0;
		break;
	case 46 ... 48:
		b=1.9;
		break;
	case 43 ... 45:
		b=1.8;
		break;
	case 40 ... 42:
		b=1.7;
		break;
	case 37 ... 39:
		b=1.6;
		break;
	case 34 ... 36:
		b=1.5;
		break;
	case 31 ... 33:
		b=1.4;
		break;
	case 28 ... 30:
		b=1.3;
		break;
	case 25 ... 27:
		b=1.2;
		break;
	case 22 ... 24:
		b=1.1;
		break;
	case 18 ... 21:
		b=1.0;
		break;
	case 16 ... 17:
		b=0.9;
		break;
	case 13 ... 15:
		b=0.8;
		break;
	case 10 ... 12:
		b=0.7;
		break;
	case 9:
		b=0.6;
		break;
	case 7 ... 8:
		b=0.5;
		break;
	case 6:
		b=0.4;
		break;
	case 4 ... 5:
		b=0.3;
		break;
	case 3:
		b=0.2;
		break;
	case 1 ... 2:
		b=0.1;
		break;
	case 0:
		b=0.0;
		break;
	default:
		printf("Invalid input \n");
	}
	printf("%.1f\n",b);
	return 0;
}
