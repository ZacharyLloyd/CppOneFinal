#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
#include "Story.h"
using namespace std;

string CharacterName; //Needed to add this for characterName to grab the returned value
string characterName = CharacterName; //This transfers the return of ChartacterName to the parameter used characterName	
//string *characterNamePointer = &characterName;
int main()
{



	//Call GetCharacterName function
	string characterName = Welcome::GetCharacterName();
	
	//Need to catch the character name coming back from this function
	//Do this with the characterName variable
	//Here we use the characterName and start welcome function in main
	Welcome Welcome(characterName);

	//Starting the story in main by making it an object
	Story story;

	//Starting the decisions in main
	story.Decision(1);
	 

	//Putting continue story into the main function
	story.ContinueStory(1);

	system("pause");

	return 0;
}