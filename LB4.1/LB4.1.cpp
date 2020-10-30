#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int  N, i;
	double S;	cout << "N = "; cin >> N;	S = 0;	i = 1;
	while (i <= N)
	{
		S += (sin(i) / 1 + cos(i));
		i++;
	}

	cout << S << endl;

	S = 0;
	i = 1;
	do {
		S += (sin(i) / 1 + cos(i));
		i++;
	} while (i <= N);
	cout << S << endl;

	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += (sin(i) / 1 + cos(i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += (sin(i) / 1 + cos(i));
	}
	cout << S << endl;
	system("pause");
	return 0;
}

