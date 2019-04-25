#pragma once
#include <iostream>
#include <string>
//Created header files
#include "Welcome.h"
#include "Story.h"
//Declaring Story class which is the child of the Welcome class(the parent)
class Story /*: public Welcome*/
{
public:
	Story();
	void Decision(unsigned int index);
	void ContinueStory(unsigned int index);
	

private:
	int answer;
};