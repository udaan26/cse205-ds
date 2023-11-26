#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int col[9][9]={0};
        int row[9][9]={0};
        int box[9][9]={0};
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    int k=((i/3)*3)+(j/3);
                    int num=board[i][j]-'0'-1;
                    if(col[j][num]++ || row[i][num]++ || box[k][num]++)
                        return false;
                }
            }
        }
        return true;
    }
};