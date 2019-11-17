#include<stdio.h>

struct item{
	char name[100];
	int quantity;
	float cost;
}produce[100],deli[100],bakery[100],frozen[100];

void additem(struct item[],int);
void editquantity(struct item[],int);
void editcost(struct item[],int);

int main(){
	int option;
	int produceCount=0;
	int deliCount=0;
	int bakeryCount=0;
	int frozenCount=0;
	do{
		printf("\n%s\n%s\n%s\n%s\n%s\n","1. Add an item to inventory.","2. Change the quantity of an item in inventory.","3. Change the cost of an item in inventory.","4. Output inventory to file","5. Exit");
		printf("Please select one of these options above:");

		scanf("%d", &option);
		if(option==1){
			printf("\n%s\n%s\n%s\n%s\n","1. produce","2. deli","3.bakery","4. frozen");

			printf("Please select which type of inventory you want to add item to:");

			int option1sub=0;
			scanf("%d",&option1sub);

			if (option1sub==1){
				additem(produce, produceCount);
				produceCount++;
			}

			else if (option1sub==2){
				additem(deli, deliCount);
				deliCount++;
			}

			else if (option1sub==3){
				additem(bakery, bakeryCount);
				bakeryCount++;
			}

			else if (option1sub==4){
				additem(frozen, frozenCount);
				frozenCount++;
			}
			else {
				printf("Invalid Input, return to main menu\n");
			}
		}
		else if(option==2){
			printf("\n%s\n%s\n%s\n%s\n","1. produce","2. deli","3.bakery","4. frozen");

			printf("Please select at which department is the item that you want to change the quantity of:");

			int option2sub=0;
			scanf("%d",&option2sub);

			if(option2sub==1){
				editquantity(produce,produceCount);
			}
			else if(option2sub==2){
				editquantity(deli,deliCount);
			}
			else if(option2sub==3){
				editquantity(bakery,bakeryCount);
			}
			else if(option2sub==4){
				editquantity(frozen,frozenCount);
			}
			else{
			printf("Invalid Input, return to main menu\n");
			}
		}
		
		else if(option==3){
			printf("\n%s\n%s\n%s\n%s\n","1. produce","2. deli","3.bakery","4. frozen");

			printf("Please select at which department is the item that you want to change the cost of:");

			int option3sub=0;
			scanf("%d",&option3sub);

			if(option3sub==1){
				editcost(produce,produceCount);
			}
			else if(option3sub==2){
				editcost(deli,deliCount);
			}
			else if(option3sub==3){
				editcost(bakery,bakeryCount);
			}
			else if(option3sub==4){
				editcost(frozen,frozenCount);
			}
			else{
			printf("Invalid Input, return to main menu\n");
			}
		}

		else if(option==4){
			FILE *fPtr;
			fPtr=fopen("inventory.txt","w");
			if(fPtr==NULL){
				puts("file cannot be opened");
			}
			else{
				fprintf(fPtr,"Produce department\n");
				for(int pro=0;pro<produceCount;pro++){
					fprintf(fPtr,"%s%s%d%s%.2f\n",produce[pro].name,", quantity: ",produce[pro].quantity,", cost: $", produce[pro].cost);
				}

				fprintf(fPtr,"\ndeli department\n");
				for(int de=0;de<deliCount;de++){
					fprintf(fPtr,"%s%s%d%s%.2f\n",deli[de].name,", quantity: ",deli[de].quantity,", cost: $", deli[de].cost);
				}
				fprintf(fPtr,"\nbakery department\n");
				for(int bak=0;bak<bakeryCount;bak++){
					fprintf(fPtr,"%s%s%d%s%.2f\n",bakery[bak].name,", quantity: ",bakery[bak].quantity,", cost: $", bakery[bak].cost);
				}
				fprintf(fPtr,"\nfrozen food department\n");
				for(int fro=0;fro<frozenCount;fro++){
					fprintf(fPtr,"%s%s%d%s%.2f\n",frozen[fro].name,", quantity: ",frozen[fro].quantity,", cost: $", frozen[fro].cost);
				}
				printf("File has been successfully saved.\n");
			}
			fclose(fPtr);
		}

		else if(option==5){
		break;
		}
		else{
		printf("Invalid Input, return to main menu\n");
		}

	}while(option!=5);

	return 0;
}

void additem(struct item x[],int xCount){
	
	printf("Please enter the name of the item:");
	scanf("%s",x[xCount].name);

	printf("Please enter the quantity of the item:");
	scanf("%d",&x[xCount].quantity);

	printf("Please enter the cost of the item:");
	scanf("%f",&x[xCount].cost);
}
void editquantity(struct item x[],int xCount){
	if (xCount==0){
		printf("This department is empty, return to main menu\n");
	}
	else{
		size_t i=0;
		for(;i<xCount;i++){
			printf("%d%c%s\n",i+1,'.',x[i].name);
		}
		printf("Please select which item you want to edit:");
		int itemNum;
		scanf("%d", &itemNum);

		while(itemNum>i||itemNum<1){
			printf("Invalid Input,please enter a number between 1 and %d:",i);
			scanf("%d",&itemNum);
		}

		printf("please enter the new quantity of this item:");
		scanf("%d",&x[itemNum-1].quantity);
	}
}
void editcost(struct item x[], int xCount){
	if (xCount==0){
		printf("This department is empty, return to main menu\n");
	}
	else{
		size_t i=0;
		for(;i<xCount;i++){
			printf("%d%c%s\n",i+1,'.',x[i].name);
		}
		printf("Please select which item you want to edit:");
		int itemNum;
		scanf("%d", &itemNum);

		while(itemNum>i||itemNum<1){
			printf("Invalid Input,please enter a number between 1 and %d:",i);
			scanf("%d",&itemNum);
		}

		printf("please enter the new cost of this item:");
		scanf("%f",&x[itemNum-1].cost);
	}
}
