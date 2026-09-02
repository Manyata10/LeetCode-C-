class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int x=0,y=0;
        bool success=false;
        int m = bills.size();
        for(int i=0;i<m;i++){
            if(bills[i]==5){
                x++;
            }
            else if(bills[i]==10){
                if(x){
                    x--;
                    y++;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                if(x && y){
                    x--;
                    y--;
                }
                else if(x>=3){
                    x-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};