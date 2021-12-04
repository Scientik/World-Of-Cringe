#include "TXlib.h"
void wheels();
void caterpillar();
int main()
{

    int x = 635;
	int y = 454;

	txCreateWindow(1500,700);
	txSetFillColor(RGB(0,255,255));
	txRectangle(0,0,1500,700);

	txSetColor(TX_BLACK,5);
	txSetFillColor(TX_BROWN);
	txRectangle(x - 635 + 530,y - 454 + 200,x - 635 + 750,y - 454 + 300);
	txRectangle(x - 635 + 428,y - 454 + 300,x - 635 + 873,y - 454 + 414);
	POINT gun[4] = {
	{x - 635 + 751, y - 454 + 230},
	{x - 635 + 1006,y - 454 + 230},
	{x - 635 + 1006, y - 454 + 248},
	{x - 635 + 751, y - 454 + 248}
	};
	txPolygon(gun, 4);

	POINT david[4] = {
	{}
	{}
    {}
	{}
	}

	wheels();
	caterpillar();

	return 0;
}

void wheels()
{
	int x = 635-157;
	int y = 454;
	int r = 33;
	txCircle(x,y,r);

	 int number = 0;

	while (number < 4)
	{
		x = x + ((r * 2) + 20);
		txCircle(x, y, r);
		number ++;
	}

	x = 635-157;

	txCircle(x - 40, y - 25, r - 25);
	txCircle(x + 42.5, y - 25, r - 25);
	txCircle(x + (150*2), y - 25, r - 25);
	txCircle(x + ((150*2) + (r*2)) + 17.5, y - 25, r - 25);
}

void caterpillar()      // гусеница
{
	txSetFillColor(TX_TRANSPARENT);
	int x = 635 - 157;
	int y = 454;
	int r = 33;

	POINT caterpillar[4] =
	{ {x - (40 + (r - 23)), y - 35},
    {x + ((150 * 2) + (r * 2)) + 27, y - 35},
    {x + ((r * 9) + 73), y + 35},
    {x - (r - 5), y + 35} };

	txPolygon(caterpillar, 4);
}
