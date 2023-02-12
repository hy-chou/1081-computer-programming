#include "first.h"

int main()
{
	int n;
	float m;
	int l;

	n = 42;
	m = 3.141592653;
	l = 4.35 * 100; // value become 434, instead of 435
	cout << "hex " << hex << n << "\n";
	cout << "oct " << oct << n << "\n";
	cout << "dec " << dec << n << "\n";
	cout << m << "\n";
	//	cout << fixed << m << "\n";
	//	cout << scientific << m << "\n";
	cout << l;
	cout << endl;
	return (0);
}
