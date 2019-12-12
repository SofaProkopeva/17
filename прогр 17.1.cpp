#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, j, t, k, l, buf;
	cout << "Введите размер массива N: ";
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	t = l = k = 0;
	cout << "Введите элементы массива: ";
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = l; i < n; i++)
	{
		if (a[i] == a[i + 1])
			t++;
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
	cout << "Массив из серий:" << endl;
	for (int i = 0; i < k; i++)
		cout << b[i] << " ";
	cout << endl;
	cout << "Массив из элементов:" << endl;
	for (int i = 0; i < k; i++)
		cout << c[i] << " ";
}