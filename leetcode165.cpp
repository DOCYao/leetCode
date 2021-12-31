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
    int compareVersion(string version1, string version2) {
        priority_queue<int> a,b;
        int temp=0;
        for(int i=0;i<version1.size();i++) {
            if(version1[i]=='.'||i==version1.size()-1) {a.push(temp);temp=0;continue;}
            temp=temp*10+version1[i]-'0';
        }
        for(int i=0;i<version2.size();i++) b.push(version2[i]-'0');
        while (!a.empty()&&!b.empty())
        {
            if(a.top()==b.top()) {a.pop();b.pop();}
            if(a.empty()&&b.empty()) return 0;
            if(a.empty()&&!b.empty()||(a.top()<b.top())) return -1;
            if(!a.empty()&&b.empty()||(a.top()>b.top())) return 1;
            
        }
        return 0;
    }
};
int main(int argc, char const *argv[])
{
    string v1="1.0",v2="1.0.0";
    cout<<Solution().compareVersion(v1,v2)<<endl;
    return 0;
}
