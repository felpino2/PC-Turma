#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int n;
    int s;

    cin >> t;
    while (t--){
        cin >> n;
        vector<int> v(n);
        int i = 0;
        int a = n;
        while (a--){
            cin >> v[i]; 
            i++;
        }
        sort(all(v));
        int menor = 5000;
        for (int i = 0; i < n-1; i++){
            if (v[i+1]-v[i] < menor){
                menor = v[i+1]-v[i];
            }
        }
        cout << menor << "\n";
    }

    return 0;
}