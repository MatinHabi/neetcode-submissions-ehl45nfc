/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
    ListNode* helper(ListNode*curr, ListNode*prev){
        if(!curr){
            return prev;
        }
        ListNode* nhead = helper(curr->next, curr);
        curr->next = prev;
        return nhead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        return helper(head, nullptr);
    }
};
