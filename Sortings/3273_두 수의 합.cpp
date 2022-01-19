#include <bits/stdc++.h>
using namespace std;
int tmp[2000001];
int arr[1000001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,sum=0,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> x;

    for(int i=0; i<n; i++){
     if(x-arr[i]>0 && tmp[x-arr[i]]==1) sum++;
     else tmp[arr[i]]= 1;
    }
    cout << sum;
}