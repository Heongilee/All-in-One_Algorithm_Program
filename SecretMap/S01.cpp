#include "../MyHeaders.h"

int main(int argc, char const *argv[])
{
    vector<string> v;
    int N;
    int tmp;

    cin >> N;
    v.assign(N, "");
    for(int i=0;i<N;i++){
        scanf("%d", &tmp);

        while(true){
            string stmp = (tmp % 2 == 0)? " " : "#";
            v[i].insert(0, stmp);

            if((tmp <= 0) || v[i].size() >= N) break;
            tmp /= 2;
        }
    }

    // 입력 배열 N개만큼
    for(int i=0;i<N;i++){
        scanf("%d", &tmp);

        for(int j = N - 1;j>= 0;j--){
            string stmp = (tmp % 2 == 0)? " " : "#";
            if(stmp == "#"){
                v[i].replace(j, 1, "#");
            }
            tmp /= 2;
        }
    }

    //결과 출력
    cout << "[";
    for(int i=0;i<N;i++){
        if(i == N - 1) cout << "\"" << v[i] << "\"";
        else cout << "\"" << v[i] << "\"" << ", ";
    }
    cout << "]" << endl;

    return 0;
}
