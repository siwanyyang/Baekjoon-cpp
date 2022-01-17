#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string a,b;
    while(n--){
        int N[26]={};
        cin >> a >> b;
        for(auto c : a) N[c-'a']++;
        for(auto c : b) N[c-'a']--;

        bool Possible = true;
        for(int i=0; i<26;i++){
            if(N[i]!=0) {
                Possible = false;
                break;
            }
        }
        if(Possible) cout << "Possible"<<"\n";
        else cout << "Impossible"<<"\n";
    }
}