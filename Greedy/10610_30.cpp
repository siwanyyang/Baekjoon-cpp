#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool compare(int i, int j){
    return j<i;
}
int main(){
    string n;
    cin >> n;
    int sum=0;
    bool Zero=false;
    for(int i=0; i<n.size();i++){
        sum+= (n[i]-'0');
        if(!(n[i]-'0')) Zero=true;
    }

    if( sum%3 || !Zero){
        cout << -1;
    }
    else{
        sort(n.begin(),n.end(),compare);
        cout << n;
    }
}
