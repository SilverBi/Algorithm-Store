#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	stack<int> A;
	stack<int> compare;
	stack<int> result;

	cin >> N;

	int *input = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> input[i];

		A.push(input[i]);
	}

	for (int i = 0; i < N; i++) {
		if (i == 0) {
			result.push(-1);
			compare.push(A.top());
			A.pop();
		}
		else {
			if (A.top() < compare.top()) {
				result.push(compare.top());
				compare.push(A.top());
				A.pop();
			}
			else {
				while (1) {
					compare.pop();

					if (compare.empty()) {
						compare.push(A.top());
						result.push(-1);
						A.pop();
						break;
					}
					else {
						if (A.top() < compare.top()) {
							result.push(compare.top());
							compare.push(A.top());
							A.pop();
							break;
						}
					}
				}

			}
		}

		if (A.empty()) {
			while (!result.empty()) {
				cout << result.top() << " ";
				result.pop();
			}
			break;
		}
	}
}