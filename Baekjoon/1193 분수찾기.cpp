#include <iostream>
#include <vector>

using namespace std;

int main() {
	int input;
	int a = 1;
	int b = 1;
	int temp;
	int sum = 1;
	int count = 2;
	
	cin >> input;

	for (int i = 0; i < input; i++) {
		sum = sum + 1;
		count = count + sum;
		if (count > input) {
			break;
		}
	}

	if (sum % 2 == 0) {
		a = sum+1;
		b = 0;
		for (int j = count - input; j > 0; j--) {
			a--;
			b++;
		}
	} else {
		a = 0;
		b = sum+1;
		for (int j = count - input; j > 0; j--) {
			a++;
			b--;
		}
	}

	if (input == 1) {
		a = 1;
		b = 1;
	}

	cout << a << "/" << b;
}