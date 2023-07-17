//
//#include<vector>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int days = 0;
//	cin >> days;
//	int arr[100000],minIndex=0,balance=0;
//	for (int i = 0; i < days; i++) {
//		cin >> arr[i];
//		
//	}
//
//	for (int i = minIndex; i < days; i++) {
//		int min = 100000;
//		for (int j = i; j < days; j++) {
//			if (min >= arr[i]) {
//				min = arr[i];
//				minIndex = i;
//			}
//		}
//		if (arr[i] < arr[i + 1]) {
//			balance += arr[i + 1] - min;
//		}
//	}
//
//	cout << balance << endl;
//
//	return 0;
//}
