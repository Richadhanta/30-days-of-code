#include<iostream>
using namespace std;
int main()
{
	int Arr[100],n,i,sum=0;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}
	for(i=0;i<n;i++)
		sum+=Arr[i];
	cout<<"\nThe sum of Array is :"<<sum;
	cout<<"\nThe average of Array is :"<<sum/i;
	return 0;
}
