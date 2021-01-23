#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int lotto[49] = { 0, };
int input[49] = { 0, };
int k = 1;

void combination(int depth, int next) {
	if (depth == 6) {
		for (int j = 0; j < 6; j++) {
			cout << input[lotto[j]] << " ";
		}
		cout << "\n";

		return;
	}

	for (int j = next; j <= k; j++) {
		lotto[depth] = j-1;
		combination(depth + 1, j + 1);
	}
}

int main() {
	while (true) {
		cin >> k;
		
		if (k == 0) {
			break;
		}

		for (int i = 0; i < k; i++) {
			cin >> input[i];
		}

		sort(input, input + k);

		combination(0, 1);

		cout << "\n";
	}

	return 0;
}