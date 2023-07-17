//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//pair<int, pair<int, int>> edges[500000];
//int depth[100000], parent[100000];
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
//int main() {
//
//    int from, to, weight, n, m;
//    cin >> n >> m;
//    for (int i = 0; i < m; ++i) {
//        cin >> from >> to >> weight;
//        edges[i] = { weight, {from , to } };
//    }
//
//    for (int i = 0; i < n; i++) {
//        parent[i] = i;
//        depth[i] = 0;
//    }
//
//    int ans = 0;
//    sort(edges, edges + m);//sort ascending
//
//    for (int i = 0; i < m; i++) {
//        cout << "weight : " << edges[i].first << ", from" << edges[i].second.first << ", to" << edges[i].second.second << endl;
//    }
//
//    cout << endl;
//    cout << "min tree is " << endl;
//    for (int i = 0; i < m; i++) {
//
//        from = edges[i].second.first;
//        to = edges[i].second.second;
//        weight = edges[i].first;
//
//        int fromP = Find(from), toP = Find(to);
//        if (fromP != toP) {
//            cout << "weight : " << edges[i].first << ", from" << edges[i].second.first << ", to" << edges[i].second.second << endl;
//
//            Union(fromP, toP);
//        }
//
//        else {
//            ans += weight;
//        }
//
//    }
//    cout << ans << endl;
//}