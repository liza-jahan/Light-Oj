#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,i,t;
 cin>>t;
 for(i=1;i<=t;i++)
 { long long int b,n,sum=0,j;
  cin>>n;
  for(j=2;j<n;j++)
 {
  if(n%j==0)

  sum = sum+j;
     }


 cout<<"Case "<<i<<":"<<" "<<sum<<endl;




 }



return 0;

}
