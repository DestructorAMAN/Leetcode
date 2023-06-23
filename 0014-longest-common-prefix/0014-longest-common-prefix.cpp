class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer="";
        for(int i = 0; i < strs[0].length(); i++)
        {
            char c = strs[0][i];
            bool match = true;
            for(int j=1; j < strs.size(); j++)
            {
                if(c != strs[j][i] || strs[j].length() < i)
               {
                 match = false;
                 break;
               }
            }
            if(match == false)
            {
                break;
            }
            else answer.push_back(c);
        }
        return answer;
    }
};
