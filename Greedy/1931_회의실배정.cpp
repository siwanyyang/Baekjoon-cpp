#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector < pair<int,int> > time(n);
    for(int i=0; i<n; i++){
        cin >> time[i].second >> time[i].first;
    }

    sort(time.begin(),time.end());

    int s_time=0, cnt=0;
    for(int i=0; i<n ;i++){
        if(s_time<=time[i].second){
            s_time = time[i].first;
            cnt++;
        }
    }

    cout << cnt;
}
