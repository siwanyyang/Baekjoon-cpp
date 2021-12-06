#include <iostream>

using namespace std;

int main(){
    int num;
    int n,m,a,b,cnt;
    /*cnt = 정수의 개수 */
    cin >> num; //num 값 입력받기
    while(num){ //num 만큼 반복
        cnt = 0;
        num--;
        cin >> n >> m;
        for(a = 1; a < n; a++){
            for(b = a + 1; b < n; b++){
                if(((a*a+b*b+m)%(a*b))==0){ //나머지가 0이면 정수임
                    cnt++;
                }
            }
        }
        cout << cnt<<"\n";
    }
}