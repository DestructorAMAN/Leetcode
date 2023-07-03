class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      // //}// Better approach
      //   set<vector<int>> st;
      //   for(int i=0;i<nums.size();i++){
      //       set<int> hashset; 
      //       for(int j=i+1;j<nums.size();j++){
      //           int third = -(nums[i]+nums[j]);
      //           if(hashset.find(third)!= hashset.end()){
      //               vector<int> temp = {nums[i],nums[j],third};
      //               sort(temp.begin(),temp.end());
      //               st.insert(temp);
      //           }
      //           hashset.insert(nums[j]);
      //       }
      //   } vector<vector<int>> ans(st.begin(),st.end());
      //   return ans; 
      //   //}//
      sort(nums.begin(),nums.end());
      vector<vector<int>> ans;
        int j,k;
      for(int i = 0;i<nums.size();i++){
          if( i>0 && nums[i]==nums[i-1]) continue;
          j=i+1;
          k=nums.size()-1;
          while(j<k)
          {
              int sum = nums[i]+nums[j]+nums[k];
              if(sum>0)
              {
                 k--; 
              }
              if(sum<0)
              {
                 j++;
              }
              if(sum==0)
              {
                  ans.push_back({nums[i],nums[j],nums[k]});
                  j++;
                  k--;
                  while( j<k && nums[j]==nums[j-1]) j++;
                  while(j<k && nums[k]==nums[k+1])  k--;
              }
          }
          
      } return ans;
    }
};