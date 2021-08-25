#include<iostream>
using namespace std;
int main()
{
	int* pointToNums = new int[5];	//	initial allocation
	//	use pointToNums
	//	forget to release using delete[] pointToNums;
	for (int i = 0; i < 5; i++)
		*(pointToNums + i) = i;
	for (int i = 0; i < 5; i++)
		cout << pointToNums[i] << endl;
	delete[] pointToNums;

	//	make another allocation and overwrite
	pointToNums = new int[10];	//	leaks the previously allocated memory
	delete[] pointToNums;
}

//	8.3.1.cpp delete[] 怎么知道要释放的数组有几个元素呢?