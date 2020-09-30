#include "../MyHeaders.h"

void printLists(list<string>::iterator& ls_it, list<string>& ls, list<string>& ls1, list<string>& ls2){
    // ls 리스트의 내용 출력
    cout << "[1] : ";
    for(ls_it = ls.begin();ls_it != ls.end();ls_it++){
        cout << *ls_it << " ";
    }
    cout << endl;
    
    // ls1 리스트의 내용 출력
    cout << "[2] : ";
    for(ls_it = ls1.begin();ls_it != ls1.end();ls_it++){
        cout << *ls_it << " ";
    }
    cout << endl;

    // ls2 리스트의 내용 출력
    cout << "[3] : ";
    for(ls_it = ls2.begin();ls_it != ls2.end();ls_it++){
        cout << *ls_it << " ";
    }
    cout << endl;
    cout << endl;
}

string getStr(char c){
    string s(1, c);

    return s;
}

int main(int argc, char const *argv[])
{
    list<string>::iterator ls_it;   // 리스트 반복자 ls_it
    list<string>::reverse_iterator ls_rit;   // 리스트 역반복자 ls_rit
    list<string> ls;                // 빈 리스트 ls.
    list<string> ls1(10, "b");      // 10개의 "a"원소를 가지는 리스트 ls1생성.
    list<string> ls2(ls);           // ls의 리스트 내용을 복사해 ls2에 대입.

    // 리스트 내용 출력
    printLists(ls_it, ls, ls1, ls2);

    for(char c = 'A';c <='Z';c+= 2){
        ls.push_back(getStr(c));
        ls2.push_back(getStr(c + 1));
    }

    cout << "ls.front() : " << ls.front() << ", ls.back() : " << ls.back() << endl;

    printLists(ls_it, ls, ls1, ls2);
    
    ls.merge(ls2);

    printLists(ls_it, ls, ls1, ls2);

    return 0;
}
