//#include<iostream> 
//#include <vector>
//#include<queue>
//
//using namespace std;
//
//
//
//int main() {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//    int t;
//    cin >> t;
//    int const N = 3000001;
//    long long n;
//    bool* results = new bool[t];
//
//    for (int i = 0; i < t; i++) {
//        results[i] = true;
//    }
//
//    for (int treeIndex = 0; treeIndex < t; treeIndex++) {
//        cin >> n;
//        unsigned long long* roots = new unsigned long long[N] {};
//        long long* leftIndexes = new long long[N] {};
//        long long* rightIndexes = new long long[N] {};
//
//        for (long long i = 0; i < n; i++) {
//            cin >> roots[i] >> leftIndexes[i] >> rightIndexes[i];
//        }
//        int rootMain = roots[0];
//        for (long long i = 0; i < n; i++) {
//
//            if (leftIndexes[i] != -1) {
//                if (roots[i] < roots[leftIndexes[i]] && rootMain<roots[leftIndexes[i]]) {
//                    results[treeIndex] = false;
//                    break;
//                }
//
//            }
//
//            if (rightIndexes[i] != -1) {
//                if (roots[i] > roots[rightIndexes[i]] && rootMain>roots[rightIndexes[i]]) {
//                    results[treeIndex] = false;
//                    break;
//                }
//            }
//
//        }
//
//        delete[] roots;
//        delete[] leftIndexes;
//        delete[] rightIndexes;
//    }
//    for (int i = 0; i < t; i++) {
//        cout << results[i] << "\n";
//    }
//
//
//    delete[] results;
//    return 0;
//}