#include <iostream>

using namespace std;

unsigned long long factorial(int n);
unsigned int fibonacci(int n);
void cube_vol_area(int id, double width, double length, double height, double *surface, double *volume);
void commute_time(double, double = 25, int = 5);
void rotate(int &, int &);
void rotate(int, int &, int);

int main1081026()
{
    /*
    for (char c = 0; c <= 20; c++)
        cout << (short)c << "! = " << factorial(c) << endl;
    */

    /*
    for (char c = 0; c <= 100; c++)
    {
        cout << "fibonacci(" << (short)c << ") = " << fibonacci(c) << endl;
    }
    */

    /*
    int     id = 5;
    double  s = 3, v = 10, x = 6.3, y = 7.2, z = 1.5;

    cout << "cube surface area = " << s << " cube volume = " << v << endl;
    cube_vol_area(id, x, y, z, &s, &v);
    cout << "cube surface area = " << s << " cube volume = " << v << endl;
    */

    /*
    commute_time(40);
    commute_time(30, 20);
    commute_time(35, 30, 8);
    */

    int a, b, c, d;

    a = 1;
    b = 2;
    cout << "a=" << a << " b=" << b << endl;
    rotate(a, b);
    cout << "a=" << a << " b=" << b << endl;
    a = 1;
    b = 2;
    c = 3;
    cout << "a=" << a << " b=" << b << " c=" << c << endl;
    rotate(a, b, c);
    cout << a + b + c;
    cout << "a=" << a << " b=" << b << " c=" << c << endl;

    return 0;
}

void rotate(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
void rotate(int a, int &b, int c)
{
    int temp;

    temp = a;
    a = b;
    b = c;
    c = temp;
}

void commute_time(double velocity, double distance, int num_lights)
{
    cout << "The commute time is " << (distance / velocity + num_lights * 0.01) << " hours." << endl;
}

void cube_vol_area(int id, double width, double length, double height, double *surface, double *volume)
{
    *surface = 2 * width * height + 2 * length * height + 2 * width * length;
    *volume = width * length * height;
    cout << "cube surface area = " << *surface << " cube volume = " << *volume << endl;
}

unsigned int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

unsigned long long factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return (n * factorial(n - 1));
}