//C++11 �����б�ת��
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int largeNum = 5000000;
	short smallNum = largeNum; // compiles OK, yet narrowing error
	

	//short anotherNum{ largeNum }; // error! Amend types
	int anotherNum{ largeNum }; // OK!
	//float someFloat{ largeNum }; // error! An int may be narrowed
	float someFloat{ 5000000 }; // OK! 5000000 can be accomodated

	cout << anotherNum << "+" << someFloat << endl;
}