#include <cstdio>
#include <limits>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    long long t;
    cin >> t;
        
    long long exp, total, value = 0;
    while(true) {
        total += 3 * pow(2, exp);
        if(total > t) {
            long long diff = total - t;
            value = 1 + diff;
            break;
        }
        exp++;
    }
    cout << value << endl;
    return 0;
}