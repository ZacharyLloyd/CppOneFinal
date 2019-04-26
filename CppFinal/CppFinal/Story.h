#pragma once
#include <iostream>
#include <string>
//Created header files
//#include "Story.h"
#include "Welcome.h"
//Declaring Story class which is the child of the Welcome class(the parent)
//This is an example of inhearitence
class Story : public Welcome
{
//Methods and properties that are public to the Story class
public:
	//Constructor
	Story();
	//Declariing StartStory function
	void StartStory(string characterName, string *characterNamePointer);
	//Declaring Decisions function
	void Decision(unsigned int index, string characterName);
	//Declaring ContinueStory function
	void ContinueStory(unsigned int index, string characterName);
	
//Methods and properties that are private to the Story class
private:
	//This is an example of encapsulation
	//This is used to collect the answer from the users input when the user needs to make a decision
	int answer;
};