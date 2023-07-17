#include<iostream> 
#include <vector>
#include<queue>

using namespace std;



int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int const N = 1000001;
	long long n;
	cin >> n;

	long long* roots = new  long long[N] {};
	long long* leftIndexes = new long long[N] {};
	long long* rightIndexes = new long long[N] {};
	long long* coordinatesX = new long long [N] {};
	
	for (long long i = 0; i < n; i++) {
		cin >> roots[i] >> leftIndexes[i] >> rightIndexes[i];
	}

	//coordinatesX[0] = 0;
	long long minCooridinateX = 0,maxCoordinateX=0;
	for (long long i = 0; i < n; i++) {
		if (leftIndexes[i] != -1) {
			coordinatesX[leftIndexes[i]] = coordinatesX[i] - 1;
			if (minCooridinateX > coordinatesX[leftIndexes[i]]) {
				minCooridinateX = coordinatesX[leftIndexes[i]];
			}
		}

		if (rightIndexes[i] != -1) {
			coordinatesX[rightIndexes[i]] = coordinatesX[i] + 1;
			if (maxCoordinateX < coordinatesX[rightIndexes[i]]) {
				maxCoordinateX = coordinatesX[rightIndexes[i]];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << roots[i] << " has a coordinate of " << coordinatesX[i] << endl;
	}
	cout << endl;

	cout <<"Max cor: " << maxCoordinateX << ", Min cor : " << minCooridinateX << endl;

	long long countOfSums = maxCoordinateX+abs(minCooridinateX) + 1;
	long long* arrayOfSums = new long long[countOfSums] {};

	for (long long i = 0; i < n; i++) {
		arrayOfSums[coordinatesX[i] + abs(minCooridinateX)] += roots[i];
	}
	
	for (long long i = 0; i < countOfSums; i++) {
		cout << arrayOfSums[i] << " ";
	}

	delete[] roots;
	delete[] leftIndexes;
	delete[] rightIndexes;
	delete[] coordinatesX;
	delete[] arrayOfSums;
	return 0;

}