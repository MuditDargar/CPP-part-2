#include<bits/stdc++.h>
 using namespace std; 
 class account
{
protected:
int acc_number, balance;
 
string holder; public: account()
{
cout<<"Enter account number:"; cin>>acc_number;
cout<<"Enter name of the account holder:"; cin>>holder;
cout<<"Enter balance:"; cin>>balance;
}
void getdata()
{
cout<<"Account:"<<acc_number<<" belongs to "<<holder<<" and balance is:"<<balance<<endl;
}
};
class saving:public account
{
protected:
int saving_rate; public:
saving()
{
cout<<"\nSaving Account"<<endl; cout<<"Enter rate of interest in (%):"; cin>>saving_rate;
balance= balance+balance*saving_rate;
}
void getdata()
{
cout<<"Account	number:"<<acc_number<<"	belong	to:"<<holder<<"	and	balance is:"<<balance<<" with interest rate of:"<<saving_rate<<"%"<<endl;
}
};
class fd:public account
{
protected:
int maturity_year; int breaking_year; public:
fd()
{
cout<<"\nFixed deposite"<<endl; cout<<"Enter maturity year of fd:"; cin>>maturity_year; breaking_year=maturity_year; cout<<"Enter withdraw of year you want:"; cin>>breaking_year;
}
void getdata()
{
if (breaking_year < maturity_year)
{
balance = balance-balance*0.1;
cout<<"You broke your fd before mature year,So You will be charged with 10%"<<endl;
 
account::getdata();
}
else
{
balance = balance+balance*0.1; account::getdata();
}
}
};
int main()
{
saving s1; fd f1;
s1.getdata();
f1.getdata();

return 0;
}
