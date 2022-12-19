#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxA=0;
        while(l<r){
            int leftH=height[l];
            int rightH=height[r];
            int area=min(leftH,rightH)*(r-l);
            maxA=max(maxA,area);
            if(leftH < rightH) l++;
            else r--;
        }
        return maxA;
    }

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);
    return 0;
}