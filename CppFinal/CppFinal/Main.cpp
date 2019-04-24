#include <iostream>
#include <string>
//Created header files
#include "GetCharacterName.h"
#include "Welcome.h"
#include "StartStory.h"
#include "Decision.h"
#include "ContinueStory.h"
using namespace std;
string CharacterName; //Needed to add this for characterName to grab the returned value
string characterName = CharacterName; //This transfers the return of ChartacterName to the parameter used characterName
int main()
{
	//Call GetCharacterName function
	string characterName = GetCharacterName();
	//Need to catch the character name coming back from this function
	//Do this with the characterName variable

	//Here we use the characterName and start welcome function in main
	Welcome(characterName);

	//Starting the story in main
	StartStory();

	//Starting the decisions in main
	Decision(1);

	//Putting continue story into the main function
	ContinueStory(1);

	system("pause");

	return 0;
}