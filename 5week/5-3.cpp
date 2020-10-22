#include "../MyHeaders.h"
int cnt = 0;
int N;

void DFS(int v) {
    if(v == N) {
        cnt += 1;
    }
    if (v > N) {
        return ;
    }
    else{
        DFS(v + 1);
        DFS(v + 2);
    }
}
int main(int argc, char const *argv[])
{
    cin >> N;

    DFS(0);

    cout << cnt << endl;
    return 0;
}