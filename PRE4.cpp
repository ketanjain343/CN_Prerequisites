/*
There are �n� number of villages. You are given an array of size �n� representing the population of each village. Every year, there is a cricket competition between two teams and villagers come to see the match. Villagers from ith village and (n-i)-1th village (0 <= i < n/2) are combined and then formed groups of 10 people each. For e.g. villagers from village 0 and n-1, 1 and n-2, 2 and n-3 are combined. The number of villages are always even. So, clearly there will be n/2 combinations from all the villages. You have to tell that how many groups will be formed in each combination and how many villagers will be left without the complete group of 10 peoples.
Input Format:

First line will have a single integer �n� denoting the number of villages.
Second line will have �n� space separated integers denoting the population of villages.

Output format:

Print �n/2� lines of two space separated integers, first will be no. of groups and second will be villagers left without group. First line will have the result of combination of 0 and n-1, second will have 1 and n-2 and so on.

Constraints:

1 <= n <= 10^5
1 <= Ai <= 10^6
�n� will always be even

Sample Input:

10
26 96 18 24 87 51 44 86 75 32

Sample Output:

5 8
17 1
10 4
6 8
13 8
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
  	cin>>n;
	long long int arr[n];
  	for(long long int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  	for(long long int i=0;i<(n/2);i++)
    {
      cout<< ( arr[i] + arr[n-1-i] )/10 <<" " <<( arr[i] + arr[n-1-i] )%10<<endl; 
    }
  
	return 0;
}

