#include <iostream>

using namespace std;

int main ()
{
	//��������ȫ��ʼ��
   int myNumbers [5] = {34, 56, -21, 5002, 365};

   //������Ĭ�ϸ�0��NULL
   int O[5] = {};
   char S[5] = { NULL }; // char S[5] = {  };
   cout << S[1] << endl;

   //���������ֳ�ʼ��
   int I[3] = { 1, 2 };
   cout << I[1] << I[2] <<endl;

   //ʹ����ȫ��ʼ���Զ���������
   int U[] = { 1,2,4 };
   cout << U[1] << U[-1] << endl; //Խ������


   cout << "First element at index 0: " << myNumbers [0] << endl;
   cout << "Second element at index 1: " << myNumbers [1] << endl;
   cout << "Third element at index 2: " << myNumbers [2] << endl;
   cout << "Fourth element at index 3: " << myNumbers [3] << endl;
   cout << "Fifth element at index 4: " << myNumbers [4] << endl;

   return 0;
}

//