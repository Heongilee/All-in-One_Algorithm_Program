#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    printf("size : %d\n\n", s.size());

    int res;

    res = s.top();
    printf("res = %d\n", res);

    res = s.top();
    printf("res = %d\n", res);

    res = s.top();
    printf("res = %d\n", res);

    return 0;
}