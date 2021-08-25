#include <iostream>
using namespace std;

int main()
{
   cout << "Enter two integers:" << endl;
   int num1 = 0, num2 = 0;
   cin >> num1;
   cin >> num2; 
   bool B;
   B = (num1 == num2 * (num1 / num2) + num1 % num2);
   if (B == 1)cout << "Ture"<<endl;
   else cout << "False"<<endl;
   cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
   cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
   cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
   cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
   cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
   cout << num1 << "除以" << num2 << "的商为" << num1 / num2 << "余数为" << num1 % num2 << endl;
   cout << B << endl;
   return B;
}

//5.1.cpp 整数的运算规则