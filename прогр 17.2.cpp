#include <iostream>

using namespace std;
int main()
{
	int n, i, j, t, k, l, L, buf;
	cout << "N=";
	cin >> n;
	cout << "L=";
	cin >> L;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	t = l = k = 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = l; i < n; i++)
	{
		if (a[i] == a[i + 1])
			t ++;
		else
		{
			l = t;
			buf = a[i];
			l ++;
			b[k] = l;
			c[k] = buf;
			k ++;
			t = 0;
		}
	}
	for (i = 0; i < k; i++)
		if (b[i] > L)
			c[i] = 0;
	for (int i = 0; i < k; i++)
		cout << c[i] << " ";
}