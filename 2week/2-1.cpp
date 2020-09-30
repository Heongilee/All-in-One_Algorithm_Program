#include "..\MyHeaders.h"
/*
TIP
탭 간의 이동 방법
Ctrl + Tab
*/
// 문제 1.
// https://tech.kakao.com/2017/09/27/kakao-blind-recruitment-round-1/
int main() {
    int n;
    vector<int> arr1, arr2;

    scanf("%d", &n);

    int value;
    for(int i=0;i<n;i++){
        cin >> value;
        arr1.push_back(value);
    }
    for(int i=0;i<n;i++){
        cin >> value;
        arr2.push_back(value);
    }

    int tmp;
    for(int i=0;i<n;i++){
        tmp = arr1[i] | arr2[i];

    }

    return 0;
}
