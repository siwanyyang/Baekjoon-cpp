#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n); //declare vector 
    for(int i=0; i<n;i++){ //enter value
        cin >> arr.at(i);
    }

    sort(arr.begin(),arr.end()); //sorting [algorithm]
    int sum=0;
    for(int i=0; i<n;i++){
        int r=0;
        for(int j=0; j<i+1;j++){
            r += arr[j];
        }
        sum+=r;
    }

    cout << sum;
}
