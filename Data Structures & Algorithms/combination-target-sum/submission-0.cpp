class Solution {

private: 

void findCombination(int idx, vector<int> &nums, int &sum, int &target, vector<vector<int>> &ds, vector<int> &subs){

    if (sum > target || idx >= nums.size()) return;

    if(sum == target) {
        ds.push_back(subs);
        return;
    }

    sum += nums[idx];
    subs.push_back(nums[idx]);
    findCombination(idx, nums, sum, target, ds, subs);
    
    sum -= nums[idx];
    subs.pop_back();
    findCombination(idx+1, nums, sum, target, ds, subs);
    return;
}

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
    vector<vector<int>> ds;
    vector<int> subs;
    int idx=0, sum=0;
    findCombination(idx, nums, sum, target, ds, subs);
    return ds;
    }
};
