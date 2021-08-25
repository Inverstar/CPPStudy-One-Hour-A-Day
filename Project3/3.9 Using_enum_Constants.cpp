#include <iostream>
using namespace std;

enum N
{
	L = 2,
	K = 3
};
enum CardinalDirections
{
   North ,
   South ,
   East =34,
   West =11
};

int main()
{
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

   CardinalDirections windDirection = South;
   cout << "Variable windDirection = " << windDirection << endl;
   N k = K;
   return 0;
}

// 3.9.cpp 使用枚举量指示基本方位