#include <bits/stdc++.h>
// Tai sua dong nay
using namespace std;
void TimDB(int a[],int b[],int n)
{
	int l = 0;
	int kq[n];
	for (int i = 1; i < n; i++)
		if (b[i] < b[l]) l = i;
	int p = l, q;
	int j=0;
	do
	{
		kq[j] = p;
		j++;
		q = (p+1)%n;
		for (int i = 0; i < n; i++)
		{
			if((b[i] - b[p]) * (a[q] - a[i]) - (b[q] - b[i]) * (a[i] - a[p]) < 0)
			q = i;
		}
		p = q;

	} while (p != l);
	float s=0;
	for(int i =0 ;i<j;i++)
	{
	   cout<<a[kq[i]]<<" "<<b[kq[i]]<<endl;
    }
    for(int i =0 ;i<j-1;i++)
       s += a[i]*b[i+1]-a[i+1]*b[i];
    cout << s/2;   
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n],b[n],i;
	for(i=0;i<n;i++)
	{
		cout<<"Nhap toa do: ";
		cin>>a[i]>>b[i];
	}
	TimDB(a,b,n);
	return 0;
}
