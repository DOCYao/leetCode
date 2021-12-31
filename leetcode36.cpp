#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans;
        ans=lie(0,board);
        if(!ans) return ans;
        ans=hang(0,board);
        if(!ans) return ans;
        for(int i=0;i<7;i+=3){
            for(int j=0;j<7;j+=3){
                ans=kuai(i,j,board);if(!ans) return ans;
            }
        }
        return ans;
    }
    bool lie(int row,vector<vector<char>>& board) {
        set<char> text;
        for(int i=0;i<9;i++){
            char temp=board[i][row];
            if(temp!='.'){
                if(text.count(temp)==0) text.insert(temp);
                else return false;
            }
        }
        if(row+1<9) return hang(row+1,board);
        return true; 
    }

    bool hang(int row,vector<vector<char>>& board) {
        set<char> text;
        for(int i=0;i<9;i++){
            char temp=board[row][i];
            if(temp!='.'){
                if(text.count(temp)==0) text.insert(temp);
                else return false;
            }
        }
        if(row+1<9) return hang(row+1,board);
        return true; 
    }
    bool kuai(int x,int y,vector<vector<char>>& board) {
        set<char> text;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char temp=board[x+i][y+j];
            if(temp!='.'){
                if(text.count(temp)==0) text.insert(temp);
                else return false;
            }
            }
        }
        return true;
    }
};

