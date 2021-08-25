#include <iostream>
using namespace std;

int main()
{
   enum DaysOfWeek
   {
      
      Monday = 1,
      Tuesday,
      Wednesday,
      Thursday,
      Friday,
      Saturday ,
      Sunday 
   };

   cout << "Find what days of the week are named after!" << endl;
   cout << "Enter a number for a day (Sunday = 0): ";

   int dayInput = Sunday;   // Initialize to Sunday
   k: cin >> dayInput;
   cin.clear(); //清空输入
   cin.sync();
   cin.ignore(); //忽略某输入
   switch(dayInput)
   {
   case Sunday:
      cout << "Sunday was named after the Sun" << endl;
      break;

   case Monday:
      cout << "Monday was named after the Moon" << endl;
      break;

   case Tuesday:
      cout << "Tuesday was named after Mars" << endl;
      break;

   case Wednesday:
      cout << "Wednesday was named after Mercury" << endl;
      break;

   case Thursday:
      cout << "Thursday was named after Jupiter" << endl;
      break;

   case Friday:
      cout << "Friday was named after Venus" << endl;
      break;

   case Saturday:
      cout << "Saturday was named after Saturn" << endl;
      break;

   default:
      cout << "Wrong input, execute again" << endl;
      goto k;
   }
   
   return 0;
}

// 6.5.cpp 使用switch-case指出星期与星星