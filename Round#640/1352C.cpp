#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int i, j;
        cin >> i >> j;
        int numLessThan = i - 1;
        int k = ceil((double) j / (double) numLessThan);
        cout << i * k - 1 - (k * numLessThan - j) << endl;
    }
    
}
 