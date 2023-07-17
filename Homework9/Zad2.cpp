//#include<iostream> 
//#include<unordered_map>
//#include<vector>
//#include<set>
//using namespace std;
//
//vector<size_t> input(100000);
//
//
//int main() {
//	//int n = /*8*//*13*/6, m = /*3*/2;
//	int n/*=13*/, m/*=3*/;
//	cin >> n >> m;
//	//vector<int> input{ 1,2,3,1,4,9,3,6,27,12,18,6,24 };
//	//vector<int> input{ 1,3,1,5,6,9,3,9 };
//	//vector<int> input{ 1,2,4,4,8,16};
//	//vector<int> input{1,2,3,1,4,9,3,6,27,12,18,6,24};
//	vector<int> input(n);
//	
//	for (int i = 0; i < n; i++) {
//		cin >> input[i];
//	}
//	
//	int numeberOfTripples = 0;
//
//	unordered_map<int, set<int>> inputMap;
//	unordered_map<int, set<int>> hash_mapM;
//
//
//	for (int i = 0; i < n; i++) {
//
//		
//		inputMap[input[i]].insert(i);
//
//	}
//
//	for (auto it = inputMap.begin(); it != inputMap.end(); it++) {
//
//		set<int> list = inputMap.find(it->first)->second;
//
//		if (inputMap.count(it->first * m) && inputMap.count(it->first * m * m)) {
//
//			set<int> listM = inputMap.find(it->first * m)->second;
//			set<int> listMM = inputMap.find(it->first * m * m)->second;
//
//
//			for (auto itList = list.begin(); itList != list.end(); itList++) {
//
//				for (auto itListM = listM.begin(); itListM != listM.end(); itListM++) {
//					if (*itList < *itListM) {
//						int toDelete = 0;
//						for (auto itListMM = listMM.begin(); itListMM != listMM.end(); itListMM++) {
//							if (*itListM < *itListMM) {
//								numeberOfTripples += listMM.size() - toDelete;
//								break;
//							}
//							else {
//								toDelete++;
//							}
//						}
//					}
//				
//				}
//			}
//		}
//	}
//	/*
//	for (auto it = inputMap.begin(); it != inputMap.end(); it++) {
//
//		if (inputMap.find(it->first*m) != inputMap.end()) {
//			
//			auto found = inputMap.find(it->first*m);
//			
//			set<int> checkList = it->second;
//			set<int> getList = found->second;
//			
//			for (auto itCheckList = checkList.begin(); itCheckList != checkList.end(); itCheckList++) {
//				set<int> putInList= found->second;
//				for (auto itGetList = getList.begin(); itGetList != getList.end(); itGetList++) {
//					if (*itCheckList < *itGetList) {
//						hash_mapM[*itCheckList] = putInList;
//						break;
//						
//					}
//					else {
//						putInList.erase(*itGetList);
//					}
//				}
//			}
//
//		}
//	}
//
//	for (auto it = hash_mapM.begin(); it != hash_mapM.end();it++) {
//		set<int> list = it->second;
//		for (auto listIt = list.begin(); listIt != list.end(); listIt++) {
//		
//			if (inputMap.find(input[*listIt]*m) != inputMap.end()) {
//
//				auto foundThird = hash_mapM.find(*listIt);
//
//				if (foundThird != hash_mapM.end()) {
//					numeberOfTripples += foundThird->second.size();
//				}
//			}
//		}
//	}*/
//
//	cout << numeberOfTripples ;
//	
//	return 0;
//}
