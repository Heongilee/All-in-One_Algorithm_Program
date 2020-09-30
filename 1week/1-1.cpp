#include <iostream>

using namespace std;
/*  실행 단축키 : 
컴파일 후 실행
컴파일 : Shift + b
실행 : Shift + Enter    
*/
int sol(int i){
    if(i == 1) return 1;
    else return i + sol(i - 1);
}

int main(){
    int N;

    scanf("%d", &N);
    int res = sol(N);

    printf("%d", res);

    return 0;
}