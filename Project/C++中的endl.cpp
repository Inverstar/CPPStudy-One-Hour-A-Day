//自定义格式操纵符


#include <iostream>
#include <iomanip>
using namespace std;

std::ostream& OutputNo(std::ostream& s)//编号格式如：0000001
{
    s << std::setw(7) << std::setfill('0') << std::setiosflags(std::ios::right);
    return s;
}
/*
ostream &操纵符名(ostream &s)
{
　　自定义代码
　　return s;
}
*/

std::istream& InputHex(std::istream& s)//要求输入的数为十六进制数
{
    s >> std::hex;
    return s;
}
/*
istream &操纵符名(istream &s
{
　　自定义代码
　　return s;
}
*/

int main()
{
    std::cout << OutputNo << 8 << std::endl;
    int a;
    std::cout << "请输入十六进制的数：";
    std::cin >> InputHex >> a;
    std::cout << "转化为十进制数：" << a << std::endl;
    return 0;
}
//程序中OutputNo和InputHex都是用户自定义的格式操纵符，
//操作符的函数原型必须满足cout对象的成员函数operator<<()的重载形式：
//ostream& ostream::operator<<(ostream& (*op)(ostream&));
//所以只要编写一个返回值为std::ostream&,
//接收一个类型为std::ostream&参数的函数，
//就可以把函数的入口地址传递给cout.operator<<()，
//完成格式操纵符的功能。