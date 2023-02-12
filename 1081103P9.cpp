#include <iostream>

using namespace std;

/*
int     days_in_month=31;
int     birthday = 2;

void    april()
{
    //int birthday = 2;
    days_in_month = 30;
}

int main( )
{
    int birthday = 0;
    cout << birthday + days_in_month;
    cout<<"Before: days_in_month="<< days_in_month <<endl
        <<"birthday="<< birthday <<endl;
    april();
    cout<<"After: days_in_month="<< days_in_month <<endl
        <<"birthday="<< birthday <<endl;

}
 */

/*
double  max_value(double);

int     main()
{
    double num, max = -1;
    while (true)
    {
        cout << "Enter any positive number; negative value to stop: ";
        cin >> num;
        cout<< "old max=" << max << "\tinput number=" << num;
        if (num<=0) break;
        else max = max_value(num);
        cout<< "\tnew max=" << max <<endl;
    }
}

double  max_value(double num)
{
    static double max = -1;
    max = (num > max) ? num : max;
    return max;
}*/

/*
int&    max(int& n1, int& n2);

int     main()
{
    int x = 3, y = 2;
    max(x,y) = 5;
    max(x, y) ++;
    cout << "x=" << x << ", y=" << y << endl;
}

int&    max(int& n1, int& n2)
{
    if (n1>n2)
        return n1;
    else
        return n2;
}*/

/*
void    useLocal();
void    useStaticLocal();
void    useGlobal();
int     x = 1;

int     main()
{
    int x = 5;
    cout << "local x in main's outer scope is " << x << endl;
    { // start new scope
        int x = 7;
        cout << "local x in main's inner scope is " << x << endl;
    } // end new scope
    cout << "local x in main's outer scope is " << x << endl;
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    cout << "\nlocal x in main is " << x << endl;
}

void useLocal( void )
{
    //int x = 25;
    cout << endl << "local x is " << x
         << " on entering useLocal" << endl;
    ++x;
    cout << "local x is " << x
         << " on exiting useLocal" << endl;

}

void useStaticLocal( void )
{
    static int x = 50;
    cout << endl << "local static x is " << x
         << " on entering useStaticLocal" << endl;
    ++x;
    cout << "local static x is " << x
         << " on exiting useStaticLocal" << endl;

}

void useGlobal( void )
{
    cout << endl << "global x is " << x
         << " on entering useGlobal" << endl;
    x *= 10;
    cout << "global x is " << x
         << " on exiting useGlobal" << endl;

}*/

struct rational
{
    int n;
    int d;
};

rational rplus(rational x, rational y)
{
    rational z;
    z.n = x.n * y.d + x.d * y.n;
    z.d = x.d * y.d;
    return z;
}

rational rmultiply(rational x, rational y)
{
    rational z;
    z.n = x.n * y.n;
    z.d = x.d * y.d;
    return z;
}
rational rdivide(rational x, rational y)
{
    rational z;
    z.n = x.n * y.d;
    z.d = x.d * y.n;
    return z;
}

int main1081103()
{
    rational a = {4, 6}, b = {2, 3};
    rational c, d, e;

    c = rplus(a, b);
    d = rmultiply(a, b);
    e = rdivide(a, b);
    cout << a.n << "/" << a.d << " + " << b.n << "/" << b.d << " = " << c.n << "/" << c.d << endl;
    cout << a.n << "/" << a.d << " * " << b.n << "/" << b.d << " = " << d.n << "/" << d.d << endl;
    cout << a.n << "/" << a.d << " / " << b.n << "/" << b.d << " = " << e.n << "/" << e.d << endl;
    cout << c.n / c.d;
    return (0);
}