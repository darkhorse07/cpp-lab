#include<iostream>
using namespace std;

int main()
{
  int m,n,x,i,j,k;
  cin >> m >> n >> x;

  int a[m][n],b[n][x];

   for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      cin >> a[i][j] ;

    for(i=0;i<n;i++)
      for(j=0;j<x;j++)
      cin >> b[i][j];
    int p[m][x],s=0;
   for(i=0;i<m;i++)
   {
    for(j=0;j<x;j++)
     {
       for(k=0;k<n;k++)
       {
         s = s + (a[i][k] * b[k][j]);
       }
       p[i][j] = s;
       s =0;
     }
   }
   for(i=0;i<m;i++)
   {
     for(j=0;j<x;j++)
       cout << p[i][j] << " " ;

      cout << endl;
   }
  return 0;
}
