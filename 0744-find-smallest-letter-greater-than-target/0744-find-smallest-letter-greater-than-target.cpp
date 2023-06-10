class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r=letters.size()-1;
        if (target>=letters[r]) return letters[l];
        while(l<=r){
            int mid=(r+l)/2;
            if(letters[mid]<=target) l=mid+1;
            else r=mid-1;
        }
        return letters[l];
    }
};