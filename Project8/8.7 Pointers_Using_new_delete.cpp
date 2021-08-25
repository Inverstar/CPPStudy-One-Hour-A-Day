#include <iostream>
using namespace std;

int main()
{
   // Request for memory space for an int
   int* pointsToAnAge = new int;

   // Use the allocated memory to store a number
   cout << "Enter your dog's age: ";
   cin >> *pointsToAnAge;

   // use indirection operator* to access value 
   cout << "Age " << *pointsToAnAge << " is stored at 0x" << hex << pointsToAnAge << endl;

   delete pointsToAnAge; // release dynamically allocated memory
   pointsToAnAge = NULL;
   return 0;
}

//8.7.cpp 使用*访问new分配的内存, 并使用delete释放