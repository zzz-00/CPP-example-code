#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maxn(T t[], int n);

template <>
string maxn<string>(string str[], int n);

int main()
{
    int arr_i[6] = {1, 3, 5, 7, 9, 11};
    double arr_d[4] = {22.2, 13.8, 17.9, 54.2};
    string str[5] = {"Hello world", "Good morning", "I love you, Rick", "What's this", "Byebye"};

    cout << "The max value of int arr: " << maxn(arr_i, 6) << endl;
    cout << "The max value of double arr: " << maxn(arr_d, 4) << endl;
    cout << "The max value of str: " << maxn(str, 5) << endl;

    return 0;
}

template <typename T>
T maxn(T t[], int n)
{
    T max = t[0];
    for (int i = 1; i < n; i++)
    {
        if (max < t[i])
            max = t[i];
    }

    return max;
}

template <>
string maxn<string>(string str[], int n)
{
    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[pos].size() < str[i].size())
            pos = i;
    }
    return str[pos];
}