#include <iostream>
#include "Decision.h"
#include "ContinueStory.h"
using namespace std;
//Declaring the answer for the decisons as an int
int answer;
//Function to allow the decisions to be made
void Decision(unsigned int index)
{
	switch (index)
	{
	case 1:
		cout << "1) Grab the keys, gun, and knife" << endl;
		cout << "2) Grab the keys and gun" << endl;
		cout << "3) Grab the keys and knife" << endl;
		cout << "4) Grab nothing and stay in the cell" << endl;
		cin >> answer;
		if (answer == 1)
		{
			ContinueStory(1);
		}
		else if (answer == 2)
		{
			ContinueStory(2);
		}
		else if (answer == 3)
		{
			ContinueStory(3);
		}
		else if (answer == 4)
		{
			ContinueStory(4);
		}
		break;
	}
}