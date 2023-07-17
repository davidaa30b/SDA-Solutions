//#include<iostream>
//#include<algorithm>
//#include<climits>
//using namespace std;
//
//int const N = 10009;
//struct Node {
//	int from;
//	int to;
//	int speed;
//};
//
//struct MinMaxDiff {
//	int minn=0;
//	int maxx=0;
//};
//
//bool nodesSorter(const Node& node1, const Node& node2) {
//	return (node1.speed < node2.speed);
//
//}
//
//Node graph[N];
//
//int depth[N], parent[N];
//
//void Union(int l, int r) {
//
//    if (depth[l] < depth[r]) {
//        parent[l] = r;
//    }
//
//    else {
//        parent[r] = l;
//        if (depth[l] == depth[r]) {
//            depth[l] ++;
//        }
//    }
//
//}
//
//int Find(int v) {
//    if (parent[v] == v) return v;
//
//    return Find(parent[v]);
//}
//
//
//int main() {
//
//	std::ios_base::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> graph[i].from >> graph[i].to >> graph[i].speed;
//	}
//
//	
//
//	sort(graph, graph + m, nodesSorter);
//
//	/*for (int i = 0;  i < m; i++) {
//		cout  << graph[i].from << " " << graph[i].to << " " << graph[i].speed << endl;
//	}*/
//
//	//cout << endl;
//
//	int counter = 0;
//
//	int minn = INT_MAX;
//	int maxx = 0;
//	int diff = minn - maxx;
//	int beginIndex = 0;
//
//	MinMaxDiff ans;
//
//	do {
//		counter = 0;
//		minn = INT_MAX;
//		maxx = 0;
//		for (int i = 0; i <=n; i++) {
//			parent[i] = i;
//			depth[i] = 0;
//		}
//		
//		for (int i = beginIndex; i < m; i++) {
//			int from = graph[i].from;
//			int to = graph[i].to;
//
//			int fromP = Find(from), toP = Find(to);
//
//			if (fromP != toP) {
//				counter++;
//				//cout <<"index : "<<i<< " ,from : " << graph[i].from << " ,to : " << graph[i].to << " ,speed : " << graph[i].speed << endl;
//
//				minn = min(minn, graph[i].speed);
//				maxx = max(maxx, graph[i].speed);
//
//				Union(fromP, toP);
//			}
//
//		}
//		//cout << "counter : " << counter << endl;
//
//		int curDiff = maxx - minn;
//		//cout <<"curDiff : "<< curDiff << endl;
//		if (curDiff < diff) {
//			diff = curDiff;
//			//cout << "better curDiff : " << curDiff << endl;
//	    	//cout << "curMin : " << minn << endl;
//			//cout << "curMax : " << maxx << endl;
//
//			ans.minn = minn;
//			ans.maxx = maxx;
//		}
//		beginIndex++;
//
//		//cout << "beginIndex : " <<beginIndex<< endl;
//
//
//	} while (counter == n-1);
//
//	cout << ans.minn << " " << ans.maxx;
//	return 0;
//}