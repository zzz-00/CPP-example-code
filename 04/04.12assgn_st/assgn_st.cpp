//assgn_st.cpp assigning structures
#include <iostream>
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable bouquet =
        {
            "sumflowers",
            0.20,
            12.49};
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " foe $";
    cout << bouquet.price << endl;

    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
