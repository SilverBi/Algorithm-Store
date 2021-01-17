#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	int isHomework, A, T;
	vector<int> score;
	vector<int> time;
	int count = 0;
	int result = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> isHomework;

		if (isHomework == 1) {
			cin >> A >> T;
			score.push_back(A);
			time.push_back(T);
		}
		else {
			score.push_back(0);
			time.push_back(0);
			continue;
		}
	}

	for (int i = 0; i < N; i++) {
		if (time[count] == 0) {
			for (int j = count; j >= 0; j--) {
				if (time[j] != 0) {
					count = j;
					break;
				}
			}
		}

		else if (time[i] != 0) {
			count = i;
		}

		time[count]--;
		if (time[count] == 0) {
			count++;
		}
	}

	for (int i = N - 1; i >= 0; i--) {
		if (time[i] <= 0) {
			result = result + score[i];
		}
	}

	cout << result;
}