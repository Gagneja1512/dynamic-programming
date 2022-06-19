#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
	int prev_2 = 0 ;
	int prev_1 = arr[0] ;
	int n = arr.size() ;

	for(int i=1 ; i<n ; i++)
	{
		int include = prev_2 + arr[i] ;
		int exclude = prev_1 + 0 ;

		int ans = max(include , exclude) ;
		prev_2 = prev_1;
		prev_1 = ans ;
	}

	return prev_1 ;
}

int main()
{
	int n;
	cin>>n;

	vector<int> arr;
	for(int i=0 ; i<n ; i++)
	{
		int x;
		cin>>x;

		arr.push_back(x);
	}

	vector<int> first , last ;
	for(int i=0 ; i<n ; i++)
	{
		if(i != n-1)
			first.push_back(arr[i]);

		if(i != 0)
			last.push_back(arr[i]) ;	
	}

	int ans = max(solve(first) , solve(last));
	cout<<ans<<endl;
	return 0;
}

// TC = O(n) + O(n)
// SC = O(n) + O(n)