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
    int balancedStringSplit(string s) {
        int tag=s[0]=='R'?1:-1;
        int res=0;
        for(int i=1;i<s.size();i++){
            tag+=s[i]=='R'?1:-1;
            if(tag==0) res++;
        }
        return res;
    }
};