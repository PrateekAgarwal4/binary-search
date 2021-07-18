#include<iostream>

using namespace std;

int binarysearch(int a[],int n,int key )
{
	int l,h,m;
	l=0;
	h=n-1;
	while(l<=h){
		m=(l+h)/2;
	if(a[m]==key)
	{
		return m;
	}
	else if(a[m]<key)
	{
		l=m+1;
	}
	else
	{
		h=m-1;
	}
	}
	return 0;
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
	int key;
	cin>>key;
	int ans=binarysearch(a,n,key);
	cout<<ans;
}
