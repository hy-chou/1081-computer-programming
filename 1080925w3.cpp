#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main_1080925()
{
	/*
		int x;

		cin >> x;
		cout << cin.good(); // 1 or 0
		cout << cin.fail(); // 1 or 0
		cout << x;
		cin.clear();
		cin.ignore(1024, '\n');  //ignore the buffer until it counts to 1024 or encounters '\n'
		cout << x;
	 */
	/*
		bool	x;

		cout << sizeof(bool) << endl;
	 */

	bool p, q;

	p = true;
	q = true;
	cout << std::boolalpha;
	cout << ((p || q) && !(p && q)) << '\n';
	cout << p << '\n';

	// (p+q)(1-(pq)) = p + q - 2pq

	/*
		short	x;

		x = 1;
		cout << ++++x << endl;
	 */

	//	cout << abs(-3.14);

	/*
		int64_t	x, y;

		x = 1e+9;
		y = x * 10;
		cout << x << '\n' << y;
	 */

	return 0;
}
