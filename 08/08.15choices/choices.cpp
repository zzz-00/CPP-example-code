// choices.cpp -- choosing a template
#include <iostream>

template <class T>
T lesser(T a, T b)
{
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;      // use #2
    cout << lesser(x, y) << endl;      // use #1 with double
    cout << lesser<>(m, n) << endl;    // use #1 with int (<>指出编译器应选用模板函数而不是非模板函数)
    cout << lesser<int>(x, y) << endl; // use #1 with int (<int>要求进行显示实例化)

    return 0;
}