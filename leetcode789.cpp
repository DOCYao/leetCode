#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int dist=abs(target[0])+abs(target[1]);
        int gdist=0x3f3f3f3f;
        for(auto i:ghosts){
            gdist=min(gdist,abs(i.at(0)-target[0])+abs(i.at(1)-target[1]));
            if(gdist<=dist) return false;
        }
        return true;
    }
};