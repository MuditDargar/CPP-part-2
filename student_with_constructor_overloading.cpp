#include <iostream>
 using namespace std;

class Student
{
private:
 
string name, branch, address; int rollno;

public:
Student()
{
name = "0";
branch = "0";
rollno = 0;
address = "0";
}

Student(string na, string bra, string add, int rol)
{
name = na; branch = bra; rollno = rol; address = add;
}

void display()
{
cout << endl
<< "Name of the student is " << name << endl; cout << "Rollno of the student is " << rollno << endl;
cout << "Address of the student is " << address << endl; cout << "Branch of the student is " << branch << endl;
}

void modify()
{
int mod;
cout << "Enter 1 for Name \n 2 for address \n 3 for rollno \n 4 for branch "; cin >> mod;
switch (mod)
{
case 1:
cout << "Enter the name of the student "; cin >> name;
break; case 2:
cout << "Enter the address of the student "; cin >> address;
break; case 3:
cout << "Enter the rollno of the student "; cin >> rollno;
break; case 4:
cout << "Enter the branch of the student "; cin >> branch;
break; default:
break;
}
 
display();
}
};

int main()
{
string na, bra, add; int ro;
cout << "Enter the name of the student "; cin >> na;
cout << "Enter the rollno of the student "; cin >> ro;
cout << "Enter the address of the student "; cin >> add;
cout << "Enter the branch of the student "; cin >> bra;
Student su1(na, bra, add, ro); Student su2;
su1.display(); su2.display(); su1.modify(); return 0;
}
