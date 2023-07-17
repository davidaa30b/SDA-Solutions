//#include <iostream>
//#include <queue>
//#include <stack>
//#include <vector>
//#include<unordered_map>
//#include<climits>
//
//using namespace std;
//
//const int N = 100001;
//int m = 0, n = 0, costToChildOfCurrent = 0, beingStop, endStop;
//int dist[N];
//int correctionTime[N];
////unordered_map<int,vector<pair<int, int>>>adjacencyList;
//vector<pair<int, int>>graph[N];
//
//void dijkstra(int v)
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
//        if(costToCurrent > dist[current]) continue;
//
//
//        for (auto neighbour : graph[current])
//        {
//
//            int child = neighbour.first;
//            int costToChildOfCurrent = neighbour.second;//costa e pytq
//
//            int totalCost = costToCurrent + costToChildOfCurrent;
//
//            if (totalCost % correctionTime[child] != 0 && child != endStop) {
//                int k = totalCost / correctionTime[child] + 1;
//                totalCost = k * correctionTime[child];
//            }
//
//            if (dist[child] > totalCost)
//            {
//                dist[child] = totalCost;
//                pq.push({ totalCost, child });
//            }
//
//        }
//    }
//
//}
//
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//
//    int from = 0, to = 0;
//    cin >> n >> m>>beingStop>>endStop;
//
//    for (int i = 0; i < n; i++) {
//        cin >> correctionTime[i];
//    }
//
//    while (m)
//    {
//        cin >> from >> to >> costToChildOfCurrent;
//        graph[from].push_back( { to, costToChildOfCurrent });
//        graph[to].push_back({from, costToChildOfCurrent});
//        m--;
//    }
//
//    dijkstra(beingStop);
//
//    if (dist[endStop] != INT_MAX)
//        cout << dist[endStop];
//    else
//        cout << -1;
//
//    return 0;
//    
//}