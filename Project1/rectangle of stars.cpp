/*
#include <iostream>
using namespace std;
int main()
{
	int length, w;
	cout << "Please,enter the length of rectangular  : ";
	cin >> length;
	cout << "Please,enter the width of rectangular  : ";
	cin >> w;
	int spaces = w - 2;

	for (int i = 1; i <= length; i++) {
		cout << "*";

		if (i == 1 || i == length) {
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
*/