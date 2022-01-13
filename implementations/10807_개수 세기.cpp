#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, v, a[201] = {};
    cin >> n;

    while(n--){
    int t;
    cin >> t;
    a[t+100]++;
    }

    cin >> v;
    cout << a[v+100];
}