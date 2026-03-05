#include <iostream> 
#include <fstream> 

using namespace std; 

int main () { 

    //Output files: ofstream
    // ofstream oFile;
    //Input files: ifstream
// read the name of the file 
cout << "Enter the number of a new fie" << endl; 

// Method 1 


/*
#include <fstream>
using namespace std;

ofstream oFile;        // declare the stream
oFile.open("data.txt"); // open a file for writing

oFile << "Hello file!"; // write to the file
oFile.close();          // close it


*/

 string fileName; 
 getline(cin, fileName); 


ofstream oFile("folder.txt");
oFile << fileName;


// method 3 : 


// ofstream file("folder.txt"); 
// file << fileName; 
// file.close(); s
    return 0; 
}