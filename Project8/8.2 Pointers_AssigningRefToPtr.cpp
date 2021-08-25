#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   int a = 1;
   double h = 12.1;
   int* pointsToInt = &age;
   pointsToInt = &a;
   // Displaying the value of pointer
   cout << "Integer age is at: " << pointsToInt << endl;
   cout << "Integer age is at: " << hex<<pointsToInt << endl; 

   return 0;
}

//8.2 声明并初始化指针