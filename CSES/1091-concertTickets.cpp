#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
//#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    ll h, t, atual;
    multiset<ll> ticketPrices;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++){
        cin >> atual;
        ticketPrices.insert(atual);
    }

    for (int i = 0; i < m; i++){
        cin >> atual;
        auto up = ticketPrices.upper_bound(atual);
        if (up == ticketPrices.begin()){
            cout << -1 << "\n";
        } else {
            up--;
            cout << *(up) << "\n";
        ticketPrices.erase(up);
        }
    }

    return 0;
}