class Solution {
public:
    int fillCups(vector<int>& amount) 
    {
       
    priority_queue<int> maxh;
    for(auto i : amount){
        maxh.push(i);
    }
    int time = 0;
    while(maxh.size()>0){
        
        if(maxh.top()==0)
            maxh.pop();
    
        else if(maxh.size()==1){
            time = time + maxh.top();
            maxh.pop();
        }
        
        else{
            int first = maxh.top()-1;
            maxh.pop();
            if(maxh.top()!=0){
            int second = maxh.top()-1;
            maxh.pop();
            maxh.push(second);
            }
            maxh.push(first);
           
            time++;
        }
    }    
    return time;
    }
};