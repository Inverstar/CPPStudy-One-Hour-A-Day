#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int myNums[ARRAY_LENGTH] = { 0 };

	cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;
	int counter = 0;
	for (; ; )
	{
		if (counter >= ARRAY_LENGTH)break;
		
		cout << "Enter an integer for element " << counter << ": ";
		cin >> myNums[counter];
		++counter;
	}

	cout << "Displaying contents of the array: " << endl;

	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
		cout << "Element " << counter << " = " << myNums[counter] << endl;

	return 0;
}

//6.10.1cpp 使用双分号for循环填充和显示静态数组元素
