#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int pushNum;
	string input;
	queue<int> q;
	vector<int> result;
	int num = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> input;
		
		if (input == "push") {
			cin >> pushNum;
			q.push(pushNum);
		}
		else if (input == "pop") {
			if (q.empty())
				result.push_back(-1);
			else {
				result.push_back(q.front());
				q.pop();
			}
		}
		else if (input == "size") {
			result.push_back(q.size());
		}
		else if (input == "empty") {
			if (q.empty())
				result.push_back(1);
			else
				result.push_back(0);
		}
		else if (input == "front") {
			if (q.empty())
				result.push_back(-1);
			else
				result.push_back(q.front());
		}
		else if (input == "back") {
			if (q.empty())
				result.push_back(-1);
			else
				result.push_back(q.back());
		}
	}
	
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
}