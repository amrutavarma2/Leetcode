class Solution {

    void generatesubsets(int idx, vector<int>&subset, vector<int>&nums, vector<vector<int>>&ans){
        if(idx==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        generatesubsets(idx+1, subset, nums, ans);
        subset.pop_back();

        generatesubsets(idx+1, subset, nums, ans);
    }


public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        generatesubsets(0, subset, nums, ans);

        return ans;
    }
};