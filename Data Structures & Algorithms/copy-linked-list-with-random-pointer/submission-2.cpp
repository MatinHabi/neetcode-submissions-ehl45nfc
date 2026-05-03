/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    unordered_map<Node*, Node*> seen;
    Node* newList;
    Node* i;

    void rec(Node* old, Node* newList, Node* i){
        if(!old){
            return;
        }

        i->val = old->val;
        seen[old] = i;
        if(!old->next){i->next = nullptr;}else{i->next = new Node(old->next->val);}
        
        rec(old->next, newList, i->next);

        if(!old->random){i->random = nullptr;}else{
            i->random = seen[old->random];
        }
    }

    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        newList = new Node(0);
        i = newList;
        rec(head, newList, i);
        return newList;
    }
};
