#include<bits/stdc++.h>
using namespace std;


int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i(0);i<nums.size();i++){
            if(nums[i] > temp.back()){
                temp.push_back(nums[i]);
            }else{
                int ind = lower_bound(temp.begin(),temp.end(),nums[i]) - temp.begin();
                temp[ind] = nums[i];
            }
        }
        return temp.size();
    }


int main(){
    vector<int> nums={10,9,2,5,3,7,101,18};
    cout<<lengthOfLIS(nums);
    return 0;
}