//Moore's voting algorithm is used which sayas that the frequency of the majority element is so high that subtracting the frequency of the rest of the elements stioll results in the output of the majority number.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;


        // Variation:- If the assummption that there always exists a majority number fails.
        // int count=0;
        // for(int val: nums){
        //     if(val==ans){
        //         count++;
        //     }
        //     if(count>(n/2)){   
        //         return ans;
        //     }else{
        //         return -1;
        //     }
        // }
    }
};