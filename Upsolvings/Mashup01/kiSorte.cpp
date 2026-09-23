#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
typedef long long ll;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll A, B, C; 
    cin >> A >> B >> C;
    ll maior = 100000000;
    ll soma = -11111111111;
    ll save = 0;
    ll xA = 0, xB = 0, xC = 0;

    for (int i = 1; i < 100; i++){
        xA = 0, xB = 0, xC = 0;
        soma = 0;
        if (i < A){
            xA = A-i;
        } else {
            xA = i-A;
        }
        if (i < B){
            xB = B-i;
        } else {
            xB = i-B;
        }
        if (i < C){
            xC = C-i;
        } else {
            xC = i-C;
        }
        xB = xB * xB;
        xC = xC * xC * xC;
        //cout << "i: " << i << " xA: " << xA << " xB: " << xB << " xC: " << xC << "\n";
        soma = xA + xB + xC;
        if (soma < maior){
            maior = soma;
            save = i;
        }
    }

    cout << save << "\n";



    return 0;
}