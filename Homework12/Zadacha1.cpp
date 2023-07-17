//#include<iostream>
//#include<vector>
//using namespace std;
//
//const int N = 1005;
//vector<int> graph[N];
//
//int visited[N];
//int key = 1;
//int n, m, q, from, to, type;
//
//void dfs(int top) {
//	visited[top] = key;
//
//	for (int neighbour : graph[top]) {
//		if (visited[neighbour]==0) {
//			dfs(neighbour);
//		}
//	}
//}
//
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		cin >> from >> to;
//		graph[from].push_back(to);
//		graph[to].push_back(from);
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (visited[i]==0) {
//			dfs(i);
//			key++;
//		}
//		
//	}
//
//	cin >> q;
//	while (q--) {
//		cin >> type >> from >> to;
//
//		if (type == 1) {
//			if (visited[from] == visited[to]) {
//				cout << 1;
//			}
//			else {
//				cout << 0 ;
//			}
//		}
//		else {
//			int old = visited[to];
//			int neww = visited[from];
//			for (int i = 1; i <= n; i++) {
//				if (visited[i] == old) {//2,3
//					visited[i] = neww;
//				}
//			}
//		}
//	}
//
//	return 0;
//}