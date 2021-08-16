#include <iostream>
using namespace std;

int main()
{
   unsigned short uShortValue = 65535;
   cout << "Incrementing unsigned short " << uShortValue << " gives: ";
   cout << ++uShortValue << endl;

   short signedShort = 32767;
   cout << "Incrementing signed short " << signedShort<< " gives: ";
   cout << ++signedShort << endl;

   long it = 1.0e1;
   long double i = 1.3f;
   unsigned char a = 'a';
   unsigned k;
   long long uu = 1111;
   k = 'a';
   return uu;
}

//3.4.cpp 溢出例子
// 变量类型