/*
#include <iostream>
using namespace std;

void Numbers() {
	int max, option, sum = 0, average;
		int aver = 0;
		int sum2 = 0; 
	    int sum3 = 0;
	cout << "Please,enter the maximum value : ";
	cin >> max;
	cout << "for odd numbers choose 1 " << endl;
	cout << "for even numbers choose 2 " << endl;
	cout << "for prime numbers choose 3 " << endl;
	cin >> option;

	if (option == 1) {
		cout << "Odd numbers from 1 to " << max << " is : ";
		for (int i = 1; i <= max; i++) {
			if (i % 2 != 0) {
				cout << i << " ";
				sum += i;
				aver += 1;
			}
		}
		cout << endl;
		cout << "sum is : " << sum << endl;
		average = sum / aver;
		cout << "Aerage is : " << average;
	}
	else if (option == 2) {
		cout << "Even numbers from 1 to " << max << " is : ";
		for (int i = 1; i <= max; i++) {
			if (i % 2 == 0) {
				cout << i << " ";
				sum2 += i;
				aver += 1;

			}
		}
		cout << endl;
		cout << "sum is : " << sum2 << endl;
		average = sum2 / aver;
		cout << "Aerage is : " << average;
	}
	else if (option == 3) {
		cout << "prime numbers from 1 to " << max << " is : ";

		for (int i = 2; i < max; i++) {

			for (int j = 2; j < i; j++) {

				if (i % j == 0)
					break;

				else if (i == j + 1) {

					cout << i << " ";
					sum3 += i;
					aver += 1;
				}

			}
		}
		cout << endl;
		cout << "sum is : " << sum3 << endl;
		average = sum3 / aver;
		cout << "Aerage is : " << average;

	}
	else {
		cout << "please choose 1,2 or 3 only";
	}
}

void pyramid()
{
	int height;
	cout << "Please,enter the hieght : ";
	cin >> height;
	int  spaces = height - 1;
	int stars = 1;

	for (int i = 1; i <= height; i++) {

		for (int j = 1; j <= spaces; j++) {
			cout << " ";
		}

		for (int k = 1; k <= stars; k++) {

			cout << "*";
		}

		cout << endl;
		stars += 2;
		spaces--;
	}

}

int pyramid2()
{
	int height;
	cout << "Please,enter the hieght : ";
	cin >> height;
	int  spaces = height-2 ;
	int sp = 1;
	int stars = height * 2 - 1;
	int spa = height - 1;
	int var = height - 2;
	int star = stars / 2 + 1;
	for (int m = 1; m <= spa; m++) {
		cout << " ";
	}
	cout << "*" << endl;
		for (int i = 1; i <= var; i++) {

			for (int j = 0; j < spaces; j++) {
				cout << " ";
			}
			cout << "*";

			for (int k = 0; k < sp; k++) {
				cout << " ";
			}

			cout << "*";
			cout << endl;
			sp += 2;
			spaces--;
		}
		for (int m = 1; m <= star; m++) {
			cout << "* ";
		}
		
	return 0;

}

int rectangle()
{
	int length, w;
	cout << "Please,enter the length of rectangular : ";
	cin >> length;
	cout << "Please,enter the width of rectangular : ";
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

int right_inverted_pyramid()
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

int angled_pyramid()
{
	int height;
	cout << "Please,enter the hieght : ";
	cin >> height;
	int  spaces = height - 1;
	int stars = 1;

	for (int i = 1; i <= height; i++) {

		for (int k = 1; k <= stars; k++) {

			cout << "*";
		}

		cout << endl;
		stars += 2;
		spaces--;
	}

	return 0;
}

int square()
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

int main()
{
	int choice,choice2;
	cout << "For Section Of Numbers press 1" << endl;
	cout << "For Section Of Star shapes press 2" << endl;
	cin >> choice;
	if (choice == 1) {
		Numbers();
	}
	else if (choice == 2) {
		cout << "For pyramid Of Stars press 1" << endl;
		cout << "For square Of Stars press 2" << endl;
		cout << "For rectangle Of Stars press 3" << endl;
		cout << "For iverted pyramid Of Stars press 4" << endl;
		cout << "For right angled pyramid Of Stars press 5" << endl;
		cout << "For iverted right angled pyramid Of Stars press 6" << endl;
		cin >> choice2;
		if (choice2 == 1) {
			pyramid();
		}
		else if (choice2 == 2) {
			square();
		}
		else if (choice2 == 3) {
			rectangle();
		}
		else if (choice2 == 4) {
			pyramid2();
		}
		else if (choice2 == 5) {
			angled_pyramid();
		}
		else if (choice2 == 6) {
			right_inverted_pyramid();
		}

	}

	else {
		cout << "wrong value, Please choose 1 or 2";
	}
	return 0;
}

*/