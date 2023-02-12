#include <iostream>

using namespace std;

struct example
{
    long long int num;
    char *ptr;
    char c;
};

int main1081106()
{
    int num;

    num = static_cast<int>(3.1415926535);
    num = (int)3.1415926535;
    num = int(3.1415926535);
    cout << num << endl;
    cout << sizeof(example) << endl;
    return (0);
}