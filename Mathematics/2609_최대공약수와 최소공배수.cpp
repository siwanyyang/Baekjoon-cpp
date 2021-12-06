#include <iostream>

using namespace std;
int gcd(int n, int c){
 int a;
 while(1){
  a= n % c;
  if(a==0) break;
  n = c;
  c = a;
 }
 return c;
}
int lcm(int n, int c){
  return n * c / gcd(n,c);
}
int main(){
  int a,b;
  cin >> a >> b;
  if(a>b){ cout << gcd(a,b)<<"\n"<<lcm(a,b);}
  else {cout << gcd(b,a)<<"\n"<<lcm(b,a);}

}