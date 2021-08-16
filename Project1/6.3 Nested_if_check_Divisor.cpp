#include <iostream>
using namespace std;

int main()
{
   cout << "Enter two numbers: " << endl;
   float num1 = 0, num2 = 0 , num3 = 0;
   cin >> num1>>num2;
   cin >> num3;

   cout << "Enter 'd' to divide, anything else to multiply: ";
   char userSelection = '\0';
   cin >> userSelection;

   if (userSelection == 'd')
   {
      cout << "You wish to divide!" << endl;
      if (num2 != 0)
		 cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      else
         cout << "Division by zero is not allowed" << endl;
   }
   else
   {
      cout << "You wish to multiply!" << endl;
	  cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
   }

   return 0;
}

// 6.3.cpp 使用嵌套来执行乘除运算