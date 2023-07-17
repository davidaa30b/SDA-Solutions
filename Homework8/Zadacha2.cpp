//#include<iostream>
//#include <iomanip>
//#include <ios>
//#include<vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//double median=0;
//
//priority_queue<double>citizensLeft;
//priority_queue<double, vector<double>, greater<double>> citizensRight;
//
//double counter = 0;
//
//double getMedian(double data,int i) {
//    if (i % 2 == 0) {
//        if (data > median) {
//            citizensRight.push(data);
//            counter++;
//
//            if (counter != 0) {
//                citizensLeft.push(citizensRight.top());
//                citizensRight.pop();
//                counter = 0;
//            }
//        }
//        else {
//            citizensLeft.push(data);
//            counter--;
//
//            if (counter != 0) {
//                citizensRight.push(citizensLeft.top());
//                citizensLeft.pop();
//                counter = 0;
//            }
//        }
//
//        median = (citizensRight.top() + citizensLeft.top()) / 2;
//        
//    }
//    else {
//        if (data > median) {
//            citizensRight.push(data);
//            counter++;
//            median = citizensRight.top();
//        }
//        else {
//            citizensLeft.push(data);
//            counter--;
//            median = citizensLeft.top();
//        }
//    }
//
//    return median;
//}
//
//int main() {
//    
//    int N;
//    cin >> N;
//    double data;
//    vector<double> result;
//    for (int i = 1; i <= N; i++) {
//        cin >> data;
//        result.push_back(getMedian(data,i));
//
//    }
//
//   // cout << "results" << endl;
//    for (size_t i = 0; i < result.size(); i++) {
//        cout << result[i] << "\n";
//    }
//    return 0;
//}