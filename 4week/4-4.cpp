#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <algorithm>

using namespace std;

vector<int> graph[1001];              // 그래프.
int N, M, V;                     // 정점 개수, 간선 개수, 시작 정점
vector<int> chk;                 // 체크 리스트 (1이면 이미 방문, 0이면 방문 안 함.)
deque<int> dq;                   // BFS 사용을 위한 큐

int sum(vector<int> L){          // 리스트 합계 구하는 함수
    int res = 0;
    for (auto &e : L) {
        res += e;
    }
    return res;
}

void BFS(const int& V) {
    chk[V] = 1;
    cout << V << " ";

    for(int i=0;i<graph[V-1].size();i++){
        if(chk[graph[V-1][i]] == 0){
            chk[graph[V-1][i]] = 1;
            dq.push_back(graph[V-1][i]);
        }
    }
    while(!dq.empty()) {
        int t = dq.at(0);
        dq.pop_front();
        cout << t << " ";

        for(int i = 0;i<graph[t - 1].size();i++){
            if(chk[graph[t - 1][i]] == 0){
                chk[graph[t - 1][i]] = 1;
                dq.push_back(graph[t - 1][i]);
            }
        }
    }
    cout << endl;
    return;
}

void DFS(const int& V) {
    chk[V] = 1;
    cout << V << " ";

    for(int i=0;i<graph[V - 1].size();i++){
        if(chk[graph[V - 1][i]] == 0){
            DFS(graph[V - 1][i]);
        }
    }

    return;
}

int main(int argc, char const *argv[])
{
    cin >> N >> M >> V;
    chk.assign(N + 1, 0);

    for(int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;

        graph[a - 1].push_back(b);
        graph[b - 1].push_back(a);
    }

    // sort
    for(auto& l : graph){
        sort(l.begin(), l.end());
    }

    DFS(V);
    cout << endl;
    chk.assign(N + 1, 0);
    BFS(V);

    return 0;
}