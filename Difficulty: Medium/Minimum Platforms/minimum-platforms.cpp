class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int platform=1;
        int n=arr.size();
        int ans=1;
        int a=1;//arrival;
        int d=0; //departure;
        
        while(a<n&&d<n){
            if(arr[a]<=dep[d]){
                platform++;
                ans=max(ans,platform);
                a++;
            }
            else{
                platform--;
                d++;
            }
        }
        return ans;
    }
};
