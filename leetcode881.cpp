#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <map>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        //bool judge[people.size()]={false};
        int r=people.size()-1;
        int l=0;
        int ans=0;
        while(r>=l){
            if(people[l]+people[r]<=limit){
                ans++;
                l++;r--;
                continue;
            }else {
                ans++;
                r--;
            }
        }
        return ans;
    }
};