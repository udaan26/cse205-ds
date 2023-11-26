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
    ListNode * Reverse(ListNode* head){
        ListNode *temp = NULL;
        ListNode *next;
        while(head!=NULL){
            next = head->next;
            head->next = temp;
            temp = head;
            head = next;
        }
        return temp ;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* curr = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next = Reverse(slow->next);
        slow = slow->next;
        while(slow!=NULL){
            if(curr->val!=slow->val){
                return false;
            }
            curr=curr->next;
            slow=slow->next;
        }
        return true;
    }
};