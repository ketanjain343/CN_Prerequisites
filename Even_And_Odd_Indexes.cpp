#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=0,n;
 	cin>>n;
  	long long int arr[n];
  	for(long long int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  
  	for(long long int i=0;i<n;i++)
    {
      if(i%2==0 && arr[i]%2==0)
      {
        a+=arr[i];
      }
      else if(i%2==1 && arr[i]%2==1)
      {
        b+=arr[i];
      }
    }
  cout<<a<<" "<<b;
	return 0;
}

