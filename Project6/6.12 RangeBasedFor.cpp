#include<iostream>
#include <string>
using namespace std;

int main()
{
   int someNums[] = { 1, 101, -1, 40, 2040 };

   for (const int& aNum : someNums) //可以去掉&, 正常输出
      cout << aNum << ' ';
   cout << endl;

   for (auto anElement : { 5, 222, 110, -45, 2017 })
      cout << anElement << ' ';
   cout << endl;

   char charArray[] = { 'h', 'e', 'l', 'l', 'o' };
   for (auto aChar : charArray) 
      cout << aChar << ' ';
   cout << endl;

   double moreNums[] = { 3.14, -1.3, 22, 10101 };
   for (auto anElement : moreNums)
      cout << anElement << ' ';
   cout << endl;

   string sayHello{ "Hello World!" };
   for (auto anElement : sayHello)
	   cout << anElement << ' ';
   cout << endl;

   return 0;
}

//6.12.cpp 基于范围的for循环来处理数组和string

//多个基于范围的for循环实现, 
//for(单个元素:数组)
//cout<<单个元素<<endl;
