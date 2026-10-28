class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for (int x : nums){
            mp[x]++;
        }
        for (int i=0;i<n;i++){
            if(mp[nums[i]]>n/2){
                return nums[i];
            }
        }
        return -1;
        // for(int i=0;i<n;i++){
        //     int count = 0;
        //     for(int j= 0; j<n;j++){
        //         if(nums[i]== nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;
    }
};