//
//// CPP program to do level order traversal
//// of a generic tree
//#include<iostream>
//#include<vector>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//    vector<long>child{};
//};
//
//const long N = 1000005;
//
//long timeIn[N]{};
//long timeOut[N]{};
//long t = 0;
//
//Node roots[N];
//
//void dfs(long top) {
//  //  cout << top << " ";
//
//    timeIn[top] = t++;
//    for (auto root : roots[top].child) {
//        dfs(root);
//    }
//    timeOut[top] = t++;
//}
//
//
//
//int main()
//{
//    
//    long n;
//    cin >> n;
//    long mainRoot=0;
//    bool keyLeadRoot = true;
//    long parent, child;
//    for (long i = 0; i < n-1; i++) {
//        cin >> parent >> child;
//        if (keyLeadRoot) {
//            keyLeadRoot = false;
//            mainRoot = parent;
//        }
//        roots[parent].child.push_back(child);
//    }
//
//    dfs(mainRoot);
//
//    long q;
//    cin >> q;
//    for (long i = 0; i <q; i++) {
//        cin >> parent >> child;
//        if (timeIn[parent] < timeIn[child] && timeOut[child] < timeOut[parent]) {
//            cout << "YES\n";
//            //answer.push_back("YES");
//        }
//        else {
//            cout << "NO\n";
//            // answer.push_back("NO");
//        }
//    }
//   
//
//    return 0;
//}