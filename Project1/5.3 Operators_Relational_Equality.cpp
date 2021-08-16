#include <iostream>
using namespace std;

int main()
{
   cout << "Enter two integers:" << endl;
   int num1 = 0, num2 = 0;
   cin >> num1;
   cin >> num2;

   bool isEqual = (num1 == num2);
   cout << "Result of equality test: " << isEqual << endl;

   bool isUnequal = (num1 != num2);
   cout << "Result of inequality test: " << isUnequal << endl;

   bool isGreaterThan = (num1 > num2);
   cout << "Result of " << num1 << " > " << num2 << " test: " << isGreaterThan << endl;

   bool isLessThan = (num1 < num2);
   cout << "Result of " << num1 << " < " << num2 << " test: " << isLessThan << endl;

   bool isGreaterThanEquals = (num1 >= num2);
   cout << "Result of " << num1 << " >= " << num2 << " test: " << isGreaterThanEquals << endl;

   bool isLessThanEquals = (num1 <= num2);
   cout << "Result of " << num1 << " <= " << num2 << " test: " << isLessThanEquals << endl;

   bool k = -1;  //对k来说, 赋值为0或false  则为0, 否则为1

   return k;
}

//5.3.cpp 演示bool结果运算符