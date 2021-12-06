#include <iostream>
#include <cmath>
using namespace std;

int main(){
int m,x;
int number=0,min=10000;
cin >> m >> x;
for(int i=m; i<=x; i++){
  if(sqrt(i)/1.00==(int)sqrt(i)){
    number+=i;
    if(i<min) min=i;
  }
}
if(number==0) cout<<-1;
else cout<<number<<"\n"<<min;
}