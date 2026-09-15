class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        // int cnt = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     int sum = 0;
        //     for (int j = i; j < nums.size(); j++) {
        //         sum += nums[j];
        //         if (sum == goal)
        //             cnt++;
        //     }
        // }
        // return cnt;
       unordered_map<int,int>mp;
       mp[0]=1;
       int cnt=0;
       int sum=0;
       for(int i=0;i<nums.size();i++){
sum+=nums[i];
int needed=sum-goal;
if(mp.find(needed)!=mp.end()){
    cnt+=mp[needed];
}
mp[sum]++;
       }
       return cnt;
    }
};