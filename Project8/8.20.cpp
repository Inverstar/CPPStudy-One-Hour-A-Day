#include<iostream>
using namespace std;
int main()
{
	//int n = 30;
	//const int* p = &n;
	//int* p1 = p;
	//*p1 = 1;

	int m[2] = {1,2};		//静态数组
	int n[2] = { 3,4 };
	int* A[2];		//指针数组, 指针可指向int或int数组
	A[0] = m;
	*(A + 1) = n;
	for (int i = 0; i < 2; i++)
		cout << *A[i] << ' ' << *A[i] + 1 << endl;


	cout << *A << ' ' << A << ' ' << *A[0] << ' ' << A[0] << endl;
	cout << *m << ' ' << m << ' ' << m[0] << ' ' << &m[0] << endl;
	cout <<*A[0]<< ' ' << A[1] << ' ' << *A[1] << endl;
	int* mp = new int[10];		//动态数组
	delete[] mp;

	return 0;
}
	