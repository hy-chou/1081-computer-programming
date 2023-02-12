#include <iostream>

#define WIDTH 5
#define HEIGHT 3

using namespace std;

int main_1081006()
{
    /*    int jimmy [HEIGHT * WIDTH];
        int n, m;
        for (n = 0; n < HEIGHT; n++)
        {
            for (m = 0; m < WIDTH; m++)
                jimmy[n * WIDTH + m] = (n + 1) * (m + 1);
        }
        for (short i = 0; i < HEIGHT * WIDTH; i++)
            cout << i << '\t' << jimmy[i] << endl;*/

    /*    int a[5] = {10, 20, 30};
        int *aPtr, *bPtr;
        aPtr = a;
        bPtr = &a[1];
        cout << "The address of array a is " << a << "\n"
             << "The address of element a[0] is " << &a[0] << endl;
        cout << "The value of aPtr is " << aPtr << "\n"
             << "The value of bPtr is " << bPtr << endl;
        cout << "The value of aPtr[1] is " << aPtr[1] << endl;
        cout << "The value of bPtr[2] is " << bPtr[2] << endl;
        cout << aPtr[3] + bPtr[1] << endl;*/

    /*    char s1[10] = {'H','E','L','\0','O'};
        char *s2 = "Hello";
        for (int i = 0; (s1[i] = s2[i]) != '\0'; i++);
        cout << "s1 = " << s1 << endl;
        cout << "s2 = " << s2 << endl;
        s1[0] = 'h';
        cout << "s1 = " << s1 << endl;*/

    /*    int osize = 10, nsize = 20;
        int *p = NULL, *temp = NULL;
        p = new int[osize]; // the original block
        for (int i = 0; i < osize; i++) {p[i] = i * i; cout << p[i] << " . ";}
        temp = new int[nsize]; // new block for the expanded array
        for (int i = 0; i < osize; i++) temp[i] = p[i];
        delete [] p; // deallocate the old block
        p = temp; // point to the new block
        for (int i = osize; i < nsize; i++) {p[i] = i; cout << p[i] << " ! ";}*/

    int x, *xPtr;
    void *ptr;

    x = 0x10;
    ptr = &x;
    cout << &x << '\n'
         << *(xPtr = (int *)ptr) << endl;
    return (0);
}