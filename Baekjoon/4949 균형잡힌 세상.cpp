#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	string text;
	stack<char> s;

	while (1) {
		getline(cin, text);

		if (text == ".") {
			break;
		}
		else {
			for (int i = 0; i < text.size(); i++) {
				if (s.empty()) {
					if (text[i]=='(' || text[i] == ')' || text[i] == '[' || text[i] == ']')
						s.push(text[i]);
				}
				else if (!s.empty()) {
					if (text[i] == ')' && s.top() == '(') {
						s.pop();
					}
					else if (text[i] == ']' && s.top() == '[') {
						s.pop();
					}
					else if (text[i] == '(' || text[i] == ')') {
						s.push(text[i]);
					}
					else if (text[i] == '[' || text[i] == ']') {
						s.push(text[i]);
					}
				}
			}
		}

		if (s.empty()) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}

		while (!s.empty()) {
			s.pop();
		}
	}
}