#include<bits/stdc++.h>
using namespace std;


// int rob(vector<int> &nums){
//         int 
// }
int rob(vector<int> &nums){
        int sum1=0,sum2=0;
        for(int i=0;i<=nums.size();i=i+2){
            sum1+=nums[i];
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        for(int i=1;i<nums.size();i=i+2){
            sum2+=nums[i];
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        cout<<sum1<<" "<<sum2<<endl;
    return max(sum1,sum2);
}
int main(){
    vector<int> nums={2,7,9,3,1};
    cout<<rob(nums);
}