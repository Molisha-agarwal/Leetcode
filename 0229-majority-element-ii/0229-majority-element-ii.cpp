class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            if(cnt1==0 &&nums[i]!=el2){
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 &&nums[i]!=el1){
                el2=nums[i];
                cnt2=1;
            }    
            else if(nums[i]==el1) cnt1++;
            else if(nums[i]==el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
           
        }
        //manual checking of the elements is done if they are present in the array or  not
        vector<int>ls;
        int cnt3=0;
        int cnt4=0;
        for(int i=0;i<nums.size();i++){
            if(el1==nums[i]) cnt3++;
            if(el2==nums[i]) cnt4++;
        }
        int mini=(int)((nums.size()/3)+1);
            if(cnt3>=mini)
            ls.push_back(el1);
            if(cnt4>=mini) ls.push_back(el2);
            sort(ls.begin(),ls.end());
    return ls;
        
    }
};