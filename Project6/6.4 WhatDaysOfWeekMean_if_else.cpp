#include <iostream>
using namespace std;

int main()
{
    enum DaysOfWeek
    {
        ErrorDay = 0,
        Monday = 1,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday = 7
    };

    cout << "Find what days of the week are named after!" << endl;
    cout << "Enter a number for a day (ErrorDay = 0): ";

    int dayInput = ErrorDay;   // Initialize to Sunday
    k: cin >> dayInput ;
   

    if (dayInput == Sunday)
        cout << "Sunday was named after the Sun" << endl;
    else if (dayInput == Monday)
        cout << "Monday was named after the Moon" << endl;
    else if (dayInput == Tuesday)
        cout << "Tuesday was named after Mars" << endl;
    else if (dayInput == Wednesday)
        cout << "Wednesday was named after Mercury" << endl;
    else if (dayInput == Thursday)
        cout << "Thursday was named after Jupiter" << endl;
    else if (dayInput == Friday)
        cout << "Friday was named after Venus" << endl;
    else if (dayInput == Saturday)
        cout << "Saturday was named after Saturn" << endl;
    else
    {
        cout << "This is you input: " << dayInput << endl;
        dayInput = 0;
        cout << "Wrong input, execute again, Now is " << dayInput << endl;
      
        cin.clear();
        //cin.sync();
        cin.ignore();
        goto k;
    }
    return 0;

}
   // 6.4.cpp 枚举一组选择结构