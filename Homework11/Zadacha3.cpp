//#include<iostream>
//#include<vector>
//#include<queue>
//
//const int mod = (int)1e9 + 7;
//std::vector<std::pair<int, int>> graph[(int)5e5];
//long long arr_ans[(int)5e5];
//bool visited[(int)5e5];
//int visited_int[(int)5e5];
//
//int V, E, s, e;
//int from, to, w;
//
//void dijkstra(int start_node) {
//
//    std::priority_queue<std::pair<long long, int>, std::vector<std::pair<long long, int>>, std::greater<std::pair<long long, int>> > available;
//
//    std::fill(visited, visited + V, 0);
//    std::fill(arr_ans, arr_ans + V, LLONG_MAX);
//
//    available.push({ 0, start_node });
//    arr_ans[start_node] = 0;
//
//    while (available.size() != 0) {
//        auto current_node = available.top();
//        int current = current_node.second;
//        available.pop();
//
//        if (visited[current] == 1)
//            continue;
//
//        visited[current] = 1;
//
//        for (auto node : graph[current]) {
//            long long new_dist = arr_ans[current] + node.second;
//
//            if (arr_ans[node.first] > new_dist) {
//                arr_ans[node.first] = new_dist;
//                available.push({ arr_ans[node.first], node.first });
//            }
//        }
//    }
//}
//
//int dfs(int start_node) {
//    visited_int[start_node] = 0;
//
//    if (start_node == e) {
//        visited_int[start_node] = 1;
//        return 1;
//    }
//
//    int count = 0;
//
//    for (auto neighbour : graph[start_node]) {
//        if (arr_ans[neighbour.first] >= arr_ans[start_node])
//            continue;
//
//        if (visited_int[neighbour.first] == -1) {
//            count += dfs(neighbour.first);
//            count = count % mod;
//        }
//        else {
//            count += visited_int[neighbour.first];
//            count = count % mod;
//        }
//    }
//
//    visited_int[start_node] = count;
//    return count;
//}
//
//int main() {
//    scanf_s("%d %d %d %d", &V, &E, &s, &e);
//
//    for (int i = 0; i < E; i++) {
//        scanf_s("%d %d %d", &from, &to, &w);
//        graph[from].push_back({ to, w });
//        graph[to].push_back({ from, w });
//    }
//
//    dijkstra(e);
//
//    std::fill(visited_int, visited_int + V, -1);
//
//    printf("%d\n", dfs(s));
//
//    return 0;
//}