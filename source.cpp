#include <iostream>
using namespace std;
int hieu(int a, int b);
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so 1: ";
	cin >> a;
	cout << "Nhap so 2: ";
	cin >> b;
	hieu(a, b);


	system("pause");
	return 0;
}
int hieu(int a, int b) {
	return a - b;
}