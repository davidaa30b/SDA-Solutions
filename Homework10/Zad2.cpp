////#include<iostream>
////#include<unordered_map>
////#include<vector>
////#include<unordered_set>
////
////using namespace std;
////
////unordered_map<int, int> compounds;
////
////unordered_map<int, unordered_set<int>> graph;
////unordered_set<int> visited;
////
////unordered_set<int> vertexes;
////
////void dfs(int top, int index) {
////	if (visited.find(top) != visited.end()) {
////		return;
////	}
////
////	compounds[top] = index;
////
////	visited.insert(top);
////
////	for (auto neighbour : graph[top]) {
////			dfs(neighbour,index);
////		
////	}
////}
////
////
////int main() {
////
////	int n, m, k, from, to;
////	cin >> n >> m;
////
////	while (m--) {
////		cin >> from >> to;
////		graph[from].insert(to);
////		graph[to].insert(from);
////		
////		vertexes.insert(from);
////		vertexes.insert(to);
////	}
////
////	cin >> k;
////	int index = 0;
////	for (auto it = vertexes.begin(); it != vertexes.end(); it++) {
////		if (visited.find(*it)==visited.end()) {
////			index++;
////			dfs(*it,index);
////		}
////	}
////	
////	
////	while (k--) {
////		cin >> from >> to;
////		cout << (compounds[from] == compounds[to]) << " ";
////	}
////	
////
////	return 0;
////}