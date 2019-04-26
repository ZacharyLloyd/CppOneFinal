#include <iostream>
#include <string>
#include "GetCharacterName.h"
using namespace std;

//Function to get the character name
string GetCharacterName()
{
	cout << "Please enter your character name: ";

	//Variable to collect user input for character name
	string CharacterName;

	getline(cin, CharacterName);

	return CharacterName;
}