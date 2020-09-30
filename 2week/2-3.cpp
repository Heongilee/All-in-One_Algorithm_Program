#include "../MyHeaders.h"

bool f(string a, string b){
    if(a.length() <= b.length()) {
        return true;
    }
    else if(a.length() == b.length()) {
        if(a < b){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main() {
    vector<string> v;
    int n;

    cin >> n;
    string tmp;
    for (int i=0;i<n;i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end(), f);
    cout << "------------" << endl;

    // + 중복 처리

    for (string e : v){
        cout << e << endl;
    }
    
    return 0;
}