//#include<iostream>
//#include<unordered_map>
//#include<set>
//#include<string>
//#include <queue>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	
//	
//	unordered_map<string, set<string>> files;
//
//	string input="";
//	string curDirectory = "/";
//	string newFile = "";
//
//	files[curDirectory];
//
//	deque<string> orderDirectories;
//	//orderDirectories.push_back("*end");
//	orderDirectories.push_back(curDirectory);
//
//	for (int i = 0; i < n; i++) {
//		cin >> input;
//
//		if (input.compare("mkdir") == 0) {
//			cin >> newFile;
//			if (files[curDirectory].count(newFile)) {
//				cout << "Directory already exists\n";
//			}
//			else {
//				files[curDirectory].insert(newFile);
//			}
//		}
//		
//		if (input.compare("cd") == 0) {
//
//			cin >> newFile;
//
//			if (newFile.compare("..")==0) {
//
//				if (orderDirectories.back().compare("/") != 0) {
//					orderDirectories.pop_back();
//					curDirectory = orderDirectories.back();
//				}
//				else {
//					cout << "No such directory\n";
//				}
//				
//			}
//
//			else if(files[curDirectory].count(newFile)) {
//				curDirectory = curDirectory + newFile + "/";
//				files[curDirectory];
//				orderDirectories.push_back(curDirectory);
//			}
//
//			else if (!files[curDirectory].count(newFile)) {
//				cout << "No such directory\n";
//			}
//		}
//
//		if (input.compare("pwd") == 0) {
//			cout << curDirectory<<"\n";
//		}
//
//		if (input.compare("ls") == 0) {
//			for (auto it = files[curDirectory].begin(); it != files[curDirectory].end(); it++) {
//				cout << *it << " ";
//			}
//			cout << "\n";
//		}
//	}
//	return 0;
//}