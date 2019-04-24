#pragma once
#include "Story.h"
class Decision : public Story
{
public:
	Decision(unsigned int index);
	~Decision();
	int answer;
	int ContinueStory(unsigned int index);
};

