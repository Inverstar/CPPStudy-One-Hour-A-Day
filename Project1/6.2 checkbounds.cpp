#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string userInput;
	cout << "Enter a line of text: " << endl;
	getline (cin, userInput);

	char copyInput[20] = { '\0' };
	if (userInput.length() < 20) // check bounds
	{
		strcpy_s(copyInput, userInput.c_str());
		cout << "copyInput contains: " << copyInput << endl;
	}
	else
		strcpy_s(copyInput, userInput.c_str());
		cout << "Bounds exceeded: won't copy!" << endl;

	return 0;
}

//6.2.cpp ���ַ������Ƶ�char������֮ǰ�����������