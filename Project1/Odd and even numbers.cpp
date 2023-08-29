/*

#include <iostream>
using namespace std;
int main()
{
	int max, option,sum=0,average;
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
		cout << "sum is : " <<sum<<endl;
		average = sum / aver;
		cout << "Aerage is : " << average;
	}
	else if (option == 2) {
		cout << "Even numbers from 1 to " << max << " is : ";
		for (int i = 1; i <= max; i++) {
			if (i % 2 == 0){
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

			for (int j = 2; j < i; j++){

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
	return 0;
}
*/