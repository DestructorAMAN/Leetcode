class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        
        for(int i=0;i<=30;i++) {
            if(ans==n) 
               { 
                return true;
               }
           if(ans < INT_MAX/2)
        ans = ans*2;
    }
     return false;
    }
};

// ______________________________________________________________________
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
        
//             int m=n;
//         int count=0;
//         while(m!=0 && m<pow(2,31)/2){
//             if((m & 1 ) == 1) count++;
//             m = m >> 1;
//         }
//         if(count==1) return true;
      //          ///// if(n=pow(2,30)) return true;
//         else return false;
//     }
// };

// ______________________________________________________________________
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         else{
//      return ((n & (n-1)) == 0); }  
//     }
// };
