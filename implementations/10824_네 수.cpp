#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b,c,d;
    cin >> a >> b>> c>> d;
    a+=b;
    c+=d;
    cout << stol(a) + stol(c);

}