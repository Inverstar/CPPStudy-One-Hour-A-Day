#include <iostream>
using namespace std;

int main()
{
   // Static array of 5 integers
   int myNumbers[5];
   myNumbers[0] = 0;
   // Pointer initialized to array
   int* pointToNums = myNumbers;

   // Display address contained in pointer
   cout << "pointToNums = 0x" << hex << pointToNums << endl;
   cout << "Nums = " << dec << *pointToNums << endl;

   *pointToNums = 1;

   cout << "myNumbers = 0x" << hex << myNumbers << endl;
   cout << "*myNumbers = " << dec << *myNumbers << endl;

   // Address of first element of array
   cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;
   cout << "myNumbers[0] = " << dec << myNumbers[0] << endl;
   return 0;
}

//8.11.cpp 数组变量是指向第一个元素的指针