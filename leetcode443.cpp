#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        char tempc=chars[0];
        int  tempi=1;
        int ptr=0;
        for(int i=1;i<=chars.size();i++){
            if(i==chars.size()){
                chars[ptr++]=tempc;
                if(tempi>1){
                    stack<int> ts;
                    while (tempi) {
                        ts.push(tempi%10); tempi/=10;
                    }
                    while(!ts.empty()){
                        chars[ptr++]=(char)(ts.top()+'0');
                        ts.pop();
                    }
                }
                break;
            }
            if(chars[i]!=tempc){
                chars[ptr++]=tempc;
                if(tempi>1){
                    stack<int> ts;
                    while (tempi) {
                        ts.push(tempi%10); tempi/=10;
                    }
                    while(!ts.empty()){
                        chars[ptr++]=(char)(ts.top()+'0');
                        ts.pop();
                    }
                }
                tempc=chars[i];
                tempi=1;
            }else{
                tempi++;
            }
        }
        return ptr;
    }
};
int main(int argc, char const *argv[])
{
    vector<char> text;
    int i=0;
    while(i<5) text.push_back('a');
    i=0;
    while(i<12) text.push_back('b');
    Solution().compress(text);
    for(auto i:text) cout<<i<<" ";
    cout<<endl;
    return 0;
}
