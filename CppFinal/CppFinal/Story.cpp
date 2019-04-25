#include <iostream>
#include "Story.h"
using namespace std;

//Function to start the story for the program
Story::Story()
{
	cout << "You wake up and see you are in a holding cell at a police station.\n";
	cout << "However, there is blood all over the place and unusual sounds coming from the front of the station." << endl;
	cout << "You notice an unconcious officer laying right outside of your cell." << endl;
	cout << "Also, you see that the unconcious officer has the keys to your cell, a gun, and a knife on him." << endl;
	cout << "What do you do?" << endl;
}

//Declaring the answer for the decisons as an int
int answer;
//Function to allow the decisions to be made
void Story::Decision(unsigned int index)
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

//Function to continue story after decsion is made
void Story::ContinueStory(unsigned int index)
{
	switch (index)
	{
	case 1:
		cout << "You have picked decision one to take the keys, knife, and gun." << endl;
		cout << "You got out of the cell and found the noise at the front of the station." << endl;
		cout << "You see an officer coming towards you but he is bloody." << endl;
		cout << "You try and help him but he bites you and you are now dead." << endl;
		break;
	case 2:
		cout << "You have picked decision two to take the keys and the gun." << endl;
		cout << "You got out of the cell and found the noise at the front of the station." << endl;
		cout << "You see an officer coming towards you but he is bloody." << endl;
		cout << "You tell him to stay back but he won't listen." << endl;
		cout << "You fire the gun at the officer." << endl;
		cout << "However, you did not shoot him in the head and he gets back up, bites you, and you are now dead." << endl;
		break;
	case 3:
		cout << "You have picked decision three to take the keys and the knife." << endl;
		cout << "You got out of the cell and found the noise at the front of the station." << endl;
		cout << "You see an officer coming towards you but he is bloody." << endl;
		cout << "You tell him to stay back but he won't listen." << endl;
		cout << "You stab the officer with the knife." << endl;
		cout << "However, you did not stab him in the head and he managed to bite you, you are now dead." << endl;
		break;
	case 4:
		cout << "You have picked decison four to take nothing and stay in the cell." << endl;
		cout << "You start yelling to get the attention of the noise at the front of the station." << endl;
		cout << "Another officer comes back who is covered in blood and starts eating the unconsious officer infront of you." << endl;
		cout << "You freak out and try reaching for the officers gun that is being eaten." << endl;
		cout << "The other officer sees this and bites you, you are now dead" << endl;
		break;
	}
}