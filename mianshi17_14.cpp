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
    vector<int> smallestK(vector<int>& arr, int k) {
        //vector<int> res;
        vector<int> t;
        if(k==0) return t;
        sort(arr.begin(),arr.end());
        for(int i=0;i<k;i++){t.push_back(arr[i]);}
        return t;
        priority_queue<int> res;
        int n=arr.size();
        if(k>=n) return arr;
        for(int i=0;i<k;i++){res.push(arr[i]);}
        for(int i=k;i<n;i++){
            //sort(res.begin(),res.end());
            if(arr[i]<res.top()) {
                res.pop(); res.push(arr[i]);
            }
        }
        //return res;
        //vector<int> t;
        while(!res.empty()) {t.push_back(res.top());res.pop();}
        return t;
    }
};


int main(int argc, char const *argv[])
{
    priority_queue<int> text;
    for(int i=0;i<10;i++) text.push(rand()%100);
    for(int i=0;i<10;i++) {cout<<text.top()<<" ";text.pop(); }
    cout<<endl;
    return 0;
}
