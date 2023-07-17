//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	int n, t;
//	cin >> n >> t;
//	vector<int> devs;
//	int average = 0;
//	for (int i = 0; i < n; i++) {
//		int val;
//		cin >> val;
//		average += val;
//		devs.push_back(val);
//	}
//	round up average
//	int leftover = average % t;
//	double lefted = leftover;
//	double killer = t;
//	/*cout << "leftover=" << lefted << endl;
//	cout << "leftover/t=" << lefted / t << endl;*/
//	if(lefted /t>=0.5)
//	average = average / t + 1;
//	else
//	average = average / t ;
//	 end of round up average
//
//	cout << average << endl;
//	sort(devs.begin(), devs.end());
//
//	int sum = 0;
//	int temp = n;
//	int index = 0;
//	int Diff= abs(average - (devs[temp - 1] + devs[temp-2]));
//	int max = devs[temp - 1];
//	int minForDiff = 1000000;
//	bool key = false;
//	for (int i = temp - 3; i >= 0; i--) {
//		int currentDiff = abs(average - ( max+ devs[i]));
//		if (minForDiff > currentDiff)
//			minForDiff = currentDiff;
//		cout << "->" << average << " " << max << " " << devs[i] << ", optimalDiff=" << Diff << " , currentDiff=" << currentDiff << " , min" << minForDiff << endl;
//		if (Diff >= currentDiff) {
//				
//				Diff = currentDiff;
//				index = i;
//
//				
//			}
//		
//
//			 if (Diff < currentDiff) {
//				 
//				 
//				max = max + devs[index];
//				if(currentDiff<=minForDiff)
//				max += devs[i];
//				
//
//				}
//
//	}
//	/*cout << "vals" << endl;
//	cout << devs[index] << endl;
//	for (int i = index-1; i >= 0; i--) {
//		int currentDiff = abs(average - (max + devs[i]));
//		cout << average << " " << max << " " << devs[i] << ", optimalDiff=" << optimalDiff << " , currentDiff=" << currentDiff << endl;
//
//		if (optimalDiff >= currentDiff) {
//
//			optimalDiff = currentDiff;
//			
//		}
//
//		if (optimalDiff < currentDiff) {
//			cout << devs[i] << endl;
//			max = max+ devs[i];
//		}
//	}*/
//	cout << devs[index] << endl;
//	sum += devs[temp - 1] + devs[index];
//	cout << max << endl;
//	
//	return 0;
//}