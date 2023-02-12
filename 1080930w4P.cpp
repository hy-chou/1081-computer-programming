#include <iostream>

using namespace std;

int main_01()
{
    short num, i;

    num = 0;
    i = 0;
    cout << "enter a number between 1 and 3:";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "You entered 1.\n";
        cout << "test.\n";
        break;
    case 2:
        cout << "You entered 2.\n";
        break;
    case 3:
        cout << "You entered 3.\n";
        break;
    default:
        cout << "U R bad.\n";
        /*            while (true == false)
                    {
                        cout << "This is an infinite loop.\t";
                        cout << "haha~~\n";
                    }*/
    }
    while (i < 32767)
        cout << "Loop No. " << i++ << '\n';
    return 0;
}

int main_02()
{
    int counter;
    double grade, total;

    counter = 0;
    grade = -1;
    total = 0;
    cout << "Enter a grade or enter -1 to quit." << endl;
    cin >> grade;
    while (grade > 0)
    {
        total += grade;
        counter++;
        cout << "Enter another grade or enter -1 to quit." << endl;
        cin >> grade;
    }
    if (counter)
        cout << "The average is " << total / counter << '.' << endl;
    else
        cout << "No grade was entered." << endl;
    return 0;
}

int main_03()
{
    int i, j;

    i = 4;
    j = 1;
    while (i)
        cout << "i=" << i-- << endl;
    /*    do
        {
            cout << "i=" << i << endl;
            i--;
        } while (i!=0);
     */
    do
        ++j;
    while (j > 999);
    cout << "j=" << j << endl;
    return 0;
}

int main_04()
{
    int i, j, k, m;

    k = 0;
    m = 0;
    for (i = 1; i <= 10; i += 2)
    {
        for (j = 1; j <= 4; j++)
        {
            k = i + j;
            cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
        }
        m = k + i;
    }
    cout << "m = " << m << endl;
    return 0;
}

int main_05()
{
    for (int cnt = 1; cnt <= 10; cnt += 2)
    {
        if (cnt == 8)
            break;
        if (cnt == 5)
            continue;
        cout << cnt << " ";
    }
    return 0;
}

int main_06()
{
    double x[2] = {13, 15};
    int a[3] = {11, 22}, b[4] = {44, 55, 66};

    //    cout << b[100];
    return 0;
}

int main_07()
{
    char aa;
    char bb[4], cc[21];

    aa = 'g';
    bb[0] = 'c';
    bb[1] = 'a';
    bb[2] = 't';
    bb[3] = '\0';
    cout << "aa is " << aa << ", bb is " << bb << endl;
    cout << "Enter a string of less than 20 characters:\n";
    cin >> cc;
    cout << "String is " << cc << endl;
    return 0;
}