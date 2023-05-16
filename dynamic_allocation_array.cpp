#include <iostream> 
using namespace std; 
int *dup(int ar[], int n)
{
// Dynamically allocate memory for an integer array of size 1000 
int* arr = new int[1000];
// Initialize all elements of the array to 0
 for (int i = 0; i < 1000; i++)
arr[i] = 0;

// Traverse the given array and increment the count of each element in the arr array 
for (int i = 0; i < n; i++)
arr[ar[i]]++;

// Return the pointer to the arr array 
return arr;
}
 
int main()
{
int n; cin >> n;

// Declare an integer array of size n
 int ar[n];

// Input the elements of the array from the user 
for (int i = 0; i < n; i++)
{
cin >> ar[i];
}

// Call the dup function and store the pointer to the returned array in ptr 
int *ptr = dup(ar, n);

// Print the count of each element in the array
cout<<" element"<<" number of times repeated"<<endl; for(int i=0;i<1000;i++){
if(ptr[i]!=0)
cout<<" "<<i<<"	"<<ptr[i]<<endl;
}

// Free the dynamically allocated memory
 delete[] ptr;

return 0;
}
