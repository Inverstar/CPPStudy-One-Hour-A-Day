#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Function Declarations (Prototypes)
double Area(double radius);
double Circumference(double radius);

int main()
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   // Call function "Area" 
   cout << "Area is: " << Area(radius) << endl;

   // Call function "Circumference"
   cout << "Circumference is: " << Circumference(radius) << endl;

   return 0;
}

// Function definitions (implementations)
double Area(double radius)
{
   return Pi * radius * radius;	//面积
}

double Circumference(double radius)
{
   return 2 * Pi * radius;	//周长
}

//7.1.cpp 计算圆的面积和周长的两个函数