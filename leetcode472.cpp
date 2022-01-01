#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
#include <list>
#include <map>
#include <string.h>
using namespace std;

class Solution
{
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string> &words)
    {
        vector<string> ans;
        map<char, vector<int>> ast;
        for (int i = 0; i < words.size(); i++)
        {
            if (ast.find(words.at(i).at(0)) == ast.end())
            { // ast中未插入该string时
                ast.insert(pair<char, vector<int>>(words.at(i).at(0), vector<int>(i)));
            }
            else {
                ast[words.at(i).at(0)].push_back(i);
            }
        }
        for(auto i:words) {
            int word=0;
            int p=0;
            for(int j=0;j<ast[i[0]].size();j++){
                int k=ast[i[0]][j];
                if(strcmp(i.substr(p,words[k].size()),words[k])==0)
            }
        }
    }
};