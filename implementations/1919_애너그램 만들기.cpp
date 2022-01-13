#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a , b;
    cin >> a >> b;
    int x[26]={0}, y[26]={0};
    int num=0;
    for(auto c : a){
        x[c-'a']++;
    }
    for(auto c : b){
        y[c-'a']++;
    }
    for(int i=0; i<26; i++){
        num += abs(x[i]-y[i]);
    }
    cout << num;
}