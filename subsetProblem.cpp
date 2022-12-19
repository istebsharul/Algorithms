#include<bits/stdc++.h>
using namespace std;

// T.C-> nlogn
// S.C->

    // vector<int> v={11, 17, 5, 8, 6, 4, 7, 12, 3};
    // vector<int> temp;
    // temp.push_back(v[0]);
    // int count=1;
    // for(int i=1;i<v.size();i++){
    //     if(v[i]>=temp.back()){
    //         temp.push_back(v[i]);
    //         count++;
    //     }
    //     else {
    //         int ind =lower_bound(temp.begin(),temp.end(),v[i]);
    //         temp[ind]=v[ind];
    //     }
    // }
    // return count;

class Solution {
public:

    int f(int i, vector<int> &nums, int p_i){
        if(i==nums.size()) return 0;
        int l = 0+f(i+1,prev);
        if(p_i==-1 || nums[i]>nums[p_i]){
            int l= max(l, 1+f(i+1,prev));
        }
        return len;
    }
    int lengthOfLIS(vector<int>& nums){
        
    }
};

int main(){



}