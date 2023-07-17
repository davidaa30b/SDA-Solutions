//#include<iostream>
//
//#include<queue>
//#include<set>
//
//using namespace std;
//
//int main() {
//	size_t q;
//	cin >> q;
//	size_t n;
//	size_t candy;
//	for (size_t i = 0; i < q; i++) {
//		cin >> n;
//		size_t maxCountCandy=0;
//		queue<size_t>box;
//		set<size_t>assemblyLine;
//		for (size_t k = 0; k < n; k++) {
//			cin >> candy;
//			
//			if (assemblyLine.count(candy)) {
//				if (box.size() > maxCountCandy) {
//					maxCountCandy = box.size();
//				}//
//				/*cout << "to erase: " <<endl;*/
//				while (box.front() != candy) {
//					//cout << box.front() << " ";
//					assemblyLine.erase(box.front());
//					box.pop(); 
//				}
//				//cout << box.front() << " ";
//				assemblyLine.erase(box.front());
//				box.pop();
//				//
//				//cout << endl;
//			}
//
//
//			box.push(candy);
//			assemblyLine.insert(candy);
//			/*cout << "show box content" << endl;*/
//
//			/*queue<size_t> display = box;
//
//			while (!display.empty()) {
//				cout << display.front() << " ";
//				display.pop();
//			}*/
//			/*cout << endl;
//
//			cout << "-----------" << endl;
//			cout << endl;*/
//		}
//
//		if (box.size() > maxCountCandy) {
//			maxCountCandy = box.size();
//		}
//		cout << maxCountCandy << "\n";
//		//cout << endl;
//		//cout << "show elements in box:" << endl;
//
//		///*queue<size_t> display = box;
//
//		//while (!display.empty()) {
//		//	cout << display.front() << " ";
//		//	display.pop();
//		//}
//
//		//cout << endl;*/
//	}
//
//	return 0;
//}