#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std; 
   
int linearSearch(int arr[], int first,  
              int last, int key) 
{ 
    if (last < first) 
        return -1; 
    if (arr[first] == key) 
        return first; 
    if (arr[last] == key) 
        return last; 
    return linearSearch(arr, first+ 1, last - 1, key); 
} 
  
int main() 
{   

        int key,n;
	cout<<"Enter the array size and key"<<endl;
	cin>>n>>key;
	int arr[n];
	cout<<"enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
        auto start = high_resolution_clock::now(); 
	int a = linearSearch(arr, 0, n - 1, key); 
         if (a != -1) 
         cout << "Element " << key << " is present at index "<< a; 
         else
         cout << "Element" << key << " is not present" <<endl; 
	auto stop = high_resolution_clock::now(); 
	auto duration = duration_cast<microseconds>(stop - start); 
	cout << "Time taken : "<< duration.count() << " microseconds" << endl;
          return 0; 
} 
