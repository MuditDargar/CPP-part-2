#include <iostream>
 #include <fstream> 
 using namespace std;

int main()
{
// Declare file name
string fileName = "example.txt";
// Open file in read mode
 ifstream inFile(fileName);
 if (inFile.is_open())
{
// Read file contents
cout << "File contents (read mode):" << endl; 
string line;
while (getline(inFile, line))
{
cout << line << endl;
 
// Close file 
inFile.close();
}}
else
{
cout << "Failed to open file for reading" << endl;
}
// Open file in write mode 
ofstream outFile(fileName); 
if (outFile.is_open())
{
// Write data to file
cout << "Writing to file (write mode)..." << endl; outFile << "This is a test file." << endl;
// Close file 
outFile.close();
}
else
{
cout << "Failed to open file for writing" << endl;
}
// Open file in binary mode
fstream binFile(fileName, ios::binary | ios::in | ios::out); if (binFile.is_open())
{
// Read data from file
cout << "File contents (binary mode):" << endl; 
char buffer[256];
binFile.read(buffer, sizeof(buffer));
 cout << buffer << endl ;
// Write data to file
cout << "Writing to file (binary mode)..." << endl; 
binFile.write("New data", 8);
// Close file 
binFile.close();
}
else
{
cout << "Failed to open file for binary I/O" << endl;
}
return 0;
}
