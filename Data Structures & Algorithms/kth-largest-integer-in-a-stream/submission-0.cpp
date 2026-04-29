class KthLargest {
    int a;
    vector<int>& n;
    int helper(int k, vector<int>& nums){
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i : nums){
            pq.push(i);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
public:
    KthLargest(int k, vector<int>& nums): a(k), n(nums){}
    
    int add(int val) {
        n.push_back(val);
        return helper(a, n);
    }
    
};
