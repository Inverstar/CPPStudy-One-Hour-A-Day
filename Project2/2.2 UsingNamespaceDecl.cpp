// Pre-processor directive
#include <iostream>
//using namespace std; 也可以写在这里, 对整个文件生效
// Start of your program
int main()
{
   // Tell the compiler what namespace to look in
   using namespace std; //写在这里对该函数生效

   /* Write to the screen using cout */
   cout << "Hello World" << endl;

   // Return a value to the OS
   return 0;
}

//2.2 命名空间的位置与作用