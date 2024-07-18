class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i;
        vector<int>ans;
        for(i=0;i<n;i++){
            int index=nums[i]%n;
            nums[index]+=n;
        }
        for(i=0;i<n;i++){
            if((nums[i]/n)>=2){
                ans.push_back(i);
            }
        }
        if(ans.size()==0)return{-1};
        return ans;
    }
};