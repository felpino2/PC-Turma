#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
//#define FASTIO ios::sync_with_stdio(false); cin.tie(nullptr)
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

int main(){
    string DNA;
    cin >> DNA;

    ll maior = 0;
    ll atual = 1;
    for (int i = 1; i < DNA.size(); i++){
        if (DNA[i] == DNA[i-1]){
            atual++;
        } else {
            if (maior < atual){
                maior = atual;
            }
            atual = 1;
        }
    }

    cout << maior;


 return 0;
}
