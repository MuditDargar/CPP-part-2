#include<iostream>
 using namespace std;
class Student// Class declaration for Student
{
int roll_no;
char name[100]; public:
void getdata();// Function to input student data
 void putdata();// Function to output student data
};
// Definition of function to input student data 
void Student::getdata(){
cout << "Enter Roll Number : ";
 cin >> roll_no;
cout << "Enter Name : "; cin >> name;
}
// Definition of function to output student data 
void Student::putdata(){
cout << roll_no << " "; cout << name << " "; cout << endl;
}

int main(){
// Declare an array of objects of class Student
 Student name[100];
int n, i;
cout << "Enter Number of Students - "; cin >> n;
// Input data for all the students
 for(i = 0; i < n; i++)
name[i].getdata();
// Output the data for all the students 
cout<< endl<< "Student Data - " << endl;

for(i = 0; i < n; i++)
name[i].putdata();
}
