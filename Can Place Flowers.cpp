class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
            int consecutive_zero_counter = 1;
            flowerbed.push_back(0);
            
            for (int i = 0; i < flowerbed.size(); i++)
            {
                consecutive_zero_counter = flowerbed[i] ? 0 : consecutive_zero_counter + 1;

                if (consecutive_zero_counter == 3)
                {
                    n--;
                    consecutive_zero_counter = 1;
                }
            }
            return n <= 0;
        }
};