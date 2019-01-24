#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T> void display_mes(const string& msg, const vector<T>& vec)
{
    // cout << msg;
    for (int i = 0; i < vec.size(); i++) {
        T t = vec[i];
        cout << t << " ";
    }
}
int main(int argc, char const* argv[])
{
    string msg = "hello world";
    vector<int> vec{1, 2, 3, 4, 56, 10};
    display_mes(msg, vec);
    system("pause");
    return 0;
}
