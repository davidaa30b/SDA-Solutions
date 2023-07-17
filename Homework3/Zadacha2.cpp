//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Pair {
//    int min;
//    int max;
//public:
//    void setMin(int min) {
//        this->min = min;
//    }
//    void setMax(int max) {
//        this->max = max;
//    }
//    int getMin()const {
//        return min;
//    }
//    int getMax()const {
//        return max;
//    }
//    Pair(int min, int max) {
//        setMin(min);
//        setMax(max);
//    }
//};
//
//int searchInsertLeft(vector<int>  nums, int target, int n, bool& exact) {
//    int mid = 0;
//    int l = 0, r = n - 1;
//
//    while (l <= r) {
//        mid = l + (r - l) / 2;
//
//        if (nums[mid] == target) {
//            exact = true;
//            return mid;
//        }
//
//        else if (nums[mid] > target) {
//            r = mid - 1;
//        }
//
//        else {
//
//            l = mid + 1;
//            if (nums[mid] == 0 && mid != 0) {
//                l--;   break;
//            }
//
//        }
//    }
//
//    return l;
//
//
//}
//
//
//int searchInsertRight(vector<int> nums, int target, int n, bool& exact) {
//    int mid = 0;
//    int l = 0, r = n - 1;
//
//    while (l <= r) {
//
//
//        mid = l + (r - l) / 2;
//
//        if (nums[mid] == target) {
//            exact = true;
//            return mid;
//        }
//
//        else if (nums[mid] > target) {
//
//
//            r = mid - 1;
//
//        }
//
//        else if (nums[mid] < target) {
//            if (nums[mid] == 0 && mid != 0) {
//                r--;   break;
//            }
//
//            l = mid + 1;
//        }
//
//    }
//    return r;
//
//}
//
//int main() {
//    int n, q; 
//    cin >> n;
//    cin >> q;
//    vector<int> students;
//
//    //students.push_back(0);
//    for (int i = 0; i < n; i++) {
//        int val;
//        cin >> val;
//        students.push_back(val);
//    }
//
//    vector<Pair> ranges;
//    for (int i = 0; i < q; i++) {
//        int min, max;
//        cin >> min >> max;
//        ranges.push_back(*new Pair(min, max));
//    }
//
//    sort(students.begin(), students.end());
//   // students.push_back(0);
//
//   /* cout << "Students  " <<  endl;
//    for (int i = 0; i < students.size(); i++)
//        cout << students[i] << " ";
//
//    cout << endl;
//    cout << "Ranges" << endl;
//    for (int i = 0; i < q; i++) {
//        cout << ranges[i].getMin() << " " << ranges[i].getMax() << endl;
//    }*/
//
//
//    for (int i = 0; i < q; i++) {
//         //  bool exactMin = false, exactMax = false;
//         // int minIndex = searchInsertRight(students,ranges[i].getMin(), students.size(), exactMin);
//         // int maxIndex = searchInsertLeft (students, ranges[i].getMax(), students.size(), exactMax);
//         // int number = maxIndex - minIndex + 1;
//
//         //if (exactMin == false)
//         //     number--;
//
//         // if (exactMax == false)
//         //     number--;
//         // if (minIndex > maxIndex)
//         //     cout << 0 << "\n";
//         // else
//         //     cout << number << "\n";
//        vector<int>::iterator firstElement = lower_bound(students.begin(), students.end(), ranges[i].getMin());
//        int minIndex = firstElement - students.begin();
//
//        vector<int>::iterator endElement = upper_bound(students.begin(), students.end(), ranges[i].getMax());
//        int maxIndex = (endElement - students.begin()) - 1;
//
//
//        //cout << minIndex << " " << maxIndex << endl;
//        if (maxIndex < minIndex)
//            cout << 0 << "\n";
//        else
//        cout << maxIndex - minIndex+1 << "\n";
//    }
//    
//    return 0;
//}