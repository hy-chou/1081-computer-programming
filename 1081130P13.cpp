#include <iostream>
#include <cmath>
#include "graphics.h"

using namespace std;

class elipso
{
	friend void scale(elipso &, int);

private:
	int x, y, a, b, c;

public:
	void initialize(int, int, int, int);
	void show(void);
	double area(void)
	{
		return (3.14159 * a * b);
	}
	double get_major(void)
	{
		return (2 * (a > b ? a : b));
	}
	double get_minor(void)
	{
		return (2 * (a > b ? b : a));
	}
	void get_center(int *x0, int *y0)
	{
		*x0 = x;
		*y0 = y;
	}
	elipso &set_major(int);
	elipso &set_minor(int);
	//		void	set_major(int);
	//		void	set_minor(int);
	void set_center(int x0, int y0)
	{
		x = x0;
		y = y0;
	}
};

void elipso::show()
{
	ellipse(x, y, 0, 360, a, b);
	circle(x + c, y, 1);
	circle(x - c, y, 1);
}

void elipso::initialize(int x0, int y0, int a0, int b0)
{
	x = x0;
	y = y0;
	a = a0;
	b = b0;
	c = sqrt(abs(a * a - b * b));
	show();
}

elipso &elipso::set_major(int x0)
{
	if (x0 < get_minor())
		return (*this);
	if (a > b)
		a = x0 / 2;
	else
		b = x0 / 2;
	c = sqrt(abs(a * a - b * b));
	cout << c << endl;
	return (*this);
}

elipso &elipso::set_minor(int x0)
{
	if (x0 < get_major())
		return (*this);
	if (a > b)
		a = x0 / 2;
	else
		b = x0 / 2;
	c = sqrt(abs(a * a - b * b));
	cout << c << endl;
	return (*this);
}

/*
void	elipso::set_major(int x0)
{
	if (x0 < get_minor())
		return;
	if (a > b)
		a = x0 / 2;
	else
		b = x0 / 2;
	c = sqrt(abs(a * a - b * b));
}

void	elipso::set_minor(int y0)
{
	if (y0 > get_major())
		return;
	if (a > b)
		b = y0 / 2;
	else
		a = y0 / 2;
	c = sqrt(abs(a * a - b * b));
}*/

void scale(elipso &e, int s)
{
	if (s <= 0)
		return;
	e.a *= s;
	e.b *= s;
	e.c = sqrt(abs(e.a * e.a - e.b * e.b));
}

int main(int argc, char **argv)
{
	initwindow(800, 600);
	cleardevice();

	//	elipso	e;
	//	e.initialize(100, 100, 50, 30);
	//	scale(e, 2);
	//	e.set_center(200, 200);
	//	e.show();
	//	getch();
	//	closegraph();

	elipso e1, e2;

	e1.initialize(200, 300, 50, 30);
	e2.initialize(600, 300, 50, 30);
	e1.set_major(50).set_minor(30);
	e2.set_minor(30).set_major(50);
	e1.show();
	e2.show();
	getch();
	closegraph();

	return (0);
}

/*
int		main(int argc, char **argv)
{
	initwindow(800, 600);
	cleardevice();

	elipso	e;

	e.initialize(100, 100, 50, 30);
	e.set_center(400, 300);
	e.set_major(800);
	e.set_minor(600);
	e.show();
	getch();
	closegraph();

	return (0);
}
*/
/*
class	elipso
{
	public:
		int		x, y, a, b, c;
		void	initialize(int x0, int y0, int a0, int b0)
		{
			x=x0; y=y0; a=a0; b=b0; // set center & semi-axes
			c=sqrt(fabs(a*a-b*b));
			show();
		}
		void	show(void)
		{
			ellipse(x, y, 0, 360, a, b); // draw a complete ellipse
			circle(x+c, y, 1); // mark the positive focus
			circle(x-c, y, 1); // mark the negative focus
		}
		double	area(void)
		{
			return (3.14159 * a * b);
		}
};

int		main(int argc, char **argv)
{
	initwindow(800, 600);
	cleardevice();

	elipso	e, *p = &e;

	e.initialize(100, 100, 50, 30);
	cout << "The area is " << e.area() << endl;
	cout << "The center is at (" << p->x << ", " << p->y << ")" << endl;

	elipso	c;

	c.initialize(100, 100, 10, 10);

	getch();
	closegraph();

	return (0);
}
*/
/*
class	rational
{
	public:
		int		n, d;
		void	set(int x, int y)
		{
			n = x;
			d = y;
		}
		void	show(void)
		{
			cout << n << "/" << d << "=" << 1.0 * n / d << endl;
		}
};

int main(void)
{
	rational	a;

	a.set(4, 5);
	a.show();

	rational	*p = &a;
	p->set(2, 3);
	p->show();

	rational	b;

	b.set(7, 8);
	b.show();
	return (0);
}
*/
