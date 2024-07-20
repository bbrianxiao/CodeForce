#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    while (n--) {
        int sz;
        cin >> sz;
        vector<int> arr;
        while (sz--) {
            int j;
            cin >> j;
            arr.push_back(j);
        }
        unordered_set<int> s;
        for (int i = 0; i < arr.size() - 1; i++) {
            int sum = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                sum += arr[j];
                if (sum > arr.size()) break;
                s.insert(sum);
            }
        }
        
        int count = 0;
        for (auto i : arr) {
            if (s.find(i) != s.end()) {
                count++;
            }
        }
        cout << count << endl;
        
    }
    
}


