class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int,int>>act;
        for(int i=0;i<start.size();i++){
            act.push_back({finish[i], start[i]});
        }
        sort(act.begin(), act.end());
        int count=1;
        int lastFinish = act[0].first;
        for(int i=1;i<start.size();i++){
            if(act[i].second>lastFinish){
                count++;
                lastFinish=act[i].first;
            }
        }
        return count;
    }
};