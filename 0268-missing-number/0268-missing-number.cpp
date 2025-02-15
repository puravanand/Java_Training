class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sum of total numbers-sum of array = missing number
        int arr_n= nums.size();//size of array
        // sum of total numbers
        int n=arr_n;
       int total =n*(n+1)/2;
       int total_arr=0;
       for(int i=0; i<arr_n; i++){
total_arr= nums[i]+total_arr;
       }
       return  total-total_arr;

    }
};