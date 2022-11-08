#include<bits/stdc++.h>
using namespace std;


void merge(int D[],int l, int mid, int h){
    int m = mid+1-l;
    int n = h-mid;
    int A[m];
    int B[n];

    for(int i=0;i<m;i++){
        A[i] = D[l+i];
    }
    for(int j=0; j<n;j++){
        B[j] = D[mid+1+j];
    }
    // int C[h-1];
    
    int i=0,j=0,k=l;
    while( i<m && j<n){
        if(A[i]<=B[j]){
            D[k++]=A[i++];
            // k++;
            // i++;
        }
        else{
            D[k++]=B[j++];
            // k++;
            // j++;
        }
    }
    
    while(i<m){
        D[k++]=A[i++];
    }

    while(j<n){
        D[k++]=B[j++];
    }

    // cout<<"Merge called"<<endl;
        
}

void mergeSort(int D[],int l,int h){
    if(l>=h){
        return;
    }
    int mid=l+(h-l)/2;
    mergeSort(D,l,mid);
    mergeSort(D,mid+1,h);
    merge(D,l,mid,h); 
}

int main(){
    // int A[]={2,8,15,18};
    // int B[]={5,9,12,17};
    // int m = sizeof(A)/sizeof(A[0]);
    // int n = sizeof(B)/sizeof(B[0]);
    // merge(A,B,m,n);
    int D[]={9,3,7,5,6,4,8,2};
    int n= sizeof(D)/sizeof(D[0]);
    // cout<<d_Size<<endl;
    mergeSort(D,0,n);

    for(int i=0;i<n;i++){
        cout<<D[i]<<" ";
    }cout<<endl;

    return 0;
}