#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b; //matrix size a,b
    int arr[100][100];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> arr[i][j];
        }
    }
    int x;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> x;
            arr[i][j] += x;
        }
    }

    for(int i=0;i< a; i++){
        for(int j=0; j<b; j++){
            cout << arr[i][j]<<" ";
        }
        cout << "\n";
    }
}