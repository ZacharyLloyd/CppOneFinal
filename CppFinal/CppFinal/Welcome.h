#pragma once
#include <iostream>
#include <string>
using namespace std;
//Here we use the characterName and declare Welcome

class Welcome
{
public:
	Welcome(string characterName);
	static string GetCharacterName();
	~Welcome();

private:


};



