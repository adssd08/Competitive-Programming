#include<bits/stdc++.h>
using namespace std;

int subarray( int *arr, int n)
{
	int count = 0;
  
    
    for (int i=0; i<n; i++) 
    { 
        int product = arr[i]; 
        int sum = arr[i]; 
        for (int j=i+1; j<n; j++) 
        { 
           
            if (product==sum) 
               { 
			   count++;
			   } 
  
            product *= arr[j]; 
            sum += arr[j]; 
        } 
  
        if (product==sum) 
            {
			   count++;
		     }
    } 
    return count;
	
}



int main()
{
     int *arr,t,n;
	
	cin>>t;
	
	while(t)
	{
		cin>>n;
		arr = new  int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<subarray(arr,n)<<endl;
		delete[] arr;
		t--;
    }
    return 0;
}
