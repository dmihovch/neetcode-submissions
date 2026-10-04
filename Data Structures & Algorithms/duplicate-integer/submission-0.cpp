class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> nummap(nums.size());
        unordered_map<int,bool> num_map;

        for(const int& val: nums){
            if(num_map.find(val) != num_map.end()){
                return true;
            }
            num_map[val] = true;
        }
        return false;

    }
};