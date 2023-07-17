//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Pair { 
//	string key;
//	int value;
//public:
//    Pair(string ks, int vs) {
//        key = ks;
//        value = vs;
//    }
//
//	Pair(string ks) {
//		key = ks;
//		value = 0;
//	}
//    void addKey(string ks) {
//        key = ks;
//    }
//
//	void addValue(int vs) {
//		value = vs;
//	}
//
//	string getKey()const {
//		return key;
//	}
//
//	int getValue()const {
//		return value;
//	}
//
//	void show()const {
//		cout << key << " " << value << "\n";
//	}
//
//
//};
//
//void merge(vector<Pair>& array, int const left, int const mid,
//    int const right)
//{
//    auto const subArrayOne = mid - left + 1;
//    auto const subArrayTwo = right - mid;
//
//    // Create temp arrays
//    auto* leftArray = new int[subArrayOne],
//        * rightArray = new int[subArrayTwo];
//    
//    string* leftArrayString = new string[subArrayOne],
//        * rightArrayString = new string[subArrayTwo];
//    // Copy data to temp arrays leftArray[] and rightArray[]
//    for (auto i = 0; i < subArrayOne; i++) {
//        leftArray[i] = array[left + i].getValue();
//        leftArrayString[i] = array[left + i].getKey();
//    }
//    for (auto j = 0; j < subArrayTwo; j++) {
//        rightArray[j] = array[mid + 1 + j].getValue();
//        rightArrayString[j] = array[mid + 1 + j].getKey();
//    }
//
//    auto indexOfSubArrayOne
//        = 0, // Initial index of first sub-array
//        indexOfSubArrayTwo
//        = 0; // Initial index of second sub-array
//    int indexOfMergedArray
//        = left; // Initial index of merged array
//
//    // Merge the temp arrays back into array[left..right]
//    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
//        if (leftArray[indexOfSubArrayOne] > rightArray[indexOfSubArrayTwo]) {
//            array[indexOfMergedArray].addValue(leftArray[indexOfSubArrayOne]);
//            array[indexOfMergedArray].addKey(leftArrayString[indexOfSubArrayOne]);
//            indexOfSubArrayOne++;
//        }
//        else  if (leftArray[indexOfSubArrayOne] <rightArray[indexOfSubArrayTwo]) {
//            array[indexOfMergedArray].addValue(rightArray[indexOfSubArrayTwo]);
//            array[indexOfMergedArray].addKey(rightArrayString[indexOfSubArrayTwo]);
//           
//            indexOfSubArrayTwo++;
//        }
//        else  if (leftArray[indexOfSubArrayOne] == rightArray[indexOfSubArrayTwo]) {
//            if (leftArrayString[indexOfSubArrayOne] .compare( rightArrayString[indexOfSubArrayTwo])<=0) {
//                array[indexOfMergedArray].addValue(leftArray[indexOfSubArrayOne]);
//                array[indexOfMergedArray].addKey(leftArrayString[indexOfSubArrayOne]);
//                indexOfSubArrayOne++;
//            }
//            else  if (leftArrayString[indexOfSubArrayOne] .compare(rightArrayString[indexOfSubArrayTwo])>0) {
//                array[indexOfMergedArray].addValue(rightArray[indexOfSubArrayTwo]);
//                array[indexOfMergedArray].addKey(rightArrayString[indexOfSubArrayTwo]);
//
//                indexOfSubArrayTwo++;
//            }
//        }
//
//         
//        indexOfMergedArray++;
//    }
//    // Copy the remaining elements of
//    // left[], if there are any
//    while (indexOfSubArrayOne < subArrayOne) {
//        array[indexOfMergedArray].addValue(leftArray[indexOfSubArrayOne]);
//        array[indexOfMergedArray].addKey(leftArrayString[indexOfSubArrayOne]);
//        indexOfSubArrayOne++;
//        indexOfMergedArray++;
//    }
//    // Copy the remaining elements of
//    // right[], if there are any
//    while (indexOfSubArrayTwo < subArrayTwo) {
//        array[indexOfMergedArray].addValue(rightArray[indexOfSubArrayTwo]);
//        array[indexOfMergedArray].addKey(rightArrayString[indexOfSubArrayTwo]);
//        indexOfSubArrayTwo++;
//        indexOfMergedArray++;
//    }
//    delete[] leftArray;
//    delete[] rightArray;
//    delete[] leftArrayString;
//    delete[] rightArrayString;
//}
//
//// begin is for left index and end is
//// right index of the sub-array
//// of arr to be sorted */
//void mergeSort(vector<Pair>& array, int const begin, int const end)
//{
//    if (begin >= end)
//        return; // Returns recursively
//
//    auto mid = begin + (end - begin) / 2;
//    mergeSort(array, begin, mid);
//    mergeSort(array, mid + 1, end);
//   
//    merge(array, begin, mid, end);
//}
//
//
//
//
//
//int main() {
//	int n;
//	cin >> n;
//    vector<Pair> people;
//    /*vector<Pair> people = { *new Pair("Ivan",10),
//                            *new Pair("Ani",20),
//                            *new Pair("Yavor",20),
//                            *new Pair("Joro",100),
//                            *new Pair("Boris",20)};*/
//	for (int i = 0; i < n * 2; i++) {
//		if (i <= n - 1) {
//			string name;
//			cin >> name;
//			people.push_back(*new Pair(name));
//		}
//		else {
//			int mark;
//			cin >> mark;
//			people[i - n].addValue(mark);
//		}
//	}
//    
//
//  mergeSort(people, 0, n - 1);
//	for (int i = 0; i < n; i++) {
//		people[i].show();
//	}
//
//
//	return 0;
//}