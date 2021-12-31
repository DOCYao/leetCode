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
    int lengthOfLastWord(string s) {
        int n=s.size();
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ') ans++;
            if(((s[i]==' ')||i==0)&&ans>0) return ans;
        }
    }
};