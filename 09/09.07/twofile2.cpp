// twofile2.cpp -- variables with extern and internal linkage
#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access()
{
    using namespace std;
    cout << "remote_access() reports the following address:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
}