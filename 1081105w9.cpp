#include <iostream>

using namespace std;

/*
char   c = 'G';
//  static char c = 'g';

//  same global var -> use 'extern' to have a program scope
//  or use 'static' in each file to have a file scope

namespace hyc
{
    char c = 'H';
}

char    stc()
{
    static char c = 'c';
    //  auto char   c = 'C';
    return (c++);
}

int     main()
{
    char c;

    c = 'T';
    cout << ::c << hyc::c << c << endl;
    for (char c = 0; c < 24; c++)
        cout << stc();
    return (0);
}
 */

struct album
{
    char artist[100];
    short year;
};

int main1081105()
{
    album BLOOM, *reputation;

    BLOOM.artist[0] = 'T';
    reputation->artist[0] = 'T';
    BLOOM.year = 2018;
    reputation->year = 2018;

    cout << sizeof(album) << endl;
    return (0);
}