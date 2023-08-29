/*
#include <iostream>
using namespace std;
int main()
{
	int height;
	cout << "Please,enter the hieght : ";
	cin >> height;
	int  spaces = 1;
	int stars = height * 2 - 1;

	for (int i = 1; i <= height; i++) {

		for (int j = 0; j <= spaces; j++) {

			cout << " ";
		}
		for (int k = 1; k <= stars; k++) {
			cout << "*";
		}

		cout << endl;
		stars -= 2;
		spaces++;
	}

	return 0;
}
*/