class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //naive solution:
        //start at every gas station, return one that works
        // O(n^2) TC

        queue<pair<int,int>> gasNcost;
        for(int i = 0 ; i < gas.size() ; i++){
            gasNcost.push({gas[i],cost[i]});
            
        }
        int feul;
        int start;
        bool found = false;
        for(int i = 0 ; i < gas.size() ; i++){
            feul = 0;
            start = i;
            auto temp = gasNcost;
            while(!temp.empty()){
                auto curr = temp.front(); temp.pop();
                feul += curr.first;
                cout << "feul: " << feul << "\n";
                feul -= curr.second;
                cout << "feul: " << feul << "\n_________________________\n";
                if(feul < 0) break;
            }
            if(feul >= 0 && temp.empty()){found = true; return start;}
            auto t2 = gasNcost.front(); gasNcost.pop();
            gasNcost.push(t2);
        }
        return (found ? start : -1);
    }
};
