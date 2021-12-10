#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(int i, int j){
    return j<i;
}

int main(){
    int n;
    cin >>n;
    vector <int> a(n);
    vector <int> b(n);
    for(int i=0; i<a.size();i++) cin >> a.at(i);
    for(int i=0; i<b.size();i++) cin >> b.at(i);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),compare);
    int sum=0;
    for(int i=0; i<n;i++){
        sum += a.at(i)*b.at(i);
    }

    cout <<sum;    
}