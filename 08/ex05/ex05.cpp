#include <iostream>

using namespace std;

template <typename T>
T max5(T t[]);

int main()
{
    int arr_i[5] = {1, 3, 5, 7, 9};
    double arr_d[5] = {22.2, 13.8, 17.9, 54.2, 38.5};

    cout << "The nax value of int arr: " << max5(arr_i) << endl;
    cout << "The nax value of double arr: " << max5(arr_d) << endl;

    return 0;
}

template <typename T>
T max5(T t[])
{
    T max = t[0];
    for (int i = 1; i < 5; i++)
    {
        if (max < t[i])
            max = t[i];
    }

    return max;
}