#include <iostream>
#include <iomanip>

using namespace std;

int main1081002(void)
{
	short i;
	short n;
	int *arr;

	i = 0;
	n = 0;
	cout << "enter a short:\n";
	cin >> n;
	cin.clear();
	arr = new int[n];
	while (i < n)
	{
		cout << (arr + i) << '\t' << *(arr + i) << '\n';
		i++;
	}
	delete[] arr;

	/*	char	c;

		c = 'A';
		if (argc == 1)
			return (1);
		switch (argv[1][0])
		{
			case 84:
				cout << "Good!\n";
			default:
				break;
		}

		for (;;)
		{
			cout << 'T' << endl;
			break;
		}

		while (c <= 'Z')
			cout << c++;
	//	for (;;);
		for (char chr = 'T'; c != 'Z'; c++)
		{
			if (chr == 'V')
				//continue;
			cout << chr;
		}*/

	return (0);
}
