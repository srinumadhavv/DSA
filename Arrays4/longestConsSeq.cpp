class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(int num:nums){
            s.insert(num);
        }
        int longStreak = 0;
        for(int num:nums){
            if(!s.count(num-1)){
                int currentNum = num;
                int streak=1;
                while(s.count(currentNum+1)){
                    currentNum+=1;
                    streak+=1;
                }
                longStreak=max(longStreak,streak);
            }
        }
        return longStreak;
    }
};