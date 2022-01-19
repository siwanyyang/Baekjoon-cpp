#include <bits/stdc++.h>
using namespace std;
int arr[2001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin >> n;
    vector <int> v;
    while(n--){
        cin >> x;
        if(arr[x+1000]==0){
            v.push_back(x);
            arr[x+1000]++;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout << v.at(i)<<" ";
    }
}