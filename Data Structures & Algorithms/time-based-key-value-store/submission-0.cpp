class TimeMap {
public:
    unordered_map<string, map<int, string>>m;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        m[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = m[key].upper_bound(timestamp); //checks for the first one greater than timestamp
        //if "it" returns a pointer to the first element (i.e. m[key].begin()) it means all elements are greater so return an empty string
        //otherwise we can step back and return the first one before upperbound
        return it == m[key].begin() ? "" : prev(it)->second;
    }
};
