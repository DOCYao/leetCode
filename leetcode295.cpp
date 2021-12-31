#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
using namespace std;

class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {

    }
    
    void addNum(int num) {

    }
    
    double findMedian() {

    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
int main(int argc, char const *argv[])
{
    priority_queue<int, vector<int>, less<int> > text;
    for(int i=0;i<10;i++){
        text.push(rand()%100);
    }
    cout<<"top= "<<text.top()<<endl;
    
    //for(auto i:text) cout<<i<<" ";
    return 0;
}
