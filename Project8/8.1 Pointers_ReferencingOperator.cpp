#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   const double Pi = 3.1416;
   int* a = NULL;
   double* b = NULL;
   // Use & to find the address in memory
   cout << "Integer age is located at: 0x" << &age << endl;
   cout << "Double Pi is located at: 0x" << &Pi << endl;
   cout << "int: " << sizeof(a) << endl;
   cout << "double: " << sizeof(b) << endl;
   cout << "int: " << sizeof(*a) << endl;
   cout << "double: " << sizeof(*b) << endl;
   return 0;
}

//8.1.cpp 获取变量的地址