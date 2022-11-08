#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &a, pair<int,int> &b) {
    double r1 = (double)a.first / a.second;
    double r2 = (double)b.first / b.second;
    return r1 > r2; 
}

int knapsack( vector<pair<int,int>> pw){
    int W=60;
    
    sort(pw.begin(),pw.end(),comp);
    cout<<"After Sorting"<<endl;
    for(auto x:pw){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    int cW=0;
    double fP=0.0;

    for(int i=0;i<pw.size();i++){
        if(cW+pw[i].second<=W){
        cW+=pw[i].second;
        fP+=pw[i].first;
        }
        else{
        int remain= W-cW;
        fP+=(pw[i].first)/(double)pw[i].second*(double)remain;
        break;
        }
    }
    cout<<fP<<endl;
    return 0;
}

int main(){
    vector<pair<int,int>> pw={{280,40},{100,10},{120,20},{120,24}};
    for(auto x:pw){
        cout<<x.first<<" "<<x.second<<endl;
    }
    sort(pw.begin(),pw.end(),comp);
    knapsack(pw);
}
