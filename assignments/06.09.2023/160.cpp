#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode *d1 = headA;
        ListNode *d2 = headB;
        while(d1!=d2){
            d1=d1->next;
            d2=d2->next;
            if(d1==d2) return d1;

            if(d1==NULL) d1=headB;
            if(d2==NULL) d2=headA;
        }
        return d1;
    }
};