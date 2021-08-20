#include <iostream>
using namespace std;

int main ()
{
   cout << "This program will help you multiply two numbers" << endl;

   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply two numbers, store result in a variable
   int multiplicationResult = firstNumber * secondNumber;

	// Display result
	cout << firstNumber << " * " << secondNumber;
	cout << " = " << multiplicationResult << endl;
	//关于endl的一些说明
	endl(cout<<"this is "<<2);
	cout << hex << 10 << endl;
	/*
	插入换行符并刷新输出流。
	刷新输出流指的是将缓冲区的数据全部传递到输出设备并将输出缓冲区清空。
	endl是IO操纵符
	自定义格式操纵符 : C++中endl的本质
	*/
   return 0;
}