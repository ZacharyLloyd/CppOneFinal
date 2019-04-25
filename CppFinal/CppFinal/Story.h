#pragma once
#include <iostream>
//Declaring StartStory
class Story
{
public:
	Story();
	void Decision(unsigned int index);
	void ContinueStory(unsigned int index);
	

private:
	int answer;
};