#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> completion, vector<string> participant){
    sort(completion.begin(), completion.end());
    sort(participant.begin(), participant.end());

    for (int i=0;i<completion.size();i++) {
        if(completion[i] != participant[i]){
            return participant[i];
        }
            
    }
    return participant[participant.size() - 1];
}

int main() {
    vector<string> participant;
    participant.push_back("leo");
    participant.push_back("kiki");
    participant.push_back("eden");

    vector<string> completion;
    completion.push_back("eden");
    completion.push_back("kiki");

    string res = solution(completion, participant);

    cout << res << endl;

    return 0;
}