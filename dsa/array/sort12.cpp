#include<bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{
    int m=0;
       int l=0;
       int h=n-1;
       while(m<=h)
       {
           if(a[m]==0)
             {
                 int temp=a[m];
                 a[m]=a[l];
                 a[l]=temp;;
                 l++;
                 m++;
            
             }
       
          else if(a[m]==1)
                {
                    m++;
                }
       
           else
              {
                  int temp=a[m];
                  a[m]=a[h];
                  a[h]=temp;
                  h--;
              }
       }
   for(int i=0;i<n;i++)
   {
       cout<<a[i];
   }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   
   sort(a,n);
}