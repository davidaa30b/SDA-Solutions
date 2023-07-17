////#include<iostream>
////#include<unordered_map>
////#include<set>
////#include<stack>
////#include<vector>
////#include<algorithm>
////using namespace std;
////
////unordered_map<char, set<char>> graph;
////unordered_map<char, bool> visited;
////
////stack<char> s;
////
////void dfs(char v)
////{
////	visited[v] = 1;
////	for (auto neighbour : graph[v])
////	{
////		if (!visited[neighbour]) dfs(neighbour);
////	}
////	s.push(v);
////}
////
////
////void topologicalSort()
////{
////	for (auto neighbour : graph)
////	{
////		char cur = neighbour.first;
////		if (!visited[cur]) dfs(cur);
////	}
////}
////
////void addAllKeys(string input) {
////	for (char c : input) {
////		graph[c];
////	}
////}
////
////int main() {
////	int n;
////	cin >> n;
////
////	vector<string> inputs(n);
////	string buffer1, buffer2;
////	
////	
////	for (int i = 0; i < n; i++) {
////		cin >> inputs[i];
////		addAllKeys(inputs[i]);
////	}
////
////	for (int i = 0; i < n - 1; i++) {
////
////		buffer1 = inputs[i];
////		buffer2 = inputs[i + 1];
////		size_t minSize = min(buffer1.size(), buffer2.size());
////		for (size_t k = 0; k < minSize; k++) {
////			if (buffer1[k] != buffer2[k]) {
////				graph[buffer1[k]].insert(buffer2[k]);
////				break;
////			}
////		}
////
////	}
////
////	topologicalSort();
////
////	    while (!s.empty()) {
////        cout << s.top() << " ";
////        s.pop();
////    }
////
////	return 0;
////}