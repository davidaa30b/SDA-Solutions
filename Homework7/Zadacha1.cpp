//#include<iostream>
//#include<bitset>
//#include<set>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int value = 0;
//	set<int> masks;
//	for (int i = 0; i < n; i++) {
//		cin >> value;
//		for (int j = 0; j <= value; j++) {
//			if ((value | j) == value) {
//				masks.insert(j);
//			}
//		}
//	}
//	cout << masks.size();
//	/*cout << (6 | 0) << endl;
//	cout << (6 | 1) << endl;*/
//	return 0;
//}