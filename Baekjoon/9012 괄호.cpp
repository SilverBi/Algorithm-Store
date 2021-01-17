#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	string input;
	stack<char> bracket;
	string temp;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;

		for (int j = 0; j < input.size(); j++) {
			if (bracket.empty()) {
				bracket.push(input[j]);
			}
			else {
				if (input[j] == ')' && bracket.top() == '(') {
					bracket.pop();
				}
				else {
					bracket.push(input[j]);
				}
			}
		}

		if (bracket.empty())
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";

		while (!bracket.empty()) {
			bracket.pop();
		}
	}
}