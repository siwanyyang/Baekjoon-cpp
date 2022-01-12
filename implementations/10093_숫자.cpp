#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long x,y;
    cin >> x >> y;
    if(x>y) swap(x,y);
    if(x==y || y-x == 1) cout <<0;
    else{
        cout << y-x-1 <<"\n";
        for(long long i=x+1; i<y; i++) cout << i << " ";
    }
}