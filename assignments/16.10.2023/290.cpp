# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);

        string token; 
        int count = 0;

        while(getline(ss, token, ' ')){
            words.push_back(token);
            count++;
        }

        if(count != pattern.length()) return false;

        unordered_map<string,char> m;
        set<char> used;

        for(int i=0; i<pattern.size(); i++){
            string word = words[i];
            char ch = pattern[i];
            if(m.find(word)==m.end() && used.find(ch)==used.end()){
                used.insert(ch);
                m[word] = ch;
            }else if(m[word]!=ch){
                return false;
            }
        }
        return true;
    }
};