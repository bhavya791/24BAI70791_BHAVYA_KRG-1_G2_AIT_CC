#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(n == 2) {
            cout << -1 << endl;
            continue;
        }

        int total = n * n;

        int num = 1;
        int count = 0;

        for(int i = 0; i < total; i++) {
            if(num > total) break;
            cout << num << " ";
            num += 2;
            count++;

            if(count % n == 0) cout << endl;
        }

        num = 2;
        for(int i = count; i < total; i++) {
            cout << num << " ";
            num += 2;

            if((i + 1) % n == 0) cout << endl;
        }
    }

    return 0;
}
