//#include <iostream>
//#include <queue>
//#include <stack>
//#include <vector>
//#include<unordered_map>
//#include<climits>
//#include<map>
//
//using namespace std;
//
//const int N = 100001;
//
//int m = 0, n = 0, q = 0, costToChildOfCurrent = 0;
//int from = 0, to = 0;
//
//unordered_map<int,vector<pair<int, int>>>graph;
//map<int, int*>sourceTable;
//
//void dijkstra(int v,int dist[])
//{
//    for (int i = 0; i < n; i++) dist[i] = INT_MAX;
//
//    dist[v] = 0;
//
//    priority_queue< pair<int, int>, vector <pair<int, int>>, greater<pair<int, int>> > pq;
//    pq.push({ 0,v });
//
//    while (!pq.empty())
//    {
//        int current = pq.top().second;
//        int costToCurrent = pq.top().first;
//        pq.pop();
//
//        if (costToCurrent > dist[current]) continue;
//
//
//        for (auto neighbour : graph[current])
//        {
//
//            int child = neighbour.first;
//            int costToChildOfCurrent = neighbour.second;
//
//            int totalCost = costToCurrent + costToChildOfCurrent;
//
//            if (dist[child] > totalCost)
//            {
//                dist[child] = totalCost;
//                pq.push({ totalCost, child });
//            }
//        }
//    }
//}
//
//void fillGraph() {
//    for (int i = 0; i < n; i++) {
//        graph[i];
//    }
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//
//    cin >> n >> m>>q ;
//
//    fillGraph();
//
//    while (m--)
//    {
//        cin >> from >> to >> costToChildOfCurrent;
//        graph[from].push_back({ to, costToChildOfCurrent });
//    }
//    
//    
//    while (q--) {
//
//        cin >> from >> to;
//        if (!sourceTable.count(from)) {
//            int * dist= new int[n];
//            dijkstra(from,dist);
//            sourceTable[from] = dist;
//        }
//
//        if (sourceTable[from][to] != INT_MAX) {
//            cout << sourceTable[from][to] << "\n";
//        }
//        else {
//            cout << -1 << "\n";
//        }
//        
//    }
//
//    return 0;
//
//}