#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num[26]={0};
    string s;
    cin >> s;
    for(auto c : s){
        num[c-'a']++;
    }
    for(int i=0; i<26; i++) cout << num[i]<<" ";
}