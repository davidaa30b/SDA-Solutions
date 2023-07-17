//
//#include<vector>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int count=0;
//	cin >> count;
//	vector<vector<char>> allLists;
//	for (int i = 0; i < count; i++) {
//		vector<char> list;
//		int length=0;
//		cin >> length;
//		for (int j = 0; j < length; j++) {
//			char letter='/0';
//			cin >> letter;
//			list.push_back(letter);
//		}
//		allLists.push_back(list);
//	}
//
//	
//	for (int i = 0; i < count; i++) {
//		vector<char> list = allLists[i];
//		int duplicate = 0;
//
//		for (int j = 0; j < list.size() - 1; j++) {
//			if (list[j] == list[j + 1]) {
//				duplicate++;
//			}
//		}
//		cout << duplicate;
//		cout << endl;
//	}
//
//	
//}
