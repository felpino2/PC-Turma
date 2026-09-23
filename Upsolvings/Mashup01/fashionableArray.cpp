#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    ll total = 0;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        total = 0;
        vector<int> v(n);
        int i = 0;
        int a = n;
        while (a--){
            cin >> v[i];
            i++;
        }
        sort(all(v));
        if ((v[0]+v[n-1])%2 != 0){
            ll atual = 0;
            for (int i = 1; i < n; i++){
                if ((v[i]+v[n-1])%2 == 0){
                    total = i;
                    break;
                }
            }
            for (int i = n-1; i > 0; i--){
                if ((v[0]+v[i])%2 == 0){
                    //atual++;
                    break;
                }
                atual++;
            }
            if (atual < total){
                total = atual;
            }
        }
        cout << total << "\n";
    }

    return 0;
}