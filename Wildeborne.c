#include<stdio.h>
void pageBreak(){
	printf("\n----------------------------------------------------------------------------------------------------\n\n");
}
void pubIndex()
	{
		fflush(stdin);
		pageBreak();
		int spokenToDrunkHuman = 0;
		printf("What would you like to do?\n");
		if(spokenToDrunkHuman == 0)
		{
			printf("1. Speak to the Human man.\n");
		} else if (spokenToDrunkHuman == 1)
		{
			printf("1. Attempt to speak with the drunk Human man again.");
		}	 
			printf("2. Charge into the pub and challenge the Otterfolk woman.\n");
			printf("3. Creep into the pub and see what's what.\n");
			printf("4. Walk into the pub normally, as though nothing has happened.\n");
		printf("Please select an option and press enter: ");
		char pubOption;
		scanf("%c", &pubOption);
		if(pubOption == '1')
		{
			printf("You kneel down and ask the man what happened.\n");
			printf("Groaning drunkenly, he is spouting gibberish in a language you do not know.\n");
			printf("It is guttural and aggressive; sounding alien in the Human's voice.\n");
			printf("You try to wake him and get some sense out of him, but he seems too far gone.\n");
			spokenToDrunkHuman = 1;  
		}
	}
void welcomeMessage(){
	pageBreak();
	printf("Welcome to the wonderful village of Wildeborne.\n");
	printf("After travelling long and far after your last daring adventure,\n");
	printf("you have made your way here for some much needed relaxation and\n");
	printf("downtime.\n");
	printf("Wildeborne has a few interesting locations for the lone adventurer\n");
	printf("to explore.\n");
}
void pubWelcome(){
	pageBreak();
	printf("You make your way to the rickety, yet charming, country pub. The sign outside depicts a pig, in its element,\n");
	printf("rolling around laughing with a group of rowdy and carousing drinkers. Above the door, painted in crude but legible\n");
	printf("lettering, is the pub's name: \'The Stinky Pig\'. As you approach, a small, stout Otterfolk woman appears at the door\n");
	printf("dragging a semi conscious Human man behind her.");
	printf("\"Get y'out and stay y'out!\" she bellows, her whiskers shaking with frustrated rage.\n");
	printf("She throws the bedraggled Human to the ground with a damp thud, and storms back inside,\n");
	printf("slamming the pub door shut behind her.\n");
}
void villageIndex(){
printf("Where would you like to go?\n1. The pub.\n2. The stables.\nPlease select an option and press enter: ");
	char villageOption;
	scanf("%c", &villageOption);
	
	if (villageOption == '1')
	{
		pubWelcome();
		pubIndex();
	} else if (villageOption == '2') 
	{
		printf("Stables placeholder texting\n");
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
