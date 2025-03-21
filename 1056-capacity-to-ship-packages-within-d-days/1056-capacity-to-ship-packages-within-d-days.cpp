class Solution {
public:
    int shipWithinDays(vector<int>& arr, int k) {
         int N= arr.size();
        if(k>N){
            return -1;
        }
        int start=0,end=0,mid,ans;
        for(int i=0; i<N; i++){
            if(start<arr[i])
                start=arr[i];
            end+= arr[i];
        }
        
        while(start<=end){
            mid= start+(end-start)/2;
            int count=1,page=0;
            for(int i=0; i<N;  i++){
                page+=arr[i];
                if(page>mid){
                    count++;
                    page=arr[i];
                }
            }
            
            if(count<=k){
                ans=mid;
                end=mid-1;
            } else{
                start=mid+1;
            }
            
        }
        return ans;
    }
};