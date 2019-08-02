#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
   cin>>n;
  long long int a=0;
   long long int arr[n][n];
  	for(long long int i=0;i<n;i++)
    {
      for(long long int j=0;j<n;j++)
      {
        cin>>arr[i][j];
        if(i==0 || i==n-1 || j==0 || j==n-1 || i==j || i+j==n-1)
        {
          a = a+arr[i][j];
        }
      }
    }
  cout<<a;
	return 0;
}

