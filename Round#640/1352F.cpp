#include <bits/stdc++.h>

    using namespace std;


    int main() {
        int n;
        cin >> n;
        while (n--) {
            int n0, n1, n2;
            cin >> n0 >> n1 >> n2;
            string retval = "";
            while (n0--) {
                if (retval.empty()) retval += "00";
                else retval += "0";
            }
            for (int i = 0; i < n1; i++) {
                if (retval.empty()) retval += "01";
                else {
                    if (retval.back() == '1') {
                        retval += "0";
                    } else {
                        retval += "1";
                    }
                }
            }
            auto it = retval.find('1');
            if (it == string::npos) {
                for (int i = 0; i < n2; i++) {
                    if (i == 0) retval += "11";
                    else retval += "1";
                }
            } else {
                for (int i = 0; i < n2; i++) {
                    retval.insert(it, "1");
                }
            }
            cout << retval << endl;
        }
        
    }


