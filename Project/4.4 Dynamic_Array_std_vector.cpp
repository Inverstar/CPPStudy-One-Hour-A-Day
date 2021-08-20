#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <char> C(NULL);
	cout << C.size() << endl;
	
	C.push_back('b');
	C[0] = 'a';
	
	cout << C[0]<<'='<<C.size() << endl;
	cout << C[C.size() - 1] << endl;

	vector<int> dynArray (3);

   dynArray[0] = 365;
   dynArray[1] = -421;
   dynArray[2]= 789;

   cout << "Number of integers in array: " << dynArray.size() << endl;

   cout << "Enter another element to insert" << endl;
   int newValue = 0;
   cin >> newValue;
   dynArray.push_back(newValue);

   cout << "Number of integers in array: " << dynArray.size() << endl;
   cout << "Last element in array: ";
   cout << dynArray[dynArray.size() - 1] << endl;
   
   return 0;
}

//4.3.cpp 动态数组 vector 的使用
/*vector<类型>数组名(初始大小)*/