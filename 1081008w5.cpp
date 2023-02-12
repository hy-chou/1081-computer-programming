#include <iostream>

using namespace std;

int main1081008()
{
	char t;
	char i;
	char j;
	char k;
	char *a;
	char *b;
	char *c;

	t = 'T';
	i = '0';
	j = '1';
	k = '2';
	a = &i;
	b = &j;
	c = &k;
	cout << *(a + 1) << endl;
	cout << *(b + 1) << endl;
	cout << *(c + 1) << endl;
	return (0);
}
