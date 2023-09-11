#include <iostream>
using namespace std;

int square(int x,int o) {

	string val[9] = { "1","2","3","4","5","6","7","8","9"};
	if (x != 0) {
		val[x-1] = "x";
	}
	if (o != 0) {
		val[o-1] = "o";
	}
	for (int i = 1; i <= 13; i++) {
		if (i == 1 || i == 5 || i == 9 || i == 13) {
			cout << "-------------------------------" << endl;

		}
		else if (i % 2 == 0) {
			cout << "|         |         |         |" << endl;
		}
		else if(i==3)
			cout << "|    " << val[0] << "    |    " << val[1] << "    |    " << val[2] << "    |" << endl;
		else if(i==7)
			cout << "|    " << val[3] << "    |    " << val[4] << "    |    " << val[5] << "    |" << endl;
		else if (i == 11)
			cout << "|    " << val[6] << "    |    " << val[7] << "    |    " << val[8] << "    |" << endl;
		  }
	return 0;
}

int main() {

	square(0,0);
	int x, o;
	for (int l = 1; l <= 9; l++) {
		if (l % 2 == 0){
			cout << "please enter place player x: ";
		cin >> x;
		square(x, 0);
	}
		else {
			cout << "please enter place player y: ";
			cin >> o;
			square(0, o);
		}
	}

	return 0;
}
