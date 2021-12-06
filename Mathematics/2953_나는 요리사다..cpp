#include <iostream>

using namespace std;

int main(){
    int a, max=0, index=0;
    for(int i=0; i<5;i++){
        int sum=0;
       for(int j=0; j<4; j++){
           cin >> a;
           sum+=a;
       }
       if(max<sum) {
           index = i;
           max = sum;
       }
    }
    cout << index+1 <<" "<< max;
}

/*나는 요리사다.
1. 5명의 요리사 -> 5반복, 5명의 요리사 각자 4개의 점수 -> 4반복 (이중 반복)
5명의 요리사{
    4번의 점수 다 더함
    점수 더한 후, 최고 점수보다 크면 max값을 해당요리사 점수로 변경
    이 때, index값도 바꿔주기
}
*/