/*
#include <iostream>
using namespace std;
int main()
{
	int height;
	cout << "Please,enter the hieght : ";
	cin >> height;
	int  spaces = height - 1;
	int stars = 1;
	int str = height * 2 - 1;

	for (int i = 1; i <= height; i++) {

		for (int j = str; j >= 1; j--) {
			cout << "*";
		}

		for (int k = 0; k <= spaces; k++) {

			cout << " ";
		}

		cout << endl;
		str -= 2;
		spaces++;
	}

	return 0;
}
*/