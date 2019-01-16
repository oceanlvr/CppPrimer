#include <iostream>
#include <string>
using namespace std;
char& get_val(string& str, string::size_type ix);
int main(int argc, char const* argv[])
{

    string a("a value");
    cout << a << endl;
    //函数返回的是一个string的引用的临时变量
    //此时可以用于修改
    get_val(a, 0) = 'A';
    cout << "now is \n" << a << endl;
    system("pause");
    return 0;
}

//返回一个char的引用 属于一个左值
char& get_val(string& str, string::size_type ix)
{
    return str[ix];
}