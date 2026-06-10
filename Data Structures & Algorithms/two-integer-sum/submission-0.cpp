class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sums;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(sums.find(diff)!=sums.end()){
                return {sums[diff],i};
            }
            sums.insert({nums[i],i});
        }
    }
};
