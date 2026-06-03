/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        unordered_map<Node*, Node*> v;
        return dfs(node, v);
    }
    Node* dfs (Node* n, unordered_map<Node*, Node*>& v){
        if(!n){
            return nullptr;
        }
        if(v.count(n)){
            return v[n];
        }
        Node* copy = new Node(n->val);
        v[n] = copy;
        for(int i = 0 ; i < n->neighbors.size() ; i++){
            copy->neighbors.push_back(dfs(n->neighbors[i], v)); 
        }
        return copy;
    }
};
