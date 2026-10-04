class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol(2,0);
        unordered_map<int,int> m; //needed value, index of original
        for(int i = 0; i<nums.size(); i++){
            auto it = m.find(nums[i]);
            if(it != m.end()){
                sol[0] = it->second;
                sol[1] = i;
                return sol;
            }
            m[target - nums[i]] = i;
        }


    }
};
