#include <iostream>
using namespace std;
int main(int argc, char const* argv[])
{
    const char* pc = "asdsad";
    // const_cast 有const away的性质可以去掉底层的const
    char* p = const_cast<char*>(pc);
    //通过p修改是未定义行为

    //加上这条语句会有错误
    p += 'a';
    printf("%s", p);
    system("pause");
    return 0;
}