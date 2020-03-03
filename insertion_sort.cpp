#include<iostream>
using namespace std;
 
void insertionsort(int arr[],int n)
{
int i,key,j;
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;

while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}

void display(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
  cout<<arr[i]<<"";
cout<<endl;
}

int main()
{
	int n,i;
        
	cout<<"enter the number of elements in the array"<<endl;
	cin>>n;
        int arr[n];
	cout<<"enter the elements"<<endl;
		for(i=0;i<n;i++)
		{
		cin>>arr[i];
		}
	insertionsort(arr,n);
	display(arr,n);
	return 0;

}
