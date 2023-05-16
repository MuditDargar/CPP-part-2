#include <iostream>	// includes the input/output stream library 
using namespace std; // uses the standard namespace

class nest{	// defines a class called nest
int a, b, c;	// defines three integer variables a, b, and c
inline int Avg(int a, int b, int c){	// defines an inline function called Avg that takes in three integer parameters and returns their average
return ((a+b+c)/3);
}

public:
void input_num(){ // defines a public member function called input_num that takes no parameters and prompts the user to enter three numbers
cout<< "Enter the three numbers: " << endl;
cin >> a >> b >> c;	// reads in three numbers from the user and stores them in a, b, and c
}

void display_num() {	// defines a public member function called display_num that takes no parameters and displays the average of the three numbers
int Average = Avg(a,b,c);	// calculates the average of the three numbers using the Avg function cout<< "The average of the three numbers is: " << Average;	// displays the calculated average
}
};

int main(){	// the main function
nest A1;	// creates an object of the nest class called A1
A1.input_num();	// calls the input_num member function of the A1 object to get user input 
A1.display_num(); // calls the display_num member function of the A1 object to display the calculated average

return 0;	// returns 0 to the operating system
 } 