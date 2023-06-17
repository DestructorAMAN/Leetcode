class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
    map<int,int> mpp;
        int n=nums.size();
    for(int i=0;i<n;i++){
        if(mpp.find(target-nums[i])!=mpp.end()){
           ans.push_back(mpp[target-nums[i]]);
            ans.push_back(i);
        }
        mpp[nums[i]]=i;
    }
    return ans;
    }
};