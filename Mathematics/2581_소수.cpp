#include <iostream>

using namespace std;
bool isPrime(int n){
  if(n==1) return false;
  for(int i=2; i<n; i++){
    if(n%i==0) return false;
  }
  return true;
}
int main(){
 int n1, n2, sum=0, min=0;
 cin >> n1 >> n2;
 do{
   if(n1==n2+1) break;
   if(isPrime(n1)==true) {
     sum+=n1;
     if(min==0) min = n1;
   }
 }while(n1++);
 if(sum!=0) cout<< sum <<"\n"<<min;
 else cout<<-1;
}