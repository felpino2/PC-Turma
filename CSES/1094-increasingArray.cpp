#include <bits/stdc++.h>

using namespace std;

int main (){
    long long iter;
    long long atual, anterior;
    long long moves = 0;

    cin >> iter;

    for (int i = 0; i < iter; i++){
        if (i == 0){
            cin >> anterior;
        } else {
            cin >> atual;
            
            if (anterior > atual){
                moves+= anterior-atual;
                atual = anterior;
            }

            anterior = atual;
        }
    }
    cout << moves;
    
    
    return 0;
}