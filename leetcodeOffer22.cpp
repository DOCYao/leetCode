#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string.h>
#include <set>
#include <queue>
#include <stack>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int temp=1;
        ListNode *l,*r;
        l=head;r=head;
        while(r->next!=nullptr){
            if(temp>=k){
                l=l->next;
            }
            temp++;r=r->next;
        }
        return l;
    }
};