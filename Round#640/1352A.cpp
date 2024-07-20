#include <bits/stdc++.h>

using namespace std;
  
int main() {
    int n;
    cin >> n;
    while (n--) {
        int sum;
        cin >> sum;
        vector<int> retval;
        int k = 1;
        while (sum > 0) {
            if (sum % 10 != 0) {
                int roundNum = k * (sum % 10);
                retval.push_back(roundNum);
                sum -= sum % 10;
            } else {
                sum /= 10;
                k *= 10;
            }
        }
        
        cout << retval.size() << endl;
        for (auto i : retval) {
            if (i == retval.back()) {
                cout << i << endl;
            } else {
                cout << i << " ";
            }
        }
        
    }
    
}