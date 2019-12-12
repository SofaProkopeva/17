#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, i, d, maxi, maxy, max;
	cin >> n;
	int* a = new int[n];
	maxi = -100;
	maxy = 0;
	max = -1;
	for (i = 1; i < n + 1; i++)
	{
		cout << i << ". x :";
		cin >> a[i, 1];
		cout << i << ". y :";
		cin >> a[i, 2];
	}
	for (i = 1; i < n; i++)
	{
		d = sqrt(a[i, 1] * a[i, 1] + a[i, 2] * a[i, 2]);
		if (d > max)
		{
			max = d;
			maxi = a[i, 1];
			maxy = a[i, 2];
		}
	}
	cout << maxi << endl << maxy;
}