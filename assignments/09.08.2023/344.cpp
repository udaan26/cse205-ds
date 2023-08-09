#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseit(vector<char>& s, int i, int n){
        if(i>=n/2){
            return;
        }
        swap(s[i],s[n-i-1]);
        reverseit(s, i+1, n);
    }

    void reverseString(vector<char>& s) {
        // int i=0;
        reverseit(s, 0, s.size());
    }
};