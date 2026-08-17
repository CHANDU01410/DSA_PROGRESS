class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
while(low<=high){
    int middle=low+(high-low)/2;
    int missing=arr[middle]-(middle+1);
    if(missing<k){
        low=middle+1;
     
    }
       else high=middle-1;
    }
    return low+k;

    }
};