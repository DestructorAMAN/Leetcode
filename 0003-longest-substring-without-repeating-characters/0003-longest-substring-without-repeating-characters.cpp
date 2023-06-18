class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // map<char,int> mpp;
        // int count = 0;
        // int i = 0;
        // int l = 0;
        // int max_count = 0; //"pqwertyuponon"
        // for(i=l;i<s.length();i++){
        //     mpp[s[i]] = i; 
        //     count++; 
        //     if(mpp.find(s[i+1])!= mpp.end())
        //     {
        //         if(count > max_count) 
        //         {
        //             max_count = count;
        //         }
        //         l++;
        //         mpp.clear();
        //         count = 0;
        //         i = l;
        //     }
        // }
        //     return max_count;
        map<char,int> mpp;
        int end = 0;
        int start = 0;
        int max_count = 0; //"pqwertyuponon"
        while(start<s.length()){ 
            if(mpp.find(s[start])== mpp.end())
            {
                if(start-end+1 > max_count) 
                {
                    max_count = start-end+1;
                }
                    mpp[s[start]]=start;
                start++;
            }
            else {
                mpp.erase(s[end]);
                end++;
            }
        }
            return max_count;
            
        
            
    }
};