// C++ program for implementing
// Mid-Point Circle Drawing Algorithm
#include<graphics.h>
#include<iostream>
using namespace std;


// Implementing Mid-Point Circle Drawing Algorithm
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
	int x = r, y = 0;
	
	// Printing the initial point on the axes
	// after translation
	cout << "(" << x + x_centre << ", " << y + y_centre << ") ";
    putpixel(x+x_centre, y+y_centre,RED);
	
	// When radius is zero only a single
	// point will be printed
	if (r > 0)
	{delay(1);
		cout << "(" << x + x_centre << ", " << -y + y_centre << ") ";
        putpixel(x+x_centre, y+y_centre,BLUE);
		cout << "(" << y + x_centre << ", " << x + y_centre << ") ";
        putpixel(x+x_centre, y+y_centre,BLUE);
		cout << "(" << -y + x_centre << ", " << x + y_centre << ")\n";
        putpixel(x+x_centre, y+y_centre,BLUE);
	}
	
	// Initialising the value of P
	int P = 1 - r;
	while (x > y)
	{
		y++;
		
		// Mid-point is inside or on the perimeter
		if (P <= 0)
			P = P + 2*y + 1;
		// Mid-point is outside the perimeter
		else
		{
			x--;
			P = P + 2*y - 2*x + 1;
		}
		
		// All the perimeter points have already been printed
		if (x < y)
			break;
		
		// Printing the generated point and its reflection
		// in the other octants after translation
        delay(1);
		cout << "(" << x + x_centre << ", " << y + y_centre << ") ";
        putpixel(x+x_centre, y+y_centre,BLUE);
		cout << "(" << -x + x_centre << ", " << y + y_centre << ") ";
        putpixel(-x+x_centre, y+y_centre,BLUE);
		cout << "(" << x + x_centre << ", " << -y + y_centre << ") ";
		putpixel(x+x_centre, -y+y_centre,BLUE);
        cout << "(" << -x + x_centre << ", " << -y + y_centre << ")\n";
		putpixel(-x+x_centre, -y+y_centre,BLUE);
		// If the generated point is on the line x = y then
		// the perimeter points have already been printed
		if (x != y)
		{
            delay(1);
			cout << "(" << y + x_centre << ", " << x + y_centre << ") ";
            putpixel(y+x_centre, x+y_centre,BLUE);
			cout << "(" << -y + x_centre << ", " << x + y_centre << ") ";
            putpixel(-y+x_centre, x+y_centre,BLUE);
			cout << "(" << y + x_centre << ", " << -x + y_centre << ") ";
            putpixel(y+x_centre, -x+y_centre,BLUE);
			cout << "(" << -y + x_centre << ", " << -x + y_centre << ")\n";
            putpixel(-y+x_centre, -x+y_centre,BLUE);
		}
	}
}

// Driver code
int main()
{
    int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
 setcolor(RED);

	// To draw a circle of radius 3 centered at (0, 0)
	midPointCircleDraw(300, 100, 100);
        getch();
    closegraph();
	return 0;
}
