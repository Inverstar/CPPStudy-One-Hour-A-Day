#include <iostream>
using namespace std;

int main()
{
   cout << "Enter two integers: " << endl;
   int num1 = 0, num2 = 0;
   cin >> num1;
   cin >> num2;

c: cout << "Enter \'*\' OR '+' to multiply or add, anything else to try again: ";
   char userSelection = '\0';
   cin >> userSelection;

   int result = 0;
if (userSelection == '*')
result = num1 * num2;
else if (userSelection == '+')
result = num1 + num2;
else
goto c;

   cout << "result is: " << result << endl;

   return 0;
}

//6.1.cpp 相乘还是相加