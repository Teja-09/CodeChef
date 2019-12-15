#include<bits/stdc++.h>
using namespace std;

struct point
{
	int x;
	int y;
};

int main()
{
	point p1 = {0, 1};
	cout << p1.x << " " << p1.y << "\n";
	
	// Pointer for structure
	point* p2 = &p1;
	cout << p2->x << " " << p2->y;
	
}
