#include <iostream>
using namespace std;

int main()
{
   // uninitialized pointer (bad)
   bool* isSunny = new bool; 

   cout << "Is it sunny (y/n)? ";
   char userInput = 'y';
   cin >> userInput;
   *isSunny = false;
   if (userInput == 'y')
   {
     
      *isSunny = true;
   }

   // isSunny contains invalid value if user entered 'n'
   cout << "Boolean flag sunny says: " << *isSunny << endl;

   // delete being invoked also when new wasn't 
   delete isSunny;

   return 0;
}

//  8.13.cpp 存储在布尔值中的无效指针