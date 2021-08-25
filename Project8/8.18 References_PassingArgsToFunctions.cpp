#include <iostream>
using namespace std;

void GetSquare(int& number)
{
   number *= number;
}

int main()
{
   cout << "Enter a number you wish to square: ";
   int number = 0;
   cin >> number;

   GetSquare(number);
   cout << "Square is: " << number << endl;

   return 0;
}

//	8.18.cpp 计算平方值并用引用参数返回结果