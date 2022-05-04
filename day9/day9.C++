#include<iostream>
using namespace std;
int main()
{
	int Arr[100],n,i,small,large;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}
	small=Arr[0];
	large=Arr[0];
	for(i=1;i<n;i++)
	{
		if(Arr[i]<small)
			small=Arr[i];
		if(Arr[i]>large)
			large=Arr[i];
	}
	cout<<"\nLargest element is :"<<large;
	cout<<"\nSmallest element is :"<<small;
    
	return 0;
}
