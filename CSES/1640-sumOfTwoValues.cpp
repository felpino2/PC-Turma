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
    int n;
    ll target;
    ll atual;
    ll preciso;
    map<ll, ll> positions;
    cin >> n;
    cin >> target;

    for (int i = 0; i < n; i++){
        cin >> atual;
        preciso = target-atual;
        if (positions.count(preciso) > 0){
            cout << positions[preciso] << " " << i+1;
            return 0;
        }
        positions[atual] = i+1;
    }


    return 0;
}