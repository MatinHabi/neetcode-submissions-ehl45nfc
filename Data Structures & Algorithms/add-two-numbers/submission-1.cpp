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
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode;
        ListNode* i = sum;
        ListNode* prev = nullptr;
        int carry = 0;
        while(l1 || l2 || carry > 0){
            i->val += (l1? l1->val : 0) + (l2? l2->val: 0) + carry;
            carry = i->val/10;
            i->val %= 10;
            l1 = (l1? l1->next : nullptr) ; l2 = (l2? l2->next: nullptr);
            i->next = new ListNode;
            prev= i;
            i = i->next;
        }
        if(i->val ==0){prev->next = nullptr;}
        
        return sum;
    }
};
