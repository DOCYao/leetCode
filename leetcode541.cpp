#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        int l=0,r=2*k-1;
        while (r<s.size())
        {
            int pl=l,pr=l+k-1;
            while(pr>pl){
                char temp=s[pl];
                s[pl]=s[pr];
                s[pr]= temp;
                pl++;  pr--;
            }
            l=r+1; r=l+2*k-1;
        }
        if(l<s.size()&&r>s.size()){
            int pl=l,pr=min(s.size()-1,l+k-1);
            while(pr>pl){
                char temp=s[pl];
                s[pl]=s[pr];
                s[pr]= temp;
                pl++;  pr--;
            }
        }
        return s;
    }
};
