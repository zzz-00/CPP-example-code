// multimap.cpp -- use a multimap
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> Mapcode;

int main()
{
    using namespace std;
    Mapcode codes;

    codes.insert(Pair(415, "San Francisco"));
    codes.insert(Pair(510, "Oakland"));
    codes.insert(Pair(718, "Brooklyn"));
    codes.insert(Pair(718, "Staten Island"));
    codes.insert(Pair(415, "San Rafael"));
    codes.insert(Pair(510, "Berkeley"));

    cout << "Number of cities with area code 415: " << codes.count(415) << endl;
    cout << "Number of cities with area code 718: " << codes.count(418) << endl;
    cout << "Number of cities with area code 510: " << codes.count(510) << endl;
    cout << "Area Code  City\n";
    Mapcode::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it)
        cout << "   " << (*it).first << "   " << (*it).second << endl;

    pair<Mapcode::iterator, Mapcode::iterator> range = codes.equal_range(718);
    cout << "Cities with area code 718: " << endl;
    for (it = range.first; it != range.second; ++it)
        cout << (*it).second << endl;

    return 0;
}