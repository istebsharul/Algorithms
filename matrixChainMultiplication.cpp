#include <bits/stdc++.h>
using namespace std;

int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int minE = INT_MAX;
	int count;
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		minE = min(count, minE);
	}
	return minE;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 3 };
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << "Minimum no. of multiplications is "
		<< MatrixChainOrder(arr, 1, N - 1);
	return 0;
}




































// #include<bits/stdc++.h>
// using namespace std;

// // void mcM(vector<int> &v, vector<int, int> &m,vector<int, int> &s){
    
//     // int j, min, q;
//     // for(int d=1; d<v.size()-1;d++){
//     //     for(int i=1; i<v.size()-d;i++){
//     //         int j=i+d;
//     //         for(int k=i;k<=j-1;k++){
//     //             q=m[i][j]+m[k+1][j]+v[i-j]*v[k]*v[j];
//     //             if(q<min){
//     //                 min=q;
//     //                 s[i][j]=k;
//     //             }
//     //         }
//     //         m[i][j]=min;
//     //     }
//     // }
//     // cout<<m[1][v.size()-1];
// // }

// // Brute force Approach
// // Remarks : Not Working 
// int main(){
//     vector<int> v={5,4,6,2,7};
//     int m[5][5]={0};
//     int s[5][5]={0};
//     int j, min, q;
//     for(int d=1; d<v.size()-1;d++){
//         for(int i=1; i<v.size()-d;i++){
//             j=i+d;
//             min=23767;
//             for(int k=i;k<=j-1;k++){
//                 q=m[i][j]+m[k+1][j]+v[i-j]*v[k]*v[j];
//                 if(q<min){
//                     min=q;
//                     s[i][j]=k;
//                 }
//             }
//             m[i][j]=min;
//         }
//     }
//     cout<<m[1][v.size()-1];
//     // return 0;
// }