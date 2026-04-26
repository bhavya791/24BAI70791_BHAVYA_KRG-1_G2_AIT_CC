#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int countOnes = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] == 1) countOnes++;
            else break;
        }

        if(countOnes == n) {
            // all are 1
            if(n % 2 == 1) cout << "First\n";
            else cout << "Second\n";
        } else {
            if(countOnes % 2 == 0) cout << "First\n";
            else cout << "Second\n";
        }
    }

    return 0;
}
