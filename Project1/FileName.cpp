#include <iostream>
using namespace std;
int main()
{
	int side, w;
	cout << "Please,enter the side of square  : ";
	cin >> side;
	cout << "Please,enter the side of square  : ";
	cin >> w;
	int spaces = w - 2;

	for (int i = 1; i <= side; i++) {
		cout << "*";

		if (i == 1 || i == side) {
			for (int l = 2; l < w; l++) {
				cout << "*";
			}
		}
		else {
			for (int j = 1; j <= spaces; j++) {
				cout << " ";
			}
		}
		cout << "*";
		cout << endl;
	}
	return 0;
}