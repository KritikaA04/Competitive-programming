class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        int y=0;
        
         y = x % 10;
        if (y == 0 && x != 0 || x < 0) 
            return false; 
        while (y < x) {
            x = x / 10;
            if (y < x) 
                y = y * 10 + x % 10;
        }
        return x == y;
    }
        
};
