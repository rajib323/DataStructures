#include <graphics.h>
#include <stdio.h>

// flood fill algorithm
void flood(int x, int y, int new_col, int old_col)
{

	if (getpixel(x, y) == old_col) {


		putpixel(x, y, new_col);

        delay(0.005);
		flood(x + 1, y, new_col, old_col);

		flood(x - 1, y, new_col, old_col);


		flood(x, y + 1, new_col, old_col);


		flood(x, y - 1, new_col, old_col);
		flood(x + 1, y+1, new_col, old_col);
		flood(x + 1, y-1, new_col, old_col);
		flood(x - 1, y+1, new_col, old_col);
		flood(x - 1, y-1, new_col, old_col);

	}
}

int main()
{
	int  gd = DETECT,gm;

	// initialize graph
	initgraph(&gd, &gm,(char*) "");

	// rectangle coordinate
	int top, left, bottom, right;

	top = left = 50;
	bottom = right = 300;

	// rectangle for print rectangle
	rectangle(left, top, right, bottom);

	// filling start coordinate
	int x = 125;
	int y = 125;

	// new color to fill
	int newcolor = 12;

	// new color which you want to fill
	int oldcolor = 0;


	flood(x, y, newcolor, oldcolor);
	delay(20000);
	closegraph();
}
