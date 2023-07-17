#include<iostream>
#include <queue>
using namespace std;

int main() {

	priority_queue<int,vector<int>,greater<int>> queries;
	vector<int>answers;
	
	int K, T, B, N;
	cin >> K >> T >> B >> N;
	int data;
	for (int i = 1; i <= N; i++) {
		cin >> data;
		queries.push(data);
		if (B != 0) {
			if (i % T==0) {
				int count = K;
				while (count--) {
					answers.push_back(queries.top());
					queries.pop();
					if (queries.empty()) {
						break;
					}
				}
				B--;
			}
			
		}
	}
	
	if (!queries.empty() && B!=0) {
		while (K--) {
			answers.push_back(queries.top());
			queries.pop();
			if (queries.empty()) {
				break;
			}
		}
		B--;
	}
	
	for (size_t i = 0; i < answers.size(); i++) {
		cout << answers[i] << " ";
	}

	return 0;
}