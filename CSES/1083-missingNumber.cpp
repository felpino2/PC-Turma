#include <bits/stdc++.h>

using namespace std;

int main (){

    int valr;
    int total = 0;
    int atual = 0;
    int num;

    cin >> valr;

    for (int i = 0; i < valr-1; i++){
        cin >> num;
        atual+= num;
        total += i+1;
    }
    total+=valr;
    cout << total-atual << "\n";

    
    return 0;
}
