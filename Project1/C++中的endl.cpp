//�Զ����ʽ���ݷ�


#include <iostream>
#include <iomanip>
using namespace std;

std::ostream& OutputNo(std::ostream& s)//��Ÿ�ʽ�磺0000001
{
    s << std::setw(7) << std::setfill('0') << std::setiosflags(std::ios::right);
    return s;
}
/*
ostream &���ݷ���(ostream &s)
{
�����Զ������
����return s;
}
*/

std::istream& InputHex(std::istream& s)//Ҫ���������Ϊʮ��������
{
    s >> std::hex;
    return s;
}
/*
istream &���ݷ���(istream &s
{
�����Զ������
����return s;
}
*/

int main()
{
    std::cout << OutputNo << 8 << std::endl;
    int a;
    std::cout << "������ʮ�����Ƶ�����";
    std::cin >> InputHex >> a;
    std::cout << "ת��Ϊʮ��������" << a << std::endl;
    return 0;
}
//������OutputNo��InputHex�����û��Զ���ĸ�ʽ���ݷ���
//�������ĺ���ԭ�ͱ�������cout����ĳ�Ա����operator<<()��������ʽ��
//ostream& ostream::operator<<(ostream& (*op)(ostream&));
//����ֻҪ��дһ������ֵΪstd::ostream&,
//����һ������Ϊstd::ostream&�����ĺ�����
//�Ϳ��԰Ѻ�������ڵ�ַ���ݸ�cout.operator<<()��
//��ɸ�ʽ���ݷ��Ĺ��ܡ�