#include<stdio.h>
void welcomeMessage(){
	printf("Welcome to the wonderful village of Wildeborne.\n");
	printf("After travelling long and far after your last daring adventure,\n");
	printf("you have made your way here for some much needed relaxation and\n");
	printf("downtime.\n");
	printf("Wildeborne has a few interesting locations for the lone adventurer\n");
	printf("to explore.\n");
}
void villageIndex(){
printf("Where would you like to go?\n1. The pub.\n2. The stables.\nPlease select an option and press enter: ");
	char villageOption;
	scanf("%c", &villageOption);
	if (villageOption == '1')
	{
		printf("pub placeholder text\n");
		villageIndex();
	} else if (villageOption == '2') 
	{
		printf("Stables placeholder text\n");
		villageIndex();
	} else 
	{
		printf("That wasn't an option!\n");
		villageIndex();
	}
}
int main(){
	welcomeMessage();
	villageIndex();
	return 0;
}