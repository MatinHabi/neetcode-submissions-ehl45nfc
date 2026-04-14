class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        /*
        algo:
        - work out time of arrival
        - if car A arrives before car B -> fleet

        need to:
        -sort cars based on pos
        -calculate arrival time: t = s/v (dist/speed)
        */

        vector<pair<int,int>> cars; //set of pos, speed
        for(int i = 0 ; i < speed.size() ; i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        stack<float> fleet; //stores speed
        for(int i = 0 ; i < cars.size() ; i++){
            int s = target - cars[i].first; int v = cars[i].second;
            float t = (float)s/v;
            if(fleet.empty() || fleet.top() < t){
                fleet.push(t);
            }
        }
        return fleet.size();

    }

    /*
    7 4 1 0 -> 1 2 2 1
    loop 1:
        t = 3/1 = 3
        stack = {3}
    loop 2:
        t = 6/3 = 3
        stack = {3}
    loop 3:
        t = 9/2 = 4
        stack = {3,4}
    loop 4:
        t = 10/1 = 10
        stack = 
    */
};
