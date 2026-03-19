// Last updated: 19/03/2026, 21:15:05

class RandomizedSet {
    unordered_map<int, int> mp; 
    vector<int> arr;

public:
    RandomizedSet() {
       
        srand((unsigned)time(nullptr));
    }

    bool insert(int val) {
        if (mp.count(val)) return false;      
        mp[val] = arr.size();
        arr.push_back(val);
        return true;
    }

    bool remove(int val) {
        auto it = mp.find(val);
        if (it == mp.end()) return false;    
        
        int idx = it->second;               
        int lastVal = arr.back();           
       
        arr[idx] = lastVal;
        mp[lastVal] = idx;

        
        arr.pop_back();
        mp.erase(it);                        
        return true;
    }

    int getRandom() {
        
        int idx = rand() % arr.size();
        return arr[idx];
    }
};
