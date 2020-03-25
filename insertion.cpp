
#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

void insertion(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int item=a[i];
		int j=i-1;
		while(j>=0 && a[j]>item)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=item;
	}
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		a[i]=rand()%100;

	auto start = high_resolution_clock::now(); 
	insertion(a,n);
	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<microseconds>(stop - start);

	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"Time taken: "<<duration.count()<<" microseconds"<<endl;

	return 0;
}
