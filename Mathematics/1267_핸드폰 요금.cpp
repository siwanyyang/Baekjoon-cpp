#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,y=0,m=0;
    cin >> n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        y+= 10 * (x/30 + 1);
        m+= 15 * (x/60 + 1);
    }

    if(y<m) cout <<"Y "<<y;
    else if(y==m) cout << "Y M "<<y;
    else cout <<"M " << m;
}