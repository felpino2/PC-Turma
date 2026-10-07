#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
//#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

int main(){

    int n;
    vector<int> st;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        while (st.empty() == false) {
            int topo = st.back();

            if (a[topo] >= a[i]){
                st.pop_back();
            } else {
                break;
            }


        } 
        if (st.empty() == true){
            cout << 0 << " ";
        } else {
            int topo = st.back();
            cout << topo+1 << " ";
        }
        st.push_back(i);
    }

 return 0;
}
