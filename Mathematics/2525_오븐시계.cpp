#include <iostream>

using namespace std;

int main(){
    int a,b,c; //시, 분, 시간
    cin >> a >> b >> c;
    if(b+c<60){ //시간 더해도 60이 넘지않으면 그냥 출력
        cout << a<<" "<< b+c<<"\n";
    }
    else{
        a += ((b+c)/60); //시간 더한 값의 몫 + 시
        if(a>23) a-=24; // 23보다 hour이 커지면 24를 빼줌
        cout << a<<" "<< ((b+c)%60)<<"\n";
    }
}