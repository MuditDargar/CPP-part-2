#include <iostream>
 using namespace std;

class Employe
{
private:
// Declare pointers for the company ID and employee ID 
int *ptr1, *ptr2;
// Declare strings for the company name, employee name, and company address 
string Cname, Ename, Address;

public:
 
// Default constructor
 Employe()
{
// Initialize the pointers to null ptr1 = new int;
ptr2 = new int;
// Initialize the strings to empty Cname = "";
Ename = ""; Address = "";
// Initialize the IDs to 0
*ptr1 = 0;
*ptr2 = 0;
}

// Constructor with parameters
Employe(string Ena, string Cna, string add, int ci, int ei)
{
// Allocate memory for the ID pointers 
ptr1 = new int;
ptr2 = new int;
// Initialize the strings and IDs with the given values
 Cname = Cna;
Ename = Ena;
Address = add;
*ptr1 = ei;
*ptr2 = ci;
}

// Display method to print the information of the employee and company 
void display()
{
cout << endl
<< "Name of the Employe is : " << Ename << endl; cout << "Name of the Company is : " << Cname << endl;
cout << "Address of the Company is : " << Address << endl; cout << "EID of the Employe is : " << *ptr1 << endl;
cout << "CID of the Company is : " << *ptr2 << endl;
}
};

// Main function 
int main()
{
// Declare variables to store input values 
int EID, CID;
string Ename, Cname, address;

// Prompt the user to enter information for the employee and company 
cout << "Enter the name of the Employe : ";
cin >> Ename;
cout << "Enter the name of the Company : "; cin >> Cname;
cout << "Enter the address of the Company : "; cin >> address;
 
cout << "Enter the EID of the Employe : "; cin >> EID;
cout << "Enter the CID of the Company : "; cin >> CID;

// Create an object of the Employe class using the default constructor 
Employe *e1 = new Employe();
// Create an object of the Employe class using the parameterized constructor
 Employe e2(Ename, Cname, address, CID, EID);

// Display the information of the objects 
e1->display();
e2.display();

// Free the memory allocated for the object created with the default constructor
 delete e1;
return 0;
}
