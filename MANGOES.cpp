#include <bits/stdc++.h>
using namespace std;
// INSTA PIC NOICEE RAAA 
// 1 DAY 2 GO TO VENKEY

int main() {
    int t; cin >> t;
    while(t--) {
        int x,y,z; cin >> x >> y >> z;
        int cnt=0, l=0;
        while(l<=z) {
            cnt++;
            l=(cnt*x)+y;
        }
        cnt=cnt-1;
        cout << cnt << "\n";
    }
    return 0;
}
