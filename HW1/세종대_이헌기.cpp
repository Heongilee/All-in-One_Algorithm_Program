//////////////////////////////////////////////////////////////////////////
//  먼저, 사전 v를 A 부터 Z까지 초기화 시키고,
//  문자열 N을 입력받아
//  i : 0 ~ N.size() 만큼 순회하고,
//  while문이 flag 변수가 바뀔 때까지 순회시키며 ea를 하나씩 증가 시키며
//  사전에 N.substr(i, ea)이 있는지 확인합니다.
//  있다면, tmp_it에 저장을 시켜두고
//  없다면, 이전에 받아둔 tmp_it에 있는 것 출력하고 ea 개수만큼 사전에 추가시킵니다.
//////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <utility> // pair 클래스를 사용하기 위함.
#include <set>      // set 클래스 사용.
#include <map>
#include <cctype>   // toupper, tolower
#include <cmath>    //std::abs, ceil, floor(반내림), round(반올림)

using namespace std;

string getString(char x){
    string s(1, x);

    return s;
}
int main(int argc, char const *argv[])
{
    vector<string> v;
    vector<string>::iterator it;
    int ea = 0;                         // while 반복문의 flag가 바뀌지 않을 동안, ea를 하나씩 늘려가며 사전을 탐색해본다.
    bool flag = false;                  // N의 i위치에서 ea크기의 substring을 찾지 못했다면, ea-1크기의 substring을 사전에 추가시켜야 한다.

    // 초기화
    v.push_back("-1");
    for(char c = 'A';c <= 'Z';c++){
        v.push_back(getString(c));
    }

    // 문자열 입력
    string N;
    cin >> N;

    // 가장 마지막으로 사전에서 찾은 문자열 위치를 저장할 tmp_it
    vector<string>::iterator tmp_it;

    for(int i = 0;i < N.size();){
        while(flag != true){
            ea += 1;
            for(it = (v.begin() + 1);it != v.end();it++){
                // N의 i위치에서 ea크기의 substring을 찾았다면, tmp_it에 그 위치를 저장해둔다.
                if(*it == N.substr(i, ea)) {
                    tmp_it = it;
                    break;
                }
            }
            // iterator가 마지막까지 돌았거나, 찾을 문자열의 크기가 N의 크기를 초과하려고 하는 경우
            // 위치를 출력하고 새로 사전에 추가시킨다.
            if((it == v.end()) || (i + ea > N.size())){
                cout << distance(v.begin(), tmp_it) << " ";
                if(i + ea <= N.size()) v.push_back(N.substr(i, ea));
                // flag 변수를 통해 while문을 빠져 나온다.
                flag = true;
            }
        }
        i += ea - 1;    // 문자 개수만큼 증감
        ea = 0;         // 찾을 문자의 사이즈는 다시 초기화시킴.
        flag = false;   // 플래그 변수도 다시 초기화.
    }
    cout << endl;

    return 0;
}
