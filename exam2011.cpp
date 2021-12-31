#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
using namespace std;


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(auto i:operations){
            if(i.at(0)=='+') ans++;
            else if(i.at(0)=='-') ans--;
            else{
                if(i.at(1)=='-') ans--;
                else ans++;
            }
        }
        
        return ans;
    }
};
int main(int argc, char const *argv[]) {
    //Solution().finalValueAfterOperations
    cout<<"1";
    return 0;
}
