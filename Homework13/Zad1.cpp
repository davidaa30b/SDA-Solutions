//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int dp[1000][1000], a[1000], w[1000], n, x;
//int counter = 0;
//
//int ans(int n, int x) {
//    if (dp[n][x] != 0) {
//        //counter++;
//        return dp[n][x];
//    }
//    if (n == 0) {
//        return 0;
//    }
//    if (x < w[n - 1]) {
//        return dp[n][x] = ans(n - 1, x);
//    }
//    
//    return dp[n][x] = max(ans(n - 1, x), ans(n - 1, x - w[n - 1]) + a[n - 1]);
//}
//
//int main() {
//    cin >> n;
//    x = 10080;
//    
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//        w[i] = a[i];
//    }
//
//  
//   
//  
//    cout << ans(n, x) << endl;
//
//
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= n; j++) {
//            cout << dp[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << counter << endl;
//
//}
