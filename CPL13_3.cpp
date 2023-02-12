#include <iostream>

using namespace std;

class Complex
{
protected:
    double re;
    double im;

public:
    Complex(void) : re(0), im(0) { cout << 't' << re << 't' << im << '\n'; }
    Complex(double a, double b) : re(a), im(b) { cout << 'c' << a << 'c' << b << '\n'; }
    Complex operator+(const Complex &);
    Complex operator||(const Complex &);

    friend istream &operator>>(istream &input, Complex &c);
    friend ostream &operator<<(ostream &output, Complex &c);
};

class Resistor : public Complex
{
public:
    Resistor(void)
    {
        re = 0;
        im = 0;
    }
    Resistor(double r)
    {
        re = r;
        im = 0;
        cout << 'r' << re << 'r' << im << '\n';
    }

    friend istream &operator>>(istream &, Resistor &);
};

class Capacitor : public Resistor
{
private:
    double C;
    double w;

public:
    Capacitor(void) : C(0), w(0) {}
    Capacitor(double Cin, double win) : C(Cin), w(win)
    {
        //			compute();
    }
    //		void	compute(void);

    friend istream &operator>>(istream &, Capacitor &);
};

class Inductor : public Resistor
{
private:
    double L;
    double w;

public:
    Inductor(void) : L(0), w(0) {}
    Inductor(double Lin, double win) : L(Lin), w(win)
    {
        //			compute();
    }
    //		void	compute(void);

    friend istream &operator>>(istream &, Inductor &);
};

// PREPEND END
// TEMPLATE BEGIN

Complex Complex::operator+(const Complex &c)
{
    re += c.re;
    im += c.im;
    cout << '\t' << c.re << '\t' << c.im << '\n';
    return (*this);
}

ostream &operator<<(ostream &output, Complex &c)
{
    if (c.re != 0 && c.im > 0)
        output << c.re << '+' << c.im;
    else if (c.re != 0 && c.im < 0)
        output << c.re << c.im;
    else if (c.re == 0)
        output << c.im;
    output << '\n';
    return (output);
}

// TEMPLATE END
// APPEND BEGIN

int main(void)
{
    Complex Zeq, Zeq2, Zeq3, Zeq4;
    Resistor r1((double)3), r2((double)4), r3((double)5), r4, r5;
    Capacitor zC((double)0.00003, (double)10000), zC2;
    Inductor zL((double)0.1, (double)10000), zL2;

    // Zeq = (r1 || r2 || r3);
    Zeq2 = (zC + zL);
    cout << Zeq << Zeq2;

    // cin >> r4 >> zC2;
    // Zeq3 = r4 + zC2;
    // cout << Zeq3;

    // cin >> r5 >> zL2;
    // Zeq4 = r5 || zL2;
    // cout << Zeq4;
    return (0);
}

// APPEND END