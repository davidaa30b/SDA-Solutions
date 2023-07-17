//#include<iostream>
//#include <vector>
//#include<unordered_map>
//#include<map>
//#include<algorithm>
//
//using namespace std;
//
//
//const int p = 10000000;
//const int m = 1e4 + 9;
//int lastCollision = 0;
//
//int compute_hash_int(int const& s) {
//
//    return s % m;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    
//    vector<int> input(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> input[i];
//    }
//
//    unordered_map<int, map<int, int> > int_hash_map;
//    int lenght = 0, maxLenght = 0;
//    for (int i = 0; i < n/**2*/; i++) {
//
//        if (int_hash_map.find(compute_hash_int(input[i])) == int_hash_map.end()) {
//
//            int_hash_map.insert({ compute_hash_int(input[i]),{{input[i],i}} });
//            lenght++;
//            maxLenght = max(maxLenght, lenght);
//           //cout<<i<<".)" << " , lenght : " << lenght << " , maxLenght : " << maxLenght << endl;
//        }
//        else {
//            map<int, int> list = int_hash_map.at(compute_hash_int(input[i]));
//            if (list.count(input[i])) {
//                
//                auto it = list.find(input[i]);
//                if (it->second >= lastCollision) {
//                    int diff = i - it->second;
//                    lenght = diff;
//                    lastCollision = it->second;
//
//                }
//                else {
//                    lenght++;
//                    maxLenght = max(maxLenght, lenght);
//                }
//                it->second = i;
//
//                
//                int_hash_map.at(compute_hash_int(input[i])) = list;
//
//
//                 //cout << i << ".)" << " , lenght : " << lenght << " , maxLenght : " << maxLenght <<" lastCollision : "<<lastCollision<<endl;
//            }
//            else {
//                list.insert({ input[i],i });
//                int_hash_map.at(compute_hash_int(input[i])) = list;
//                lenght++;
//                maxLenght = max(maxLenght, lenght);
//                //  cout << i << ".)" << " , lenght : " << lenght << " , maxLenght : " << maxLenght << endl;
//            }
//
//        }
//
//    }
//
//  /* for (auto it = int_hash_map.begin(); it != int_hash_map.end();it++) {
//        cout << "------------------------------------" << endl;
//        cout << "hash : " << it->first << " list : " << endl;
//        for (auto listIt = it->second.begin(); listIt != it->second.end(); listIt++) {
//            cout << "input : " << listIt->first << " , index : " << listIt->second << endl;
//        }
//        cout << "------------------------------------" << endl;
//        cout << endl;
//    }
//    cout <<"maxLenght : "<< maxLenght << endl;*/
//    cout << maxLenght;
//    return 0;
//}