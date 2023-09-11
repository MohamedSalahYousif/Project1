/*
#include <iostream>
using namespace std;
int main()
{
	int array[100];
	int size, j, temp;
	int sum = 0, average;
	cout << "Enter total number of elements to read: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> array[i];
		sum += array[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << "Sorted Array elements:" << endl;
	int* pointer = &array[0];
	for (int i = 0; i < size; i++) {
		cout << *pointer << " ";
		pointer++;
	}
	cout << endl;

	int larg = size - 1;
	int* ptrlarg = &array[larg];
	int* ptrsmall = &array[0];

	cout << "largest number is : " << *ptrlarg << endl;
	cout << "smallest number is : " << *ptrsmall << endl;
	cout << "sum of elements is : " << sum << endl;
	average = sum / size;
	cout << "average is : " << average;

	return 0;

}
*/