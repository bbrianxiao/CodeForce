#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        int i;
        cin >> i;
        vector<int> candies;
        while (i--) {
            int j;
            cin >> j;
            candies.push_back(j);
        }
        
        int numMoves = 1, a = 0, b = 0;
        int aIndex = 1;
        int bIndex = candies.size() - 1;
        int lastAte = candies[0];
        a += candies[0];
        bool isA = false;
        
        int currAte = 0;
        while (aIndex <= bIndex) {
            if (!isA) {
                currAte += candies[bIndex--];
            }
            if (isA) {
                currAte += candies[aIndex++];
            }
            if (currAte > lastAte) {
                lastAte = currAte;
                if (isA) {
                    a += currAte;
                } else {
                    b += currAte;
                }
                currAte = 0;
                numMoves++;
                isA = !isA;
            }
        }
        
        if (isA) {
            a += currAte;
        } else {
            b += currAte;
        }
        
        if (currAte != 0) {
            numMoves++;
        }
        
        cout << numMoves << " " << a << " " << b << endl;
        
    }
    
}