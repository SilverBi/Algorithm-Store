#include <iostream>
#include <stack>

using namespace std;

int main() {
	int K;
	int input;
	int sum = 0;
	stack<int> s;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> input;
		if (i == 0 && input != 0) {
			s.push(input);
		}
		else {
			if (input == 0) {
				s.pop();
			}
			else if (input != 0) {
				s.push(input);
			}
		}
	}

	while (!s.empty()) {
		sum = sum + s.top();
		s.pop();
	}

	cout << sum;
}