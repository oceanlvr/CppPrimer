#include <initializer_list>
#include <iostream>
//功能是能够计算所有的和
int sum(const std::initializer_list<int>& il)
{
    int sum = 0;
    for (auto i : il) sum += i;
    return sum;
}

int main(void)
{
    std::cout << sum({1, 2, 3, 4, 5}) << std::endl;
}
