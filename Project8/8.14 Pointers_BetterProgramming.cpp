#include <iostream>
using namespace std;

int main()
{
	cout << "Is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	// declare pointer and initialize
	bool* const isSunny = new bool;	//	const 指针无需设NULL
	*isSunny = true;

	if (userInput == 'n')
		*isSunny = false; 

   cout << "Boolean flag sunny says: " << *isSunny << endl;

   // release valid memory
   delete isSunny;
   //cout << "Boolean flag sunny says: " << *isSunny << endl;
   //*isSunny = NULL;
 
	return 0;
}

//	8.14.cpp 安全的指针-8.13.cpp改