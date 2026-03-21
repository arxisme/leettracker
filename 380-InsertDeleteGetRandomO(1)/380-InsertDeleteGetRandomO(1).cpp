// Last updated: 21/03/2026, 17:51:08
1class RandomizedSet {
2public:
3    unordered_map<int, int> mp; // val -> index
4    vector<int> nums;
5
6    bool insert(int val) {
7        if (mp.count(val)) return false;
8
9        nums.push_back(val);
10        mp[val] = nums.size() - 1;
11
12        return true;
13    }
14
15    bool remove(int val) {
16        if (!mp.count(val)) return false;
17
18        int idx = mp[val];
19        int last = nums.back();
20
21    
22        nums[idx] = last;
23        mp[last] = idx;
24
25        nums.pop_back();
26        mp.erase(val);
27
28        return true;
29    }
30
31    int getRandom() {
32        static std::mt19937 gen(std::random_device{}());
33        int r = std::uniform_int_distribution<>(0, nums.size() - 1)(gen);
34        return nums[r];
35    }
36};