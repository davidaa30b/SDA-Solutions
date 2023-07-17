//#include<iostream>
//#include<cmath>
//#include<algorithm>
//
//using namespace std;
//
//unsigned long long ternarySearch(unsigned long long target, unsigned long long start, unsigned long long end, unsigned long long count)
//{
//    if (end <= start) {
//        return count;
//    }
//
//    unsigned long long mid1 = start + (end - start) / 3;
//    unsigned long long mid2 = end - (end - start) / 3;
//
//
//    if (target <= mid1  ) {
//        return ternarySearch(target, start, mid1,  count + 1);
//    }
//
//    else if (target >= mid2  ) {
//        return ternarySearch(target, mid2, end,  count + 1);
//    }
//    else if (target < mid2 && target > mid1) {
//        return count;
//    }
//    else if (target == start || target == end)
//        return count + 1;
//
//    return count;
//}
//
//int main() {
//
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//
//    unsigned long long n, person, p;
//
//    cin >> p >> n;
//
//    unsigned long long people_count = pow(3, p);
//
//    for (unsigned long long i = 0; i < n; ++i) {
//        cin >> person;
//        cout << ternarySearch(person, 1, people_count ,  1) << '\n';
//    }
//
//
//    return 0;
//}