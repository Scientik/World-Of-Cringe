#include "TXlib.h"
void wheels();
void caterpillar();
int x = 350;
int y = 454;
int r = 33;
int main()
{

	int x = 350;
	int y = 454;
	int r = 33;

	txCreateWindow(1500, 700);
	txSetFillColor(RGB(255, 255, 255));
	txRectangle(0, 0, 1500, 700);

	txSetColor(TX_BLACK, 5);
	txSetFillColor(TX_BROWN);
	txRectangle(x - 635 + 530, y - 454 + 200, x - 635 + 750, y - 454 + 300);
	txRectangle(x - 635 + 428, y - 454 + 300, x - 635 + 873, y - 454 + 414);
	POINT gun[4] = {
	{x - 635 + 751, y - 454 + 230},
	{x - 635 + 1006,y - 454 + 230},
	{x - 635 + 1006, y - 454 + 248},
	{x - 635 + 751, y - 454 + 248}
	};
	txPolygon(gun, 4);

	POINT arsen[4] = {
	{x - 635 + 986, y - 454 + 220},
	{x - 635 + 1010, y - 454 + 220},
	{x - 635 + 1010, y - 454 + 258},
	{x - 635 + 986, y - 454 + 258}
	};

	txPolygon(arsen, 4);

	wheels();
	caterpillar();

	return 0;
}

void wheels()
{
	x = x - 157;
	y = 454;
	r = 33;
	txCircle(x, y, r);

	int xwheels = x;
	int ywheels = y;

	int number = 0;

	while (number < 4)
	{
		xwheels = xwheels + ((r * 2) + 20);
		txCircle(xwheels, ywheels, r);
		number++;
	}

	txCircle(x - 40, y - 25, r - 25);
	txCircle(x + 42.5, y - 25, r - 25);
	txCircle(x + (150 * 2), y - 25, r - 25);
	txCircle(x + ((150 * 2) + (r * 2)) + 17.5, y - 25, r - 25);
}

void caterpillar()
{
	txSetFillColor(TX_TRANSPARENT);
	x = 350 - 157;
	y = 454;
	r = 33;

	POINT caterpillar[4] =
	{ {x - (40 + (r - 23)), y - 35},
	{x + ((150 * 2) + (r * 2)) + 27, y - 35},
	{x + ((r * 9) + 73), y + 35},
	{x - (r - 5), y + 35} };

	txPolygon(caterpillar, 4);
}
