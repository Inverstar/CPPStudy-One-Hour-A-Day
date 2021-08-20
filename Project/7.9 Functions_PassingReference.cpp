#include <iostream>
using namespace std;

const double Pi = 3.1416;

// output parameter result by reference 
double Area(double radius, double& result)
{
   result = Pi * radius * radius;
   return result;
}

int main() 
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   double areaFetched = 0;
   Area(radius, areaFetched);

   cout << "The area is: " << areaFetched <<'='<< Area(radius, areaFetched) << endl;
   return 0;
}

//7.9.cpp 引用参数提供⚪的面积