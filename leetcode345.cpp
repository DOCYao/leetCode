#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        vector <int> yuan;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='o'||s[i]=='i'||s[i]=='e'||s[i]=='u'){
                yuan.push_back(i);
            }
        }
        int l=0,r=yuan.size()-1;
            while(r>l){
                char temp;
                temp=s[yuan[l]]; s[yuan[l]]=s[yuan[r]]; s[yuan[r]]=temp;
                l++;r--;
            }
            return s;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
