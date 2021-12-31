#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
#include <math.h>
using namespace std;

class DetectSquares {
public:
    vector<pair<int,int> > points;
    DetectSquares() {

    }
    
    void add(vector<int> point) {
        pair<int,int> temp;
        temp.first=point[0];temp.second=point[1];
        points.push_back(temp);
    }
    
    int count(vector<int> point) {

    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */