#include <iostream>

using namespace std;
int main(){
 int a,layer=1;
 cin >> a;
 a--;
 while(a>0){
  a = a - 6*layer;
  layer++;
 }
 cout<<layer;
}
