class Solution {
public:
    int countElements(vector<int>& nums) {
       int n = nums.size();
        int count=0;
       for(int i=0;i<n;i++){
           int flag=0;
           int ptr= nums[i];
           for(int j=0;j<n;j++){
               if(ptr>nums[j])
                   {flag++;
                   break;}
           }
           for(int j=0;j<n;j++){
               if(ptr<nums[j])
                   {flag++;
                   break;}
           }
           if(flag==2) count++;
       }
        return count;
    }
};