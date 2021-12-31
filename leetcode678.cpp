#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <map>
#include <stack>
using namespace std;

class Solution
{
public:
    bool checkValidString(string s)
    {
        int l = 0, star = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                l++;
            if (s[i] == '*')
                star++;
            if (s[i] == ')')
            {
                if (l)
                    l--;
                else if (star)
                    star--;
                else
                    return false;
            }
        }
        if (l == 0)
            return true;
        else
        {
            int r = 0;
            star = 0;
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '(')
                    {
                        if(r) r--;
                        else if(star) star--;
                        else return false;
                    }
                if (s[i] == '*')
                    star++;
                if (s[i] == ')') r++;
            }
        }
        return true;
    }
};