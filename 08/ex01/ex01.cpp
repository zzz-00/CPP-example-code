#include <iostream>

using namespace std;

void show(const char *str, int n = 0);

int main()
{
    show("Hello world");
    show("good morning");
    show("I love you", 8);

    return 0;
}

void show(const char *str, int n)
{
    static int num = 0;
    num++;

    if (n == 0)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = 0; i < num; i++)
            cout << str << endl;
    }
}