#include<iostream>
#include<algorithm>

using namespace std;

struct Edge {
    long long from;
    long long to;
    long long effort;
    long long profit;
    long long index;

    Edge() : from(0), to(0), effort(0), profit(0), index(1) {

    }

    Edge(long long from, long long to, long long effort, long long profit, long long index) {
        this->from = from;
        this->to = to;
        this->effort = effort;
        this->profit = profit;
        this->index = index;
    }

};


bool edgesSorter(const Edge& edge1, const Edge& edge2) {

    if (edge1.effort == edge2.effort) {

        return(edge1.profit > edge2.profit);
    }

    return (edge1.effort < edge2.effort);

}


Edge edges[200006];

long long depth[200006], parent[200006];

void Union(long long l, long long r) {

    if (depth[l] < depth[r]) {
        parent[l] = r;
    }

    else {
        parent[r] = l;
        if (depth[l] == depth[r]) {
            depth[l] ++;
        }
    }

}

long long Find(long long v) {
    if (parent[v] == v) return v;

    return Find(parent[v]);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long from, to, effort, profit, n, m;
    cin >> n >> m;
    for (long long i = 0; i < m; ++i) {
        cin >> from >> to >> effort >> profit;
        edges[i] = *new Edge(from, to, effort, profit, i + 1);

    }

    for (long long i = 0; i < n; i++) {
        parent[i] = i;
        depth[i] = 0;
    }

    sort(edges, edges + m, edgesSorter);


    for (long long i = 0; i < m; i++) {

        from = edges[i].from;
        to = edges[i].to;

        long long fromP = Find(from), toP = Find(to);
        if (fromP != toP) {


            Union(fromP, toP);
            cout << edges[i].index << "\n";

        }


    }
    return 0;
}