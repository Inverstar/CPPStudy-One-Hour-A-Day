// 4.2.1.cpp 多维数组初始化

#include <iostream>
using namespace std;
int main()
{
	int s1[2][3] = {};
	int s2[2][3] = { 1,2,3,4,5,6 };
	int s3[][2] = {1,2,3,4};
	int s4[][2] = { {1},{2} };
	cout << s1[0][0] << endl; 
	cout << s2[1][0] << endl;
	cout << s4[1][1] << endl;
	for (int i=0;i<2;i++)
	{
		cout << endl;
		int k = 0;
		for ( ; k < 3; k++)
		cout << s1[i][k]<< ' ';
	}
}