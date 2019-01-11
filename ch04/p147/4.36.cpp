#include<iostream>
int main(int argc, char const *argv[])
{
    int i=5;
    double d=8;
    i*=static_cast<int>(d);
    std::cout << i << '\n';
    system("pause");
    return 0;
}
