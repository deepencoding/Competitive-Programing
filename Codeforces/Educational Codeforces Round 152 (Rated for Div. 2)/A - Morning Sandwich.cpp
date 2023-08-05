#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
 
int sandwhich(int b, int c, int h)
{
	int slices = c + h;
	if (b - 1 <= slices) { return 2*b - 1; }
	else { return 2*slices + 1; }
}
		
 
int main()
{
	int test;
	cin >> test;
	for(; test != 0; test--)
	{
		int b;
		cin >> b;
		int c;
		cin >> c;
		int h;
		cin >> h;
 
		int output = sandwhich(b,c,h);
		cout << output << "\n";
	}
	return 0;
}
