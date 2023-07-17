#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

unordered_map<int, unordered_set<int>>graph;
unordered_set<int>visited;
unordered_set<unordered_set<int>> vryzki;

int main() {
	int q;
	cin >> q;
	int m, n, from, to, k;

	while (q--) {
		cin >> n >> m;
		while (m--) {
			cin >> from >> to;
			graph[from].insert(to);
			graph[to].insert(from);
		}
		cin >> k;
		cout << "bullshit : " << endl;
		for (auto it = graph.begin(); it != graph.end(); it++) {
			cout << it->first << endl;
		}

	}
	return 0;
}