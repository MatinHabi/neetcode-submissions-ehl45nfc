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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int size = 0;
       ListNode* i = head;
       while(i){
        size++;
        i= i->next;
       }
       int remIndex = size-n;
       ListNode* node = head;
       ListNode* prev = nullptr;
       while(remIndex > 0 && node){
        prev = node;
        node = node->next;
        remIndex--;
       }
       if(!prev){
        return head->next;
       }
       ListNode* temp = node;
       prev->next = temp->next;
       node = nullptr;
       return head;

    }
    //1 2 3 4, n = 3
    //      x
    //    y
    

};
