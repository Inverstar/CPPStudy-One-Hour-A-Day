#include <iostream>
using namespace std;

int main()
{
   cout << "Enter a number: ";
   int value = 0;
   //cin >> value;

   value += 16;
   cout << "After += 16, value = " << value << endl;
   value -= 8;
   cout << "After -= 8, value = " << value << endl;
   value /= 4;
   cout << "After /= 4, value = " << value << endl;
   value *= 4;
   cout << "After *= 4, value = " << value << endl;
   value %= 3;
   cout << "After %= 3, value = " << value << endl;

   // Note: henceforth assignment happens within cout 
   cout << "After <<= 1, value = " << (value <<= 1) << endl;	//2*2
   cout << "After >>= 2, value = " << (value >>= 2) << endl;	//1

   cout << "After |= 0x55, value = " << (value |= 0x55) << endl;
   cout << "After ^= 0x55, value = " << (value ^= 0) << endl;
   cout << "After &= 0x0F, value = " << (value &= 0x0F) << endl;

   return 0;
}

//5.9.cpp 使用复合赋值运算符执行操作