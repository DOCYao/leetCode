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
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        int line=0,row=0;
        line=n/(numRows*2-2)+1;
        if(n%(numRows*2-2)>numRows) 
            line+=n%(numRows*2-2)-numRows;
        row=numRows;
        char table[line][row];
        memset(table,'.',sizeof(table));
        
    }
};