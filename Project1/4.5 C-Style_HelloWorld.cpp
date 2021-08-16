#include <iostream>
using namespace std;

int main()
{
	char c[] = "Hi";
	//char c1[2] = "Hi";
	char c1[3] = {'H','i','\0'};

   char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
   cout << sayHello << endl;
   cout << "Size of array: " << sizeof(sayHello) << endl;

   cout << "Replacing space with null" << endl;
   sayHello[5] = '\0';
   cout << sayHello << endl;
   cout << "Size of array: " << sizeof(sayHello) << endl;

   cout << sayHello + 6 << endl;	// "World" 地址值+6个字节, 实为从sayHello[6]开始直到结束
   cout << sayHello [6] << endl;
   char ss[][4] = {"abc","def","ghj"};
   cout << ss[2][2] << "==" << ss[2] + 2 << endl;

   cout << sayHello +'\0'<< endl;
   return 0;
}

//4.5.cpp C风格字符串