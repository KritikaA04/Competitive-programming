class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        int n= number.size();
        string maxi = "";
        string s = number;
        for(int i=0; i<n; i++){
            if(digit==number[i]){
                number.erase(number.begin()+i);
                maxi= max(maxi,number);
            }
            number = s;
        }
        return maxi;
    }
};