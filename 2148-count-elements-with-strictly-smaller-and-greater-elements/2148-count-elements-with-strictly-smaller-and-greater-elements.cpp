class Solution {
public:
    int countElements(vector<int>& nums) {
      sort(nums.begin(), nums.end());
        
        short start_index = 0;
        short end_index = nums.size() - 1;
        
         if (nums.size() <= 2) {
            return 0;
        }
         for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                start_index += 1;
            } else {
                break;
            }
        }
         if (start_index + 1 == nums.size()) {
            return 0;
        }
          for (int i = nums.size() - 1; i >= start_index + 1; i--) {
            if (nums[i] == nums[i - 1]) {
                end_index -= 1;
            } else {
                break;
            }
        }        
         if (start_index == 0 && end_index == nums.size() - 1) {
            return nums.size() - 2;
        }
         else if (start_index == 0) {
            return end_index - 1;
        }
         else {
            return end_index - start_index - 1;
        }
     return 0;}
};