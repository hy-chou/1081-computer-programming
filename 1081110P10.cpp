#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

/*enum    colour
{
    r,
    o,
    y,
    g,
    b,
    v,
};

enum    color
{
    red = 1,
    green,
    blue = 4,
};

union   mix
{
    int             i;
    long            l;
    float           f;
    double          d;
    unsigned char   c[4];
};

int     main()
{
    short   x;

    x = red | green;
    cout << x;

    mix     x;

    x.f = -1313.3125;
    cout << x.i << endl;
    for (int i = 3; i >= 0; i--)
        cout << uppercase << setw(2) << setfill('0') << hex << (int)x.c[i];

    return (0);
}
*/

/*class   rational
{
    private:
        int n, d;

    protected:

    public:
        rational()
        {
            set(0, 1);
        }
        void    set(int x, int y)
        {
            n = x;
            d = y;
        }
        void    show()
        {
            cout << n << '/' << d << " = " << static_cast<double>(n) / static_cast<double>(d) << endl;
        }
};

int     main()
{
    rational    a;

    a.set(4, 5);
    a.show();

    rational    *p = &a;

    p->set(2, 3);
    p->show();

    rational    *ptr, t;

    ptr = &t;
    ptr->show();

    //  cout << t.n << '\t' << t.d << endl;

    return (0);
;}*/

/*int main()
{
    int seed;

    cout << "Preset random sequence:\t";
    for (int i = 1; i <= 10; i++)
        cout << setw(3) << rand()%(97-23+1) + 23;
    cout << endl;

    cout << "\nEnter a new seed: ";
    while (cin >> seed)
    {
        srand(seed);
        cout << "\nNew random sequence:\t";
        for (int i = 1; i <= 10; i++)
            cout << setw(3) << rand()%(97-23+1) + 23;
        cout << "\nEnter a new seed: ";
    }

    return (0);
}*/

/*int main()
{
    time_t      now;
    tm          *timeinfo;
    const char  *wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    time (&now);
    timeinfo = localtime(&now);
    printf("Time: %u:%u:%u\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
    printf("Date: %u/%u/%u\n", timeinfo->tm_year+1900, timeinfo->tm_mon+1, timeinfo->tm_mday);
    printf("Day of Week: %s\n",wday[timeinfo->tm_wday]);
}*/

/*int main()
{
    time_t  now;
    tm      *timeinfo;
    char    buffer[21];

    time(&now);
    timeinfo = localtime(&now);

    strftime(buffer, sizeof(buffer), "Now it's %I:%M:%S%p.", timeinfo);
    cout << buffer << endl;
}*/

/*int num_of_primes(int n)
{
    int i, j, freq = n - 1;

    for (i = 2; i <= n; ++i)
    {
        for (j = sqrt(i); j > 1; --j)
        {
            if (i % j == 0)
            {
                --freq;
                break;
            }
        }
    }
    return (freq);
}*/

/*unsigned long long  fibonaccii(int number)
{
    if (number <= 1)
        return (number);
    else
        return (fibonaccii(number - 1) + fibonaccii(number - 2));
}

unsigned long long  fibonacciii(int number)
{
    if (number == 0)
        return (0);

    unsigned long long  u = 0, v = 1, t;

    for (int i = 2; i <= number; i++)
    {
        t = u + v;
        u = v;
        v = t;
    }
    return (v);
}

int main()
{
    clock_t t1, t2;

    t1 = clock();
    fibonaccii(20);
    t1 = clock() - t1;
    t2 = clock();
    fibonacciii(20);
    t2 = clock() - t2;
    cout << fixed << (long double)t1 / (long double)t2;

    return (0);
}*/

/*int main()
{
    char    text[70];
    int     occupied, reserved;

    strcpy(text, "This is an incomplete sentence, ");
    strcat(text, "but this is.");
    occupied = strlen(text);
    reserved = sizeof(text) / sizeof(char);
    cout << "string = " << text << endl;
    cout << "occupied = " << occupied << " reserved = " << reserved << endl;
    if (strcmp(text, "Another sentence.") == 0)
        cout << text << " is equal to \"Another sentence.\"";

    return (0);
}*/

int main1081110()
{
    char sentence[] = "This is a sentence with 7 tokens";
    char *tokenPtr;
    cout << "The string to be tokenized is:\n\n\"" << sentence
         << "\"\n\nThe tokens are:\n\n\"";
    tokenPtr = strtok(sentence, " ");
    while (tokenPtr != NULL)
    {
        cout << tokenPtr << "\"\n\"";
        tokenPtr = strtok(NULL, " ");
    }
    for (char i = 0; i < 100; i++)
        cout << &sentence[i] << endl;
    cout << "\nAfter strtok(), sentence is \"" << sentence << '"' << endl;
    cout << &sentence[5];
}