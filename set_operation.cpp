#include <bits/stdc++.h>
 using namespace std;
  class Set
{
private: int *arr; int size;
 
public:
//Constructor for initializing the size of array 
Set(int s)
{
size = s;
arr = new int[size];
}
//Constructor for initializing the size and values of array 
Set(int s, int *values)
{
size = s;
arr = new int[size];
for (int i = 0; i < size; i++)
{
arr[i] = values[i];
}
sort(arr, arr + size);
}

// Overloaded operator+ for set union operation 
Set operator+(const Set &other)
{
int *temp = new int[size + other.size]; int i = 0, j = 0, k = 0;
while (i < size && j < other.size)
{
if (arr[i] < other.arr[j])
{
temp[k++] = arr[i++];
}
else if (other.arr[j] < arr[i])
{
temp[k++] = other.arr[j++];
}
else
{
temp[k++] = arr[i++]; j++;
}
}
while (i < size)
{
temp[k++] = arr[i++];
}
while (j < other.size)
{
temp[k++] = other.arr[j++];
}
Set unionSet(k, temp);
 delete[] temp;
return unionSet;
}

// Overloaded operator- for set intersection operation
 
Set operator-(const Set &other)
{
int *temp = new int[size]; int i = 0, j = 0, k = 0;
while (i < size && j < other.size)
{
if (arr[i] < other.arr[j])
{
i++;
}
else if (other.arr[j] < arr[i])
{
j++;
}
else
{
temp[k++] = arr[i++]; j++;
}
}
Set intersectionSet(k, temp); delete[] temp;
return intersectionSet;
}

// Function to print the value of the array 
void print()
{
for (int i = 0; i < size; i++)
{
cout << arr[i] << " ";
}
cout << endl;
}

// Destructor to delete the dynamically allocated memory
~Set()
{
delete[] arr;
}
};

int main()
{
int s1, s2;
cout << "Enter the values of s1 and s2 : "; cin >> s1 >> s2;
int values1[s1];
cout << "Enter the values of array 1 : "; for (int i = 0; i < s1; i++)
{
cin >> values1[i];
}

int values2[s2];
 
cout << "Enter the values of array 2 : "; for (int i = 0; i < s2; i++)
{
cin >> values2[i];
}

Set a(s1, values1); Set b(s2, values2);

Set c = a + b; // set union operation
Set d = a - b; // set intersection operation

// Printing the result of set operations
 cout << "Set union: ";
c.print();

cout << "Set intersection: ";
 d.print();

return 0;
}
