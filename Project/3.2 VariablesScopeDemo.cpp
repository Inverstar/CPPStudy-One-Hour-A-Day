#include <iostream>
using namespace std;

void MultiplyNumbers ()
{
   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply two numbers, store mulitplicationResult in a variable
   int mulitplicationResult = firstNumber * secondNumber;

   // Display mulitplicationResult
   cout << firstNumber << " x " << secondNumber << " = " << mulitplicationResult << endl;
}

int main ()
{
	int firstNumber = 1, secondNumber = 1, mulitplicationResult = 1;
   cout << "This program will help you multiply two numbers" << endl;

   // Call the function that does all the work
   MultiplyNumbers();

   cout << firstNumber << " x " << secondNumber << " = " << mulitplicationResult << endl;

   return 0;
}

// 3.2.cpp 使用变量存储数字及其乘积