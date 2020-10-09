#include "../MyHeaders.h"

int main(int argc, char const *argv[])
{
    pair<int, int> res(-2147000000, 0);
    vector<int> v;
    int N = 9;

    for(int i=0;i<N;i++){
        int t;
        cin >> t;

        v.push_back(t);
        if(t > res.first) {
            res.first = t;
            res.second = i + 1;
        }
    }
    cout << res.first << " " << res.second << endl;

    return 0;
}
