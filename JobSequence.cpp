#include<bits/stdc++.h>
using namespace std;


struct Job {
	char id; 
	int dl; 
	int pr; 
};


bool compare(Job a, Job b)
{
	return (a.pr > b.pr);
}

void JobSchedule(Job arr[], int n)
{
	
	sort(arr, arr + n, compare);

	int result[n]; 
	bool done[n]; 

	
	for (int i = 0; i < n; i++)
		done[i] = false;

	for (int i = 0; i < n; i++) {
		
		for (int j = min(n, arr[i].dl) - 1; j >= 0; j--) {
			
			if (done[j] == false) {
				result[j] = i; 
				done[j] = true; 
				break;
			}
		}
	}

	int maxProfit=0;
	for (int i = 0; i < n; i++)
	{	if (done[i]){
            maxProfit+=arr[result[i]].pr;
			cout << arr[result[i]].id << " ";
        }
    }

    cout<<"\nMaximum Profit is "<<maxProfit<<endl;
}


int main()
{
	Job arr[] = { { 'a', 2, 100 },
				{ 'b', 1, 19 },
				{ 'c', 2, 27 },
				{ 'd', 1, 25 },
				{ 'e', 3, 15 } };

	int n = sizeof(arr) / sizeof(arr[0]);
	
	JobSchedule(arr, n);
	return 0;
}


