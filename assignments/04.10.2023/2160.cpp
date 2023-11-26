#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        string s;
        while(num){
            s+=((num%10) + '0');
            num = num/10;
        }
        sort(s.begin(), s.end());
        int res1 = ((s[0]-'0')*10)+(s[3]-'0');
        int res2 = ((s[1]-'0')*10)+(s[2]-'0');
        return res1+res2;
    }
};