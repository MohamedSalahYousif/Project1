#include <iostream>
using namespace std;
int main()
{
	int height;
	cout << "Please,enter the hieght : ";
	cin >> height;
	int  spaces = height - 1;
	int sp = 1;
	int stars = height * 2 - 1;
	for (int i = 1; i <= height; i++) {

		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}
		cout << "*";

		if (i != 1) {
			for (int k = 1; k <= sp; k++) {
			cout << " ";
			}

			cout << "*hnn";
	}

		//else if (i == 1) {
		//	cout << "*";
	//	}
		//else {
		//	for (int q = 0; q <= stars; q++) {
		//		cout << "*";
		//	}
		//}
	
		cout << endl;
		sp +=2;
		spaces--;
	}

	return 0;
}