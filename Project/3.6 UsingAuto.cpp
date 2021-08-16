#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
   auto coinFlippedHeads = true;
   auto largeNumber = 25000'0000'0000;
  // auto i; 错误!
   

   cout << "coinFlippedHeads = " << coinFlippedHeads;
   cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
   cout << "largeNumber = " << largeNumber;
   cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;
   cout << "1个字节 = " << pow(2, 8.0) << endl;
   cout << "2个字节 = " << pow(2, 16.0) << endl; //65000
   cout << "4个字节 = " << pow(2, 32.0) << endl; //4亿左右
   cout << "8个字节 = " << pow(2, 64.0) << endl; //42
   return 0;
}

//3.6.cpp auto的使用
/* auto with vectors
#include <vector>

int main()
{
auto coinFlippedHeads = true;
auto largeNumber = 2500000000000;

cout << "coinFlippedHeads = " << coinFlippedHeads;
cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
cout << "largeNumber = " << largeNumber;
cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

vector<int> MylargeNumbers;
MylargeNumbers.push_back(-45);
MylargeNumbers.push_back(202);
MylargeNumbers.push_back(0);
MylargeNumbers.push_back(1000);

cout << "Using older C++ style, elements are: " << endl;
for( vector<int>::const_iterator Iterator = MylargeNumbers.begin();
Iterator < MylargeNumbers.end();
++Iterator )
cout << *Iterator << " ";

cout << endl;

cout << "Using auto to iterate, elements are: " << endl;
for( auto Iterator = MylargeNumbers.begin();
Iterator < MylargeNumbers.end();
++Iterator )
cout << *Iterator << " ";

cout << endl;

return 0;
}
*/