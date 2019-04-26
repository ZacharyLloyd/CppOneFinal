#pragma once
#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
using namespace std;
//Declaring the class Welcome
class Welcome
{
public:
	Welcome();
	static string GetCharacterName();
	void WelcomeToTheProgram();
	void WelcomeToTheGame(string characterName);
	//Variable to collect user input for character name
	string CharacterName = "";
	string &refCharacterName = CharacterName;//Reference
	string *CharacterNamePointer = &CharacterName; //Pointer

private:


};



