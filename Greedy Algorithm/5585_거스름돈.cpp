#include <iostream>

using namespace std;

int main(){
    int n,arr[]={500,100,50,10,5,1},cnt=0;
    cin >> n;
    n = 1000 - n;
    for(int v=0; v< 6; v++){
        while(n>=arr[v]) {
            n-=arr[v];
            cnt++;
        }
    }
    cout << cnt;
}