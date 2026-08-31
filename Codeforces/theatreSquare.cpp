#include <bits/stdc++.h>

using namespace std;

int main (){

    long long m, n, a;

    cin >> m;
    cin >> n;
    cin >> a;

    long long altura = (m + a - 1)/a;
    long long largura = (n + a -1 )/a;
    
    cout << largura*altura;
    
    return 0;
}
