#include "../MyHeaders.h"
// * ========================== BFS로 해결(사진첩 참고) ==============================================
int N;
string _begin;
string _target;
vector<string> _words;
void DFS(string L){
    if(L == _begin.size()){
        return;
    }
    else{
        for(int i=0;i<_words.size();i++) {
            
        }
    }
}
int solution(string begin, string target, vector<string> words) {
    int ans = 0;
    _begin = begin;
    _target = target;
    _words = words;

    DFS("");
    return ans;
}
int main(int argc, char const *argv[])
{
    cin >> N;
    vector<string> words = {"hot", "dot", "dog", "lot", "log", "cog"};
    solution("hit", "cog", words);

    return 0;
}
