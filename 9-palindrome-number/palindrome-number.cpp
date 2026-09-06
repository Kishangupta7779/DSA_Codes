class Solution {
public:
    bool isPalindrome(int x) {
        long int val = 0, rev ;

    int org = x; 
    if (x < 0){ 
        return false ;
    }

        while ( x != 0 ){ 
            rev = x % 10;
            val = val * 10 + rev;
            x /= 10;
         }
         if (org == val) { 
            return true;
          }
          else
          return false;
    }

};