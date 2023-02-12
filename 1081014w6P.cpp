#include <iostream>
#include <iomanip>

using namespace std;

double potential_energy(void);
void kinetic_energy(int, double);

int main1081014(void)
{
    /*
    char a = 'T', *b = &a, **c = &b;
    cout << **c;*/

    /*
    int i, j;
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int **p = NULL;
    p = new int*[2];
    for (i = 0; i < 2; i++)
        p[i] = new int[3];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++)
            p[i][j] = a[i][j] * a[i][j];
    }
    i = *p[1]++;
    cout << i + p[1][1] << endl;
    for (i = 0; i < 2; i++)
        delete [] p[i];
    delete [] p;*/

    unsigned char a[4] = {0x46, 0x43, 0xFC, 0x44};
    void *p = a;
    cout << "floating value=" << setprecision(8) << *(float *)p << endl;
    double x = -1313.3131;
    p = &x;
    cout << "byte sequence=";
    for (int i = 3; i >= 0; i--)
        cout << setw(2) << setfill('0') << hex << uppercase << (int)((unsigned char *)p)[i] << ' ';

    /*
    int     mass=15;
    double  velocity=300;
    cout<<"The value of mass in main is: "<<mass<<endl;

    kinetic_energy(mass, potential_energy());
    cout<<"Now the value of mass in main is: "<<mass<<endl;
    */
    return (0);
}

double potential_energy(void)
{
    int mass = 6;
    double pe, height = 5.2;
    double g = 9.81;
    pe = mass * g * height;
    cout << "Potential energy=" << pe << endl;
    return (pe);
}

void kinetic_energy(int m, double v)
{
    double ke;
    ke = 0.5 * m * v * v;
    cout << "Kinetic energy=" << ke << endl;
}
