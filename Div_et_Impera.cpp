#include<iostream>
using namespace std;
int n,v[1000002];
int suma(int i,int j)
{
int a, b;
if(i==j) return v[i];
else
{
a=suma(i,(i+j)/2);
b=suma((i+j)/2+1,j);
return a+b;
}
}
int main()
{
cin>>n;
for(int i=1;i<=n;i++)
cin>>v[i];
cout<<suma(1,n);
}
