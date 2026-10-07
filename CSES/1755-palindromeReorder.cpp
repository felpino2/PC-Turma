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

    map<char, int> cnt;
    string a;
    int impar = 0;
    char itImpar;

    cin >> a;
    for (int i = 0; i < a.size(); i++){
        cnt[a[i]]++;    
    }

    for (auto p : cnt){
        // p.first char
        // p.second int
        if (a.size()%2 == 0 && p.second%2 != 0){
            cout << "NO SOLUTION";
            return 0;
        } else {
            if (p.second%2 !=0){
                impar++;
                itImpar = p.first;
                if (impar > 1){
                    cout << "NO SOLUTION";
                    return 0;
                }
            }
        }
    }
    string b(a.size(), ' ');
    int counterForward = 0;
    int counterBackwards = size(a)-1;
    for (auto p : cnt){
        if (p.first == itImpar){
            b[a.size()/2] = itImpar;
            p.second--;
        }
        while (p.second != 0){
            b[counterForward] = p.first;
            p.second--;
            counterForward++;
            b[counterBackwards] = p.first;
            p.second--;
            counterBackwards--;
        }
        
    }

    cout << b << " ";


    return 0;
}