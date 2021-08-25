#include <iostream>
using namespace std;

int main()
{
   int original = 30;
   cout << "original = " << original << endl;
   cout << "original is at address: " << hex << &original << endl;

   int& ref1 = original;
   cout << "Therefore, ref1 = " << dec << ref1 << endl;
   cout << "ref1 is at address: " << hex << &ref1 << endl;

   int& ref2 = ref1;
   cout << "ref2 is at address: " << hex << &ref2 << endl;
   cout << "Therefore, ref2 = " << dec << ref2 << endl;

   int* p = &ref1;
   cout << p << ' ' << *p << endl;
   return 0;
}

//	8.17.cpp 引用的使用 