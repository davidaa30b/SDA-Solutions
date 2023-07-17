//#include<iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//vector< map<size_t, size_t>> underFields;
//size_t N, K, A, strike, numberOfStrikes,answer=0;
//
//
//bool getNumRemShips() {
//	size_t remShips = 0;
//	for (size_t i = 0; i < underFields.size(); i++) {
//		remShips += (underFields[i].size() + 1) / (A + 1);
//	}
//	//cout << endl;
//	//cout << remShips << "<" << K << endl;
//	//cout << endl;
//
//	return remShips < K;
//}
//
//int main() {
//
//	cin >> N;
//	cin >> K >> A;
//	map<size_t, size_t> battleFiled;
//
//	for(size_t i=1;i<=N;i++) {
//	 battleFiled[i]=0;
//	}
//
//	map<size_t, size_t> underFiled1, underFiled2;
//
//	cin >> numberOfStrikes;
//
//	size_t* strikes = new size_t[numberOfStrikes]{};
//	for (size_t i = 0; i < numberOfStrikes; i++) {
//		cin >> strikes[i];
//	}
//
//	for (size_t i = 1; i <= numberOfStrikes; i++) {
//
//		strike = strikes[i - 1];
//		battleFiled[strike]=1;
//		
//		auto stirkedIt = battleFiled.find(strike);
//
//		if (underFields.empty()) {
//
//			underFiled1.insert(battleFiled.begin(), stirkedIt);
//			stirkedIt++;
//			underFiled2.insert(stirkedIt, battleFiled.end());
//
//			if (underFiled1.size() != 0) {
//				underFields.push_back(underFiled1);
//			}
//
//			if (underFiled2.size() != 0) {
//				underFields.push_back(underFiled2);
//			}
//
//			if (getNumRemShips()) {
//				answer = i;
//				break;
//			}
//			
//		}
//		else {
//			size_t toDelete = 0;
//			map<size_t, size_t>::iterator until;
//			for (size_t j = 0; j < underFields.size(); j++) {//1
//				auto last = underFields[j].end();
//				last--;
//				if (underFields[j].begin()->first <= strike && last->first >= strike) {
//					underFields[j][strike] = 1;
//					until = underFields[j].find(strike);
//					toDelete = j;
//					break;
//				}
//			}
//
//			map<size_t, size_t> underFiled3;
//			underFiled3.insert(underFields[toDelete].begin(), until);
//			until++;
//			map<size_t, size_t> underFiled4;
//			underFiled4.insert(until, underFields[toDelete].end());
//
//			underFields.erase(underFields.begin()+toDelete);
//			if (underFiled3.size() != 0) {
//				underFields.push_back(underFiled3);
//			}
//
//			if (underFiled4.size() != 0) {
//				underFields.push_back(underFiled4);
//			}
//
//			if (getNumRemShips()) {
//				answer = i;
//				break;
//			}
//		}
//
//	}
//
//	if (answer == 0) {
//		cout << -1;
//	}
//	else {
//		cout << answer;
//	}
//
//	delete[] strikes;
//	return 0;
//
//}
