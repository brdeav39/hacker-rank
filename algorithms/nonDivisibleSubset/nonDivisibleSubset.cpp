#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size; cin >> size;
    int K; cin >> K;
    vector<int> numbers;
    int countRem[K] = {};
    for(int i = 0; i < size; i++) {
        int newNum; cin >> newNum;
        numbers.push_back(newNum);
        int newNumRem = newNum % K;
        //cout << "The remainder of the number is: " << newNumRem << endl;
        countRem[newNumRem]++;
        //cout << "Incrementing the count of that remainder...The count is now: " << countRem[newNumRem] << endl;
    }
    if(countRem[0] != 0)
        countRem[0] = 1;
    int setCount = countRem[0];     //special case -> remainder is 0
    if(K % 2 == 0 && countRem[K/2] != 0) {        //special case -> K is even
        countRem[K/2] = 1;
        //cout << "K is even. Therefore the countRem[K/2] = " << countRem[K/2] << endl;
    }
    for(int j = 1; j <= K/2; j++) {
        setCount = setCount + max(countRem[j], countRem[K-j]);
        //cout << "The remainder of " << j << " appears " << countRem[j] << " times.";
        //cout << "The remainder of " << K-j << " appears " << countRem[K-j] << " times.";
    }

    cout << setCount << endl;
    return 0;
}

