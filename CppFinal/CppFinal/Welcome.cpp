#include <iostream>
#include <string>
#include "Welcome.h"

using namespace std;
Welcome::Welcome(string characterName) 
{
	cout << "\nWelcome " << characterName << " to Zombieland.\n";
	cout << "Be careful of the undead, or you may become one!" << endl;

}
//Function to get the character name
string Welcome::GetCharacterName()
{
	cout << "Please enter your character name: ";

	//Variable to collect user input for character name
	string CharacterName;
	string &refCharacterName = CharacterName;//Reference

	getline(cin, CharacterName);

	return refCharacterName;
}

Welcome::~Welcome()
{

}