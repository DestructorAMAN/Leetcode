class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;  //making an iterator for the vector.
        it = nums.begin();         //placing the iterator at the beginning.
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]==val){
                nums.erase(it);   //using erase function from the stl library.
                it--;  // to overlap the position.                
                i--;
            }
            it++;
        }
        return nums.size();        //returning the nums vector.
    } 
};