#include <iostream>
#define N 10001

using namespace std;

int self(int i){
 int index=i;
 while(i>0){
   index+=i%10;
   i/=10;
 }
 //cout<< index<<"\n";
return index;
}

int main(){
  int arr[N]={false};

  for(int i=1; i<N;i++){
    if(self(i) < N) arr[self(i)] = true;
  }

  for(int i=1; i<N;i++){
    if(arr[i]!=true) cout<<i<<"\n";
  }
}