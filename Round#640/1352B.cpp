#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        int j, k;
        cin >> j >> k;
        if (k > j) {
            cout << "NO" << endl;
        } else {
            if (j % 2 == 0) {
                int diff = j / 2;
                if (diff >= k) {
                    cout << "YES" << endl;
                    for (int i = 0; i < k; i++) {
                        if (i == k - 1) {
                            cout << (diff - k + 1) * 2 << endl;;
                        } else {
                            cout << 2 << " ";
                        }
                    }
                } else if (k % 2 == 0) {
                    cout << "YES" << endl;
                    for (int i = 0; i < k; i++) {
                        if (i == k-1) {
                            cout << j - k + 1 << endl;
                        } else {
                            cout << 1 << " ";
                        }
                    }
                } else {
                    cout << "NO" << endl;
                }
            } else {
                if (k % 2 != 1) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                    for (int i = 0; i < k; i++) {
                        if (i == k-1) {
                            cout << j - k + 1 << endl;
                        } else {
                            cout << 1 << " ";
                        }
                    }
                }
            }
        }
        
    }
    
}