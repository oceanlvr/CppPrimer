#include <iostream>
#include <string>

using std::string;

bool hasUppercase(const string& str)
{
    for (auto c : str)
        if (isupper(c)) return true;
    return false;
}

const string& makeLowercase(string& str)
{
    //如果要修改变量则需要加引用
    for (auto& c : str)
        if (isupper(c)) c = tolower(c);
    return str;
}

int main()
{
    /*
    Sets the boolalpha format flag for the str stream.
    When the boolalpha format flag is set, bool values are
    inserted/extracted by their textual representation:
    either true or false, instead of integral values.
    */
    string str("Hello World!");
    std::cout << std::boolalpha << hasUppercase(str) << std::endl;
    std::cout << makeLowercase(str) << std::endl;
    system("pause");
}
