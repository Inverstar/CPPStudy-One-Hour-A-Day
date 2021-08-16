#include <iostream>
#include <string>
using namespace std;
//Int main(); 大写警告
int main()
{
   // Declare a variable to store an integer
   int InputNumber;

   cout << "Enter an integer: ";

   // store integer given user input
   cin >> InputNumber;

   // The same with text i.e. string data
   cout << "Enter your name: ";
   string InputName;
   cin >> InputName;

   cout << InputName << " entered " << InputNumber << endl;

   return 0;
}

//2.6.cpp 输入一个数字, 输入你的名字, 返回, 你输入了数字