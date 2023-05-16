#include <iostream>
 #include <string>

using namespace std; 
class checking
{
private:
const string m_id; // constant string member variable

public:
// Constructor with initialization list 
checking(const string id) : m_id(id)
{
cout << "Constructor called: " << m_id << endl;
}

// Destructor
~checking()
{
 
cout << "Destructor called: " << m_id << endl;
}
};

// Global object of checking class 
checking globalObj("Global_object");

// Main function
 int main()
{
cout << "Starting main function" << endl;

// Automatic object of checking class checking autoObj("Auto_Object");

{
cout << "Entering new scope" << endl;

// Static object of checking class
static checking staticObj("Static_Object");

// Register object of checking class
register checking regObj("Register_Object");

cout << "Leaving new scope" << endl;
}

cout << "Exiting main function" << endl;

return 0;
}
