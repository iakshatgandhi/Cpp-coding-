/* Sample Input 1
3   is the total number of test cases
1 2
100 200
10 40
Sample Output 1
3
300
50 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
   int a,b;
   while(t--){
    int sum=0;
    cin>>a>>b;
    sum=a+b;
    cout<<sum<<"\n";
   }
   return 0;
}