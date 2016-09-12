#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numQuery; cin >> numQuery;
    for(int i = 0; i < numQuery; i++) {
        int greatestLength = 0;
        int numStrings; cin >> numStrings;
        vector<string> strings;
        for(int j = 0; j < numStrings; j++) {
            string newString; cin >> newString;
            strings.push_back(newString);
        }
        
        for(int i = 0; i < strings.size(); i++) {
            for(int j = i + 1; j < strings.size(); j++) {
				
				if(strlen(strings[i]) <= strlen(strings[j])) {
					if(distance(strings[i], mismatch(strings[i], strings[i]+strlen(strings[i]), string[j]).first) > greatestLength)
						greatestLength = distance(strings[i], mismatch(strings[i], strings[i]+strlen(strings[i]), string[j]).first);
				}
				else {
					if(distance(strings[j], mismatch(strings[j], strings[j]+strlen(strings[j]), string[i]).first) > greatestLength)
						greatestLength = distance(strings[j], mismatch(strings[j], strings[j]+strlen(strings[j]), string[i]).first);
				}
				
						
				/*	
                int k = 0;
                while((k < min(strings[i].length(), strings[j].length())) && (strings[i][k] == strings[j][k])) {
                    k++;
                }
                if(k > greatestLength)
                    greatestLength = k;
				*/
            }
        }
				
				
        cout << greatestLength << endl;
    }
    return 0;
}