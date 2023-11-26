#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestInteger(int num) {
        string temp = to_string(num);
        priority_queue<int> o;
        priority_queue<int> e;

        while(num>0){
            if((num%10)%2==0){
                e.push(num%10);
            }else{
                o.push(num%10);
            }
            num = num/10;
        }
        int result=0;
        for(int i =0; i<temp.size(); i++){
            if((temp[i]-'0')%2==0){
                result = (result*10)+e.top();
                e.pop();
            }else{
                result = (result*10)+o.top();
                o.pop();
            }
        }
        return result;
    }
};