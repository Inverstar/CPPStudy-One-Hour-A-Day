#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "How many integers shall I reserve memory for?" << endl;
   int numEntries = 0;
   cin >> numEntries;

   int* myNumbers = new int[numEntries];
   myNumbers[0] = 1;

   cout << "Memory allocated at: " << &myNumbers[numEntries-1]-myNumbers << hex << endl;
   cout << "Memory allocated at: " << myNumbers[0] << endl;
   cout << "Memory allocated at: 0x" << myNumbers << hex << endl;

   // de-allocate before exiting
   delete[] myNumbers;

   return 0;
}

//8.8.cpp 使用new[...]分配内存, 使用delete[]释放