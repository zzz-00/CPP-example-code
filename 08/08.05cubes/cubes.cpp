// cubes.cpp -- regular and referencr argument
#include <iostream>
double cube(double a);
double refercube(double &ra);
int main()
{
    using namespace std;
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;
    cout << refercube(x);
    cout << " = cube of " << x << endl;
    return 0;
}

double cube(double a)
{
    a *= a * a;
    return a;
}

double refercube(double &ra)
{
    ra *= ra * ra;
    return ra;
}