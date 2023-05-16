#include <iostream>
 #include <fstream> 
 #include <string>
using namespace std;
 int main()
{
string file1Name = "File1.txt"; string file2Name = "file2.txt";

// Open the first file for reading
 ifstream file1(file1Name);

// Open the second file for writing 
ofstream file2(file2Name);

// Check if both files were successfully opened 
if (file1.is_open() && file2.is_open())
{
string line;
while (getline(file1, line))
 
{
file2 << line << endl;
}

// Close both files after copying is complete
 file1.close();
file2.close();

// Print a success message
cout << "File copied successfully!" << endl;
}
else
{
// Print an error message if one or both files failed to open 
cout << "Failed to open files." << endl;
return 1;
}

// Open the copied file for reading 
ifstream copiedFile(file2Name);

// Check if the copied file was successfully opened 
if (copiedFile.is_open())
{
// Print the contents of the copied file
 cout << "Contents of copied file:" << endl; string line;
while (getline(copiedFile, line))
{
cout << line << endl;
}

// Close the copied file after reading is complete
 copiedFile.close();
}
else
{
cout << "Failed to open copied file." << endl; return 1;
}

return 0;
}
