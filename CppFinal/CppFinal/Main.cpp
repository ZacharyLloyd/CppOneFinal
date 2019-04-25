#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
#include "Story.h"
using namespace std;

static string CharacterName; //Needed to add this for characterName to grab the returned value
static string characterName = CharacterName; //This transfers the return of ChartacterName to the parameter used characterName	
bool programRunning = true;
int main()
{
	do 
	{
		//Calling the welcome function while also making it an object
		Welcome welcome;
		//Call GetCharacterName function
	
		string characterName = welcome.GetCharacterName();

		//Need to catch the character name coming back from this function
		//Do this with the characterName variable
		//Here we use the characterName and start welcome function in main
		welcome.WelcomeToTheGame(characterName);
	
		//Calling the story function while also making it an object
		Story story;

		//Starting the decisions in main
		story.Decision(1);
	 

		//Putting continue story into the main function
		story.ContinueStory(1);

		system("pause");
		programRunning = false;
		return 0;

	} while (programRunning == true);
}