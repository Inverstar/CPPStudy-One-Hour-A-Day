#include <iostream>
using namespace std;
 int a ;
int main()
{
	 int* p = &a;
	 *p = 8;
	 int** q = &p;
//	c = &p;
	cout << 'a' << ' ' << a << endl;
	cout << "&a" << ' ' << &a << endl;
	cout << "*p" << ' ' << *p << endl;
	cout << "p" << ' ' << p << endl;
	cout << "q" << ' ' << q << endl;
	cout << "*q"<< ' ' <<*q << endl;
	cout << "&p" << ' ' << &p << endl;
	cout << "&q" << ' ' << &q << endl;
	cout << "**q" << ' ' <<**q << endl;

	//int d = 30;
	//int* const p = &d;
	//int* p2 = &d;
	//
	//cout << p << ' ' << d << endl;
	//*p = 31;
	//cout << p << ' ' << *p << ' ' << d << endl;
	//int d1 = 28;
	////p = &d1;	//不行, Cannot change address

	//const int* p1 = &d1;
	//cout << p1 << ' ' << *p1 << ' ' << d1 << endl;
	//int m = 1;
	//p1 = &m;
	//m = 2;
	//cout << p1 << ' ' << *p1 << ' ' << m <<' '<< d1 << endl;
	////*p = 12;	//不行, Cannot change data being pointed to
	////int* p2 = p;	//不行, Cannot assign const to non-const

	//const int* const p2 = &d1;
	////什么也不能改
	return 0;
}


//8.2.3 const对指针的作用
/*将指针传给函数时, 应将函数参数声明为最严格的const指针, 确保函数不修改指针指向的值.
禁止程序员修改指针和其指向的数据*/