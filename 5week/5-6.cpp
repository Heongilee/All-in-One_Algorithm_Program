#include "../MyHeaders.h"

int N;
vector<int> map[25];
vector<int> visit[25];
deque<int> dq;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, +1, 0, -1};

void BFS(int i,int j) {
    dq.push_back({i, j});
    while(!dq.empty()){
        pair<int, int> t = dq.front();
        dq.pop_front();

    }
}
int main(int argc, char const *argv[])
{
    cin >> N;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int t;
            map[i].push_back(t);
        }
    }
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(map[i][j] == 1 and visit[i][j] != 1) {
                BFS(i, j);
            }
        }
    }

    return 0;
}
