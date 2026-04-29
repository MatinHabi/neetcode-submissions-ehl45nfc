class KthLargest {
    int a;
    vector<int>& n;
public:
    KthLargest(int k, vector<int>& nums): a(k), n(nums){}
    
    int add(int val) {
        n.push_back(val);
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i : n){
            pq.push(i);
            if(pq.size() > a){
                pq.pop();
            }
        }
        return pq.top();
    }
    
};
