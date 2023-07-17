//#include <iostream>
//
//using namespace std;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	int n;
//	cin >> n;
//	const int num = n;
//	int* arr = new int[n];
//	int* red = new int[n];
//	int* black = new int[n];
//	int red_n = 0, black_n = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		if (arr[i] % 2 == 0) {
//			red[red_n] = arr[i];
//			red_n++;
//		}
//		else {
//			black[black_n] = arr[i];
//			black_n++;
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (i < red_n) {
//			cout << red[i] << "\n";
//		}
//		else {
//			cout << black[i - red_n]<< "\n";
//		}
//	}
//	delete[] arr;
//	delete[] red;
//	delete[] black;
//	return 0;
//}
