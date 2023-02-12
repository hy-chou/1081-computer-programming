#include <iostream>

using namespace std;

int main1081009()
{
    /*
    char        a = 0;
    short       b = 0;
    int         c = 0;
    long        d = 0;
    long long   e = 0;

    cout << 'a' << (long long)&a + (long long)&b - (long long)&b << endl;
    cout << 'b' << (long long)&b << endl;
    cout << 'c' << (long long)&c << endl;
    cout << 'd' << (long long)&d << endl;
    cout << 'e' << (long long)&e << endl;*/

    int arr[3];
    int *aPtr;

    cout << sizeof(arr[0]) << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(aPtr) << endl;
    return (0);
}