#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

/*namespace first
{
    int num = 42;
    int nb = 420;
}

namespace second
{
    int num;
    int nb;
}
 */

int main_1080923()
{
    /*    int num;
        int &cref = num;

        num = 31415;
        second::num = 24;
        second::nb = 240;

     */

    //    cout << cref << endl;

    //    cout << num << "\n" << first::num << "\n" << second::num << "\n" << first::nb << "\n" << second::nb << endl;

    //    cout << 11 % -3 << endl;

    /*    int i, j, k;

        i = 2;
        j = 3 * i++ - 2;
        i += 1;
        k = 3 * ++i - 2;
        cout << k/j;

     */

    /*
        int c;
        c = 5;
        cout << c-- << endl;
        c = 5;
        cout << --c << endl;
        c = 5;
        cout << c << '\n' << c-- << endl;
        c = 5;
        cout << c << '\n' << --c << endl;

     */

    //    bool flag = false;
    //    cout << !flag + flag << endl;

    /*
        int c = 2, d = 3;
        cout << "c & d = " << (c & d) << endl;
        cout << "c | d = " << (c | d) << endl;
        cout << "c ^ d = " << (c ^ d) << endl;
        cout << "c << d = " << (c << d) << endl;
        cout << "~c = " << (~c) << endl;
        cout << (~c >> d) << endl;
     */
    /*
        int a;
        a = 365;
        a =  a << 4;
        a = ~a;
        cout << (a & 56) << endl;
     */
    /*
        float x = 4.0 * atan(1.0f);
        double y = 4.0 * atan(1.0);
        long double z = 4.0 * sqrt(tanh(1.0l));
        cout << setprecision(20) << "float = \t" << x
        << "\ndouble = \t" << y << "\nlong double = \t" << z << endl;
        cout << fixed << setprecision(20) << "float = \t" << x
        << "\ndouble = \t" << y << "\nlong double = \t" << z << endl;
     */

    int x;

    x = 10;
    cout << ((x > 1 && x <= 9) || x == 7);
    return 0;
}