#include<bits/stdc++.h>
using namespace std;

int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        int req[rocks.size()];
        for(int i=0;i<rocks.size();i++){
            req[i]= capacity[i]-rocks[i];
        }
        sort(req,req+rocks.size());
        for(int i=0;i<rocks.size();i++){
            if(req[i]<=additionalRocks){
                additionalRocks-=req[i];
                count++;
            }
        }
        return count;
    }


int main(){
    vector<int> capacity={54,18,91,49,51,45,58,54,47,91,90,20,85,20,90,49,10,84,59,29,40,9,100,1,64,71,30,46,91};
    vector<int> rocks={14,13,16,44,8,20,51,15,46,76,51,20,77,13,14,35,6,34,34,13,3,8,1,1,61,5,2,15,18};
    int additionalRocks=77;
    cout<<maximumBags(capacity,rocks,additionalRocks);
    return 0;
}