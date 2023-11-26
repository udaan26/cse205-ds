#include<bits/stdc++.h>
using namespace std;


//Definition for singly-linked list.
 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *merge(ListNode* left, ListNode* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode *curr = new ListNode();
        ListNode *ans = curr;
        while(left && right){
            if(left->val<right->val){
                curr->next = left;
                left = left->next;
            }else{
                curr->next = right;
                right = right->next;
            }
            curr = curr->next;
        }
        if(left!=NULL) curr->next = left;
        if(right!=NULL) curr->next = right;
        return ans->next;
    }

    ListNode* Mid(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* mid = Mid(head);
        ListNode *newhead = mid->next;
        mid->next = NULL;
        ListNode *left = sortList(head);
        ListNode *right = sortList(newhead);
        return merge(left,right);
    }
};