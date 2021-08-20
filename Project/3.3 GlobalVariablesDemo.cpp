#include <iostream>
using namespace std;

// Declare three global integers
int firstNumber = 0;
int secondNumber = 0;
//int multiplicationResult = 0;

int MultiplyNumbers ()
{
   cout << "Enter the first number: ";
   cin >> firstNumber;

   cout << "Enter the second number: ";
   cin >> secondNumber;

   // Multiply two numbers, store multiplicationResult in a variable
   // multiplicationResult = firstNumber * secondNumber;

   // Display multiplicationResult
   cout << "Displaying from MultiplyNumbers(): ";
   cout << firstNumber << " x " << secondNumber << " = " << firstNumber * secondNumber << endl;
   return firstNumber * secondNumber;
   
}

int main ()
{
   cout << "This program will help you multiply two numbers" << endl;

   // Call the function that does all the work
   int r = MultiplyNumbers();

   cout << "Displaying from main(): ";

   // This line will now compile and work!
   cout << firstNumber << " x " << secondNumber << " = " << firstNumber * secondNumber << endl;

   return r == firstNumber * secondNumber;
   //返回乘机函数形成循环
   //==正确为1, 错误为0;
}

// 3.3.cpp 使用全局变量