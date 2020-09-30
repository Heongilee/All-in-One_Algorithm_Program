#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[100];
    
    fgets(arr, 100, stdin);
    
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] -= 32;
        }
    }
    
    printf("%s", arr);
    return 0;
}