class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans; //to store the elements as answer 
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            //check if answer array is empty so that new element is pushed and also chack for the non overlapping intervals
           if(ans.empty()||ans.back()[1]<intervals[i][0])
              ans.push_back(intervals[i]);
           else
           //interval ko expand karna padega naa to fit the elements
               ans.back()[1] =max(ans.back()[1],intervals[i][1]); 
        }
         return ans;  
    }
};