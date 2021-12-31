#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <math.h>
using namespace std;

class Solution {
public:
    int m,n;
    //vector<vector<char> >
    bool vis[13][13]={false};
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int m=board.size(),n=board[0].size();
        //map<int,int> visited;//纪录在表中查找一个词的时候某点是否被放到答案路径里
        map<char,vector<pair<int,int> > > points;//纪录每个字母在表中的位置
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                points.at(board[i][j]).push_back(pair<int,int>(i,j));
            }
        }
        
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            memset(vis,false,sizeof(vis));
            for(auto k:points.at(words[i][0])){
                if(dfs(points,words[i],1,k.first,k.second)){
                    ans.push_back(words[i]);
                    break;
                }
            }
            
        }
        return ans;
    }
    bool dfs(map<char,vector<pair<int,int> > > points,string word,int p,int x,int y){
        if(p>=word.size()) return true;
        vis[x][y]=true;
        for(auto i:points.at(word[p])){
            if(abs(i.first-x)+abs(i.second-y)==1&&!vis[i.first][i.second]){
                if(dfs(points,word,p+1,i.first,i.second)) return true;
            }
        }
        vis[x][y]=false; return false;
    }
};