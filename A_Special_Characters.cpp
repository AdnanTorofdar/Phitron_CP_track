#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string ans;
            for (int i = 0; i < n / 2; ++i) {
                ans += "AA";
            }
            if (n % 2 == 1) ans += 'B'; 
            cout << ans << endl;
        }
    }
    return 0;
}
