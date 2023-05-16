#include<iostream>
using namespace std ;
class customer{
    protected:
     string name,Address,PAN ;
     int  dob;

public:
customer(){
  
    cout<<"enter the name of user "<<endl;
    cin>>name;
    cout<<"enter the address"<<endl;
    cin>>Address ;
    
    cout<<"enter the PAN"<<endl;
    cin>>PAN ;

    cout<<"enter the DOB"<<endl;
    cin>>dob;

}
void get(){
    cout<<"the name of user is "<<name<<endl<<"the address is "<<Address<<endl<<"the PAN is"<<PAN<<
    endl<<"the DOB is "<<dob<<endl;
}
};
class Account: public customer{
  protected:
      string account_number;
      int balance ;

Account(){
       cout<<"enter the balance"<<endl;
       cin>>balance ;
       for (int i = 0; i <12; i++)
       {
        account_number +=(char(48+rand()%10));
       }
        
}
void get_account(){
    customer::get();
    cout<<"the account number is"<<account_number<<endl
    <<"your balance is"<<balance<<endl;
}

};
class saving:public Account{
    protected:
    int interest,rate=0.08 ,year;
    public:
    saving(){
        cout<<"saving account"<<endl;
        year=1+4*rand()%10 ;
        interest=balance*rate*year;
    }
    void display(){
        get_account();
        {
            cout<<"total balance after"<<year<<"year is "<<balance+interest<<endl;
        }
    }
};

class fixedaccount:public Account {
    protected:
    int maturity_amount,years,breaking_year,charge ;
    public:
    fixedaccount(){
        cout<<"fixed account"<<endl;
        cout<<"enter the maturity year of amount"<<endl;
        cin>>years;
        cout<<"enter the FD breaking year"<<endl;
        cin>>breaking_year;
        maturity_amount=balance+balance*0.3 ;
        charge=0.3*balance ;
    }
    void display(){
           get_account();
           {
            if(breaking_year < years)
            {
                cout<<"the fd is broken "<<years-breaking_year<<"the charge is  " <<charge;
            }
            else{
                cout<<maturity_amount<<endl;
            }
           }
    }
};

int main(){
customer s1;
fixedaccount f1;
f1.display();
s1.get();
return 0;
}