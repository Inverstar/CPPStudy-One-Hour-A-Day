#include <iostream>
using namespace std;

int main()
{
   int startValue = 101;
   cout << "Start value of integer being operated: " << startValue << endl;
   
   int postfixIncrement = startValue++;
   cout << "Result of Postfix Increment = " << postfixIncrement << endl;
   cout << "After Postfix Increment, startValue = " << startValue << endl;

   startValue = 101; // Reset 
   int prefixIncrement = ++startValue;
   cout << "Result of Prefix Increment = " << prefixIncrement << endl;
   cout << "After Prefix Increment, startValue = " << startValue << endl;

   startValue = 101;
   int postfixDecrement = startValue--;
   cout << "Result of Postfix Decrement = " << postfixDecrement << endl;
   cout << "After Postfix Decrement, startValue = " << startValue << endl;

   startValue = 101;
   int prefixDecrement = --startValue;
   cout << "Result of Prefix Decrement = " << prefixDecrement << endl;
   cout << "After Prefix Decrement, startValue = " << startValue << endl;

   bool k = 0;
   bool f = false;
   f = (k == f);
   return 1==true;

}

// 5.2.cpp ǰ׺��׺������Ĳ��