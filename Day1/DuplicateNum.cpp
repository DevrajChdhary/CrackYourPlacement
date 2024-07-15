class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,j;
        int temp;
       sort(nums.begin(),nums.end());
       for(i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            temp=nums[i];
            break;
            }
       }
            return temp;
       }
};