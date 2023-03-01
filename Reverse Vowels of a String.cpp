class Solution {
public:
        bool isVowel(char s)
        {
            if(s=='a' ||s=='e' ||s=='i' ||s=='o' ||s=='u' ||s=='A' ||s=='E' ||s=='I' ||s=='O' ||s=='U')
                return true;
            else
                return false;
        }
    string reverseVowels(string s) 
    {
        // string x=string s;
        // char a,b;
        // for(int i=0;i<s.length();i++)
        // {
        //     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        //     {
        //         a=s[i];
        //     }
        // }
        // for(int j=s.length();j>=0;j++)
        // {
        //     if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
        //     {
        //         b=s[j];
        //     }
        // }
        if(s.size()==0)
            return "";
        int left=0, right=s.size()-1;
        while(left<right)
        {
            
        
            if( isVowel(s[left]) && isVowel(s[right]) )
            {
                swap(s[right],s[left]);
                left++;
                right--;
            }
            else if(isVowel(s[left]))
                right--;
            else if(isVowel(s[right]))
                left++;
            else
            {
                left++;
                right--;
            }
        }
        
        return s;
    }
};