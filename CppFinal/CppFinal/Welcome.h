#pragma once
#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
using namespace std;
//Declaring the class Welcome
class Welcome
{
//Methods and properties that are public in the welcome class
public:
	//Constructor
	Welcome();
	//Declaring GetCharacterName function
	static string GetCharacterName();
	//Declaring WelcomeToTheProgram function
	void WelcomeToTheProgram();
	//Declaring WelcomeToTheGame funciton
	void WelcomeToTheGame(string characterName, string *characterNamePointer);
	//Variable to collect user input for character name
	string CharacterName = "";
	string &reCharacterName = CharacterName;//Reference

	//Methods and properties that are private in the welcome class
private:


};



