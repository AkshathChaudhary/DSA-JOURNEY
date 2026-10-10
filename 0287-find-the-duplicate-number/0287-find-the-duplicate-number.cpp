class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set<int>s;
        // for(int val : nums){
        //     if(s.find(val)!=s.end()){
        //         return val;                       #Space complexity O(n), we need O(1) so we are gonna use slow fast pointers
        //     }
        //     s.insert(val);
        // }
        // return -1;
        
        int slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};