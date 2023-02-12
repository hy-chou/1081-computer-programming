#include <iostream>

using namespace std;

char i = 'T';

int main_1081001()
{
	/*	cout << "A";
		goto next;
		here:
		cout << "B";
		goto end;
		next:
		cout << "C";
		goto here;
		end:*/

	/*
		int	i, num;

		i = 0;
		num = 1;
		while (num)
		{
			cout << "Type a number:";
			if (cin >> num)
				cout << num << endl;
			else
				cin.clear();
			num = 1;
		}*/

	/*
		char	i;

		i = 'S';
		for (int i = 0, j = 0; i < 3 || j < 20; i++, j++)
			cout << i + j << '\t';
		cout << i << endl;*/

	/*	int		n;
		int		*nptr;
		char	c;
		char	*cptr;

		cout << sizeof(n) << '\n' << sizeof(c) << endl;
		cout << sizeof(nptr) << '\n' << sizeof(cptr) << endl;*/

	/*	int		iarr[9] = {3, 15};
		char	carr[9] = {'a', 'c'};

		cout << 0 + iarr[2] << 0 + iarr[6]<< endl;*/

	double grade, total = 0;
	int counter = 0;

	do
	{
		if (grade > 0)
		{
			total += grade;
			counter++;
		}
	} while (cout << "Enter grade or -1 to quit\n", cin >> grade, grade != -1);
	if (counter != 0)
		cout << "Average is " << total / counter << endl;
	else
		cout << "No grades were entered" << endl;
	return 0;
}
