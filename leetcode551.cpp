#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int numA=0,numL=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') numA++;
            if(s[i]!='L') numL=0;
            if(s[i]=='L') numL++;
            if(numA>1||numL>2) return false;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
