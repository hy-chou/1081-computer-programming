#include <iostream>

using namespace std;

char *tree(char *ptr)
{
	ptr[0] = 84;
	ptr[1] = 'r';
	ptr[2] = 'e';
	ptr[3] = 'e';

	return (ptr);
}

int main_tree(void)
{
	char pre[5];
	char *ptr;

	ptr = pre;
	ptr = tree(ptr);
	cout << ptr << endl;
	return (0);
}
