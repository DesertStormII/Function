#include <iostream>
using namespace std;
int SummaChisel(int one, int two) {
	int Summa;
	Summa = one + two;
	return Summa;
}

int main()
{
	int x, y;
	cout << "Enter x -- ";
	cin >> x;
	cout << "Enter y -- ";
	cin >> y;
	cout << "  " << SummaChisel(x, y) << endl;
	return 0;
}