#include<iostream>
using namespace std; 
int main ()
{
  int n,count;
  cin>>n;
  int a[n],i,j;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
      count=0;
      for(j=i+1;j<n;j++)
      {
          if(a[i]==a[j])
          {
              count=count+1;
          }
      }
      if(count==1)
      {
          cout<<a[i];
          break;
      }else
      {
          cout<<"unique";
          break;
      }
      
     }
     

    return 0;
}
