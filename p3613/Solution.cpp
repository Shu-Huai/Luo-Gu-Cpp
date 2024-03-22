#include<bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> a1[100001];
    int n = 0;
    int q = 0;
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a;
        if (a == 1) {
            cin >> b >> c >> d;
            a1[b][c] = d;
        } else {
            cin >> b >> c;
            cout << a1[b][c] << endl;
        }
    }
    return 0;
}