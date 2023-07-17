//#include<iostream>
//#include<vector>
//#include<queue>
//#include <tuple>
//
//using namespace std;
//
//struct Tripple {
//    int beginTime;
//    int lenghtTime;
//    int index;
//
//    Tripple(int beginTime, int lenghtTime, int index) {
//        this->beginTime = beginTime;
//        this->lenghtTime = lenghtTime;
//        this->index = index;
//    }
//};
//
//struct CompareByBeginAndLenght {
//
//    bool operator() (const Tripple& banicaFirst, const  Tripple& banicaSecond)  const {
//        if (banicaFirst.beginTime == banicaSecond.beginTime)
//            return banicaFirst.lenghtTime > banicaSecond.lenghtTime;
//
//        return banicaFirst.beginTime > banicaSecond.beginTime;
//        //return std::tie(banicaFirst.beginTime, banicaFirst.lenghtTime) > std::tie(banicaSecond.beginTime, banicaSecond.lenghtTime);
//    }
//};
//
//struct CompareByLenghtAndIndex {
//
//    bool operator() (const Tripple& banicaFirst, const  Tripple& banicaSecond)  const {
//        if (banicaFirst.lenghtTime == banicaSecond.lenghtTime)
//            return banicaFirst.index > banicaSecond.index;
//
//        return banicaFirst.lenghtTime > banicaSecond.lenghtTime;
//        //return std::tie(banicaFirst.beginTime, banicaFirst.lenghtTime) > std::tie(banicaSecond.beginTime, banicaSecond.lenghtTime);
//    }
//};
//
//priority_queue < Tripple, vector<Tripple>, CompareByBeginAndLenght > banici;
//priority_queue < Tripple, vector<Tripple>, CompareByLenghtAndIndex > curRange;
//
//int N, timeIndex = 0,popCounter=N;
//
//void bakeAndMake() {
//    if (!banici.empty()) {
//        if (timeIndex < banici.top().beginTime) {
//
//            if (!curRange.empty()) {
//                timeIndex += curRange.top().lenghtTime;
//                cout << curRange.top().index << " ";
//                curRange.pop();
//                
//                bakeAndMake();
//                
//            }
//            else {
//
//                timeIndex = banici.top().beginTime + banici.top().lenghtTime;
//                cout  << banici.top().index << " " ;
//                banici.pop();
//                bakeAndMake();
//            }
//        }
//        else {
//            while (timeIndex >= banici.top().beginTime) {
//                curRange.push(banici.top());
//                banici.pop();
//                if (banici.empty()) {
//                    break;
//                }
//            }
//
//            if (!curRange.empty()) {
//                timeIndex += curRange.top().lenghtTime;
//                cout << curRange.top().index << " ";
//                curRange.pop();
//
//                bakeAndMake();
//                
//               
//            }
//            else if(curRange.empty() && banici.empty()) {
//                return;
//            }
//
//        }
//    }
//    else {
//        if (!curRange.empty()) {
//            timeIndex += curRange.top().lenghtTime;
//            cout  << curRange.top().index << " ";
//            curRange.pop();
//            bakeAndMake();
//        }
//        else {
//            return;
//        }
//    }
//}
//
//int main() {
//
//    cin >> N;
//    int beingTime, lenghtTime;
//    for (int i = 0; i < N; i++) {
//        cin >> beingTime >> lenghtTime;
//        banici.push(*new Tripple(beingTime, lenghtTime, i));
//    }
//   
//    bakeAndMake();
//  
//    return 0;
//}