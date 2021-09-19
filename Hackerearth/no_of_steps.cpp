// C++ implementation to find the
// minimum number of steps to convert
// array by subtracting the corresponding
// element from array B
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum steps
void minimumSteps(int ar1[], int ar2[], int n)
{
	
	// Counter to store the steps
	int ans = 0;
	
	// Flag to check that
	// array is converted
	bool flag = true;
	
	// Loop until the minimum of the
	// array is greater than -1
	while (*min_element(ar1, ar1 + n) > -1)
	{
		int a = *min_element(ar1, ar1 + n);
		
		// Loop to convert the array
		// elements by substraction
		for(int i = 0; i < n; i++)
		{
			if (ar1[i] != a)
			{
				ar1[i] -= ar2[i];
				ans += 1;
			}
		}
		
		set<int> s1(ar1, ar1 + n);
		
		// If the array is converted
		if (s1.size() == 1)
		{
			flag = false;
			cout << ans << endl;
			break;
		}
	}
	
	if (flag)
	{
		cout << -1 << endl;
	}
}
		
// Driver Code
int main()
{
	int n,i;
	cin>>n;
	
	int ar1[n];
	int ar2[n];
	for(i=0;i<n;i++){
        cin>>ar1[i];
    }
    
     for(i=0;i<n;i++){
        cin>>ar2[i];
    }
	
	// Function call
	minimumSteps(ar1, ar2, n);

	return 0;
}

// This code is contributed by rutvik_56
