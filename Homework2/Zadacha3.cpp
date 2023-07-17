#include<iostream>
#include<vector>
using namespace std;

int main() {
    string films;
    cin >> films;
    long* check = new long[20000000] {};
    vector<int> indexes;
    for (int i = 0; i < films.size(); i++) {
        //cout << int(films[i]) << endl;
        check[int(films[i])]++;
    }

    for (int i = 0; i < films.size(); i++) {
        if (check[int(films[i])] == 1) {
            cout << i << " ";
        }
    }

    delete[] check;
    return 0;
}