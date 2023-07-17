#include<vector>
#include <iostream>
using namespace std;

int main() {
	int tickets = 0,max=0;
	cin >> tickets;
	long long* arr = new long long[tickets]{};

	for (int i = 0; i < tickets; i++) {
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		
	}

	bool * checkArr = new bool[max+2]{};

	for (int i = 0; i < tickets; i++) {
		if(arr[i]>0){
			checkArr[arr[i]] = true;
		}
	}



	for (int i = 1; i <= max+1; i++) {
		if (checkArr[i] == false) {
			cout << i << endl;
			break;
		}
	}

	delete[] arr;
	delete[] checkArr;
	return 0;
}