#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap();
int main()
{
	int n;
	cout<<	"enter the size of square matrix|  ";
 cin>>n;
	int a[n][n],i,j,c=0;

	cout<<"enter elements of array";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"matrix-  "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
  for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			c=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=c;
		}
	}
	
	cout<<"transpose- "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
