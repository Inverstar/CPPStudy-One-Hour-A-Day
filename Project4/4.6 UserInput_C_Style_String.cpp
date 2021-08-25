#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   cout << "Enter a word NOT longer than 20 characters:" << endl;

   char userInput [21] = {'\0'};
   char Input[21] = { 'a' };
   char In[21] = { NULL };
   cin >> userInput;

   cout << "Length of your input was: " << strlen (userInput) << endl;
   string a = "k";
   cout << a << endl;
   return 0;
}

//4.6.cpp C风格字符串终止空字符