#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void to_Upper(string &str);

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);

    while (str != "q")
    {
        to_Upper(str);
        cout << str << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye" << endl;

    return 0;
}

void to_Upper(string &str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = toupper(str[i]);
}