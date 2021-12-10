#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector <int> arr(n);
    for(int i=0; i<n;i++){
        cin >> arr.at(i);
    }
    int cnt = 0;
    for(int i=0; i<n;i++){
         while(k>=arr.at(n-i-1)){
                k-= arr.at(n-i-1);
                cnt++;
        }
    }
    cout << cnt;
}