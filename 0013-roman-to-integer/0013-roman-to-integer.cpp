class Solution {
public:
    int romanToInt(string s) 
    { 
      map<char, int> mpp;
     mpp.insert(make_pair('I',1));
     mpp.insert(make_pair('V',5));         
     mpp.insert(make_pair('X',10));        //  M   CM   XC    V    I   SUM
     mpp.insert(make_pair('L',50));       //1000  900   90    5    1 = 1996
     mpp.insert(make_pair('C',100)); //NUM:-1000 1900 1990 1995 1996
     mpp.insert(make_pair('D',500));
     mpp.insert(make_pair('M',1000));
      int sum = 0;
        int num;
        for(int i=0;i<s.length(); )
        {  
            if(mpp[s[i]] >= mpp[s[i+1]] || i == (s.length()-1)) 
                {
                num=mpp[s[i]];
                i++;
                }
            else {
                 num=mpp[s[i+1]]-mpp[s[i]];
                i=i+2;}
            sum=sum+num;
        }
     return sum;
    }
}; 