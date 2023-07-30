class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long temp=mass;
        for(int num:asteroids){
            if(num<=temp){
                temp+=num;
            }else{
                return false;
            }
        }
        return true;
    }
};