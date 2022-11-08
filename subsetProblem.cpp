#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={11, 17, 5, 8, 6, 4, 7, 12, 3};
    // for(auto x : v){
    //     cout<<x<<" ";
    // }
    vector<int> arr;
    int b=0;
    vector<int> c;
    for(int i=0;i<v.size();i++){
        for(int j=i; j<v.size();j++){
            if(v[i] <= v[j]-1){
                b++;
                // c[]=
                cout<<v[i]<<" < "<<v[j]<<endl;
            }
            else{
                cout<<v[i]<<" > "<<v[j]<<endl;
            }
        }
        cout<<endl;
    }
    // cout<<b;
    // for(auto x : arr){
    //     cout<<x<<" ";
    // }
    
}