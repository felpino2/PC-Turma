#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; 
    ll n;
    ll total = 0;
    ll somaDez = 1;

    
    cin >> t;

    while (t--){
        cin >> n;
        total = 0;
        somaDez = 1;


        while (somaDez <= n){
            for (int i = 1; i < 10; i++){
                
                    if (i*somaDez <= n) {
                    total++;
                    }
                
            }
            somaDez = somaDez*10 +1;
        }

        cout << total << "\n";
    }
    return 0;
}