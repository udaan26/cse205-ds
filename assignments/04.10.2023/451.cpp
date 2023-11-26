#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int> mp;
        for(char c: s){
            mp[c]++;
        }
        multimap<int,char,greater<int>> mp1;
        for(auto x: mp){
            mp1.insert({x.second,x.first});
        }
        for(auto y: mp1){
            ans+=string(y.first,y.second);
        }
        return ans;
    }
};