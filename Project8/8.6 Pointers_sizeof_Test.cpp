#include <iostream>
using namespace std;

int main()
{
   cout << "sizeof fundamental types -" << endl;
   cout << "sizeof(char) = " << sizeof(char) << endl;
   cout << "sizeof(int) = " << sizeof(int) << endl;
   cout << "sizeof(double) = " << sizeof(double) << endl;

   cout << "sizeof pointers to fundamental types -" << endl;
   cout << "sizeof(char*) = " << sizeof(char*) << endl;
   cout << "sizeof(int*) = " << sizeof(int*) << endl;
   cout << "sizeof(double*) = " << sizeof(double*) << endl;

   return 0;
}

//8.6 指向不同变量类型的指针长度相同