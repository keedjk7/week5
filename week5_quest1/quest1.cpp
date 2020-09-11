#include<iostream>
#include<list>

using namespace std;

list<int> Keep;

void negative(int input) {
	Keep.push_back(input);
	if (input <= -1000 && input % 2 == 0) {
		cout << "= Enemy armys are detected\n\n";
	}
	else if (input <= -1000 && input % 2 == 1) {
		cout << "= We lost one of the front line bases\n\n";
	}
	else if (input > -1000 && input % 2 == 0) {
		cout << "= Retret from frontline wars\n\n";
	}
	else {
		cout << "= Our armys have been defeated\n\n";
	}
}

void positive(int input) {
	Keep.push_back(input);
	if (input >= 1000 && input % 2 == 0) {
		cout << "= We can destroy enemy frontline bases\n\n";
	}
	else if (input >= 1000 && input % 2 == 1) {
		cout << "= The enemy armys have been defeated\n\n";
	}
	else if (input < 1000 && input % 2 == 0) {
		cout << "= Enemy armys are not detected\n\n";
	}
	else {
		cout << "= Enemy armies are retreat\n\n";
	}
}

void print() {
	cout << "\nShowALL :\n";
	for (list<int>::iterator p = Keep.begin(); p != Keep.end(); p++) {
		if (*p > 0) {
			cout << "-> Attack Code : " << *p << " \n";
		}
		else {
			cout << "-> Defend Code : " << *p << " \n";
		}
	}
}

int main() {
	bool pass = false;
	while (pass != true) {
		int input;
		cin >> input;
		if (input > 0) {
			positive(input);
		}
		else if (input < 0) {
			negative(input);
		}
		else {
			pass = true;
		}
	}
	cout << "\nThe War Is Over";
	print();

	return 0;
}