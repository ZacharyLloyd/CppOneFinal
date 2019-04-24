#include "Story.h" //My created header that holds the Story class
#include <iostream>
#include "Decision.h"

using namespace std;
Story::Story()
{
	cout << "You wake up and see you are in a holding cell at a police station.\n";
	cout << "However, there is blood all over the place and unusual sounds coming from the front of the station." << endl;
	cout << "You notice an unconcious officer laying right outside of your cell." << endl;
	cout << "Also, you see that the unconcious officer has the keys to your cell, a gun, and a knife on him." << endl;
	cout << "What do you do?" << endl;
}
Decision::Decision(unsigned int index) 
{
	
}

Story::~Story()
{
}
