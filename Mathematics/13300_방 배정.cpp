#include <bits/stdc++.h>
using namespace std;
int s[2][7]={}; //gender, grade
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,K,m=0;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        s[a][b]++;
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<7; j++){
            m += s[i][j]/K;
            if(s[i][j]%K) ++m;
        }
    }
    cout << m;
}