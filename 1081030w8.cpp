#include <iostream>

using namespace std;

template <typename T>
T haha(T x)
{
    x++;
    return (x);
}

int main1081030()
{
    /*
    int     *ptr;
    int     arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    *((long*)arr + 1) = 100;
    for (char i = 0; i < 16; i++)
        cout << arr[i] << endl;*/

    cout << haha('S') << endl;
    return (0);
}