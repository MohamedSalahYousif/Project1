/*#include <iostream>
using namespace std;
int main()
{
	int side;
	cout << "Please,enter the side of square  : ";
	cin >> side;
	int spaces = side - 2;
	for (int i = 1; i <= side; i++) {
		cout << "*";

		if (i == 1 || i == side) {
			for (int l = 2; l < side; l++) {
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