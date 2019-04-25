#pragma once
#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
#include "Story.h"
using namespace std;
//Declaring the class Welcome
class Welcome
{
public:
	Welcome();
	static string GetCharacterName();
	void WelcomeToTheGame(string characterName);
	void *characterNamePointer = &GetCharacterName;

private:


};



