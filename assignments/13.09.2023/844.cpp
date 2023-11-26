#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> s1,s2;
        string str1,str2;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='#' && !s1.empty()){
                s1.pop();
            }
            else if(s[i]!='#'){
                s1.push(s[i]);
            }
        }

        for(int j=0; j<t.size(); j++){
            if(t[j]=='#' && !s2.empty()){
                s2.pop();
            }
            else if(t[j]!='#'){
                s2.push(t[j]);
            }
        }

        while(!s1.empty()){
            str1+=s1.top();
            s1.pop();
        }

        while(!s2.empty()){
            str2+=s2.top();
            s2.pop();
        }

        return str1 == str2;
    }
};