#include <stdio.h>
#include <stdlib.h>

// 두 수의 합을 출력
int main(int argc, char* argv[]){
    int sum = 0;
    for(int i=1;i<argc;i++){
        sum += atoi(argv[i]);
    }
    printf("%d", sum);
}