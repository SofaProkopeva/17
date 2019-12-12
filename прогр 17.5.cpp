#include <iostream>
#include <math.h>
#define SIZE 1024
using namespace std;

int main()
{
	int n, maxa, maxb, maxc;
	float p, max;
	int mas[SIZE][2];
	cout << "N=";
	cin >> n;
	maxa = maxb = maxc = max = -1;
	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			cin >> mas[i][j];
		}

	}
	for (int a = 1; a < n - 1; a++)
	{
		for (int b = a + 1; b < n; b++)
		{
			for (int c = b + 1; c < n + 1; c++)
			{
				for (int j = 1; j < 2; j++)
				{
					p = 0;
					p = sqrt((mas[a][j] - mas[b][j]) * (mas[a][j] - mas[b][j]) + (mas[a][j + 1] - mas[b][j + 1]) * (mas[a][j + 1] - mas[b][j + 1]));
					p += sqrt((mas[a][j] - mas[c][j]) * (mas[a][j] - mas[c][j]) + (mas[a][j + 1] - mas[c][j + 1]) * (mas[a][j + 1] - mas[c][j + 1]));
					p += sqrt((mas[b][j] - mas[c][j]) * (mas[b][j] - mas[c][j]) + (mas[b][j + 1] - mas[c][j + 1]) * (mas[b][j + 1] - mas[c][j + 1]));
					if (p > max)
					{
						max = p;
						maxa = a;
						maxb = b;
						maxc = c;
					}
				}
			}
		}
	}
	cout << max << endl << mas[maxa][1] << " " << mas[maxa][2] << endl << mas[maxb][1] << " " << mas[maxb][2] << endl << mas[maxc][1] << " " << mas[maxc][2];
}