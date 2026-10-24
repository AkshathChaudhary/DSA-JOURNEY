class Solution {
public:
    set<vector<int>>s;
    void getAllCombinations(vector<int>& arr, int i, vector<vector<int>>& ans, vector<int> combin, int target){
        if(i==arr.size() || target<0){
            return;
        }
        if(target==0){
            if(s.find(combin)==s.end()){
                ans.push_back(combin);
                s.insert(combin);
            }
            return;
        }


        combin.push_back(arr[i]);
        //single choice
        getAllCombinations(arr, i+1, ans, combin, target-arr[i]);
        //multiple
        getAllCombinations(arr, i, ans, combin, target-arr[i]);
        combin.pop_back();
        //exclusion
        getAllCombinations(arr, i+1, ans, combin, target);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombinations(arr, 0, ans, combin, target);

        return ans;
    }
};