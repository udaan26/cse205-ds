#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> mp;
        for(auto c: s){
            mp[c]++;
        }
        string st;
        for(auto ch: order){
            if(mp.find(ch)!=mp.end()){
                st+=string(mp[ch],ch);
                mp.erase(ch);
            }
        }
        for(auto x: mp){
            st+=string(x.second,x.first);
        }
        return st;
    }
};