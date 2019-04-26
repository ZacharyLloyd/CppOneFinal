#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
#include "Story.h"

static string CharacterName; //Needed to add this for characterName to grab the returned value
static string characterName = CharacterName; //This transfers the return of ChartacterName to the parameter used characterName	
bool programRunning = true; //Bool to see if the program is running which will be used for the do while loop

int main()
{
	do 
	{
		//Calling the welcome class and turning it into an object
		Welcome welcome;
		//Call WelcomeToTheProgram function
		welcome.WelcomeToTheProgram();
		//Setting characterName string to the return of GetCharacterName
		//Calling the GetCharacterName function
		string characterName = welcome.GetCharacterName();
		//Calling WelcomeToTheGame function which takes the parameter characterName to address the user by name
		welcome.WelcomeToTheGame(characterName);
	
		//Calling the story class and turning it to an object
		Story story;
		//Calling the StartStory function
		story.StartStory(characterName);
		//Calling the Decision function
		story.Decision(1, characterName);
		//Calling the ContinueStory function
		story.ContinueStory(1, characterName);

		system("pause");
		programRunning = false;
		return 0;

	} while (programRunning == true);
}