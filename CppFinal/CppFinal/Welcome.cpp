#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
#include "Story.h"

using namespace std;
Welcome::Welcome() 
{
	Welcome::CharacterName;
	Welcome::CharacterNamePointer;
}
void Welcome::WelcomeToTheProgram() 
{
	cout << "Welcome to an interactive fiction story about the zombie apocalypse." << endl;
	cout << "You will be ask to enter your name shortly please enter your first name only." << endl;
	cout << "After that you will be given the start of the story where you have a decision to make." << endl;
	cout << "You will be given four choices please enter the numbers 1-4." << endl;
	cout << "After the desicion is made your story will come to an end." << endl;
}
//Function to get the character name
string Welcome::GetCharacterName()
{
	cout << "Please enter your character name: ";

	//Variable to collect user input for character name
	string CharacterName = "";
	string &refCharacterName = CharacterName;//Reference


	getline(cin, CharacterName);

	return refCharacterName;
}
void Welcome::WelcomeToTheGame(string characterName) 
{
	cout << "\nWelcome " << characterName << ", to Zombieland.\n";
	cout << "Be careful of the undead, or you may become one!" << endl;

}