#pragma once
#include <iostream>
#include <string>
//Created header files
//#include "Story.h"
#include "Welcome.h"

//Declaring Story class which is the child of the Welcome class(the parent)
class Story : public Welcome
{
public:
	Story();
	void StartStory(string characterName);
	void Decision(unsigned int index, string characterName);
	void ContinueStory(unsigned int index, string characterName);
	

private:
	int answer;
};