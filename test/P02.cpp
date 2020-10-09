#include "../MyHeaders.h"

void printSet(const set<pair<int, string>>& st) {
    set<pair<int, string>>::iterator ite_st;

    for(ite_st = st.begin();ite_st != st.end();ite_st++){
        cout << "[" << (*ite_st).first << ", " << (*ite_st).second <<"] ";
    }

    return;
}

int main(int argc, char const *argv[])
{
    set<pair<int, string>> st = {{4, "D"}, {2, "B"}, {8, "K"}};
    set<pair<int, string>>::iterator it;

    it = st.find(pair<int, string>(4, "D"));

    if(it != st.end()) {
        cout << "[" << (*it).first << ", "<< (*it).second << "] Ã£À½." << endl;
    } else {
        cout << "Not found ..." << endl;
    }
}
