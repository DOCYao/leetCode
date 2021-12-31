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
using namespace std;string big,small;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=0,m=0;
        n=min(word1.size(),word2.size());
        m=max(word1.size(),word2.size());
        if(word1.size()==n) {
            small= word1.substr(0);
            big = word2.substr(0);
        }
        else {
            small = word2.substr(0);
            big = word1.substr(0);
        }
        int j=0;
        string same;
        for(int i=0;i<n;i++){
            if(j>=m) break;
            int temp=j;
            for(;j<m;j++){
                if(small[i]==big[j]) break;
            }
            if(j==m) {j=temp; continue;}
            same.push_back(small[i]); j++;
        }
        int l=same.size();
        return n-l+m-l;
    }
};