class Solution {
public:
//O(n * 2^n)
    void ps(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
        if(i==nums.size()){
            allSubsets.push_back({ans});
            return;
        }
        //include
        ans.push_back(nums[i]);
        ps(nums,ans,i+1,allSubsets);

        //backtrack
        ans.pop_back();

        //exclude
        ps(nums,ans,i+1,allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        ps(nums,ans,0,allSubsets);
        return allSubsets;
    }
};