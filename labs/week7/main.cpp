#include <iostream> 
#include <fstream> 


using namespace std; 

int main () { 
    ofstream oFile; 
    ifstream iFile; 

    // assignment lab 5 

    /* 
    instructions 
    Get the input file name and open it into an input file variable.
     The file will need to be validated that it is opened,
      and an error message "Error: Invalid filename\n" will need to be output if an invalid file name is entered. The program should loop until the input file successfully opens.
     */

        string fileName; 
     while (true) { 
        cout << "Enter the input file name" << endl; 
        cin >> fileName; 
        iFile.open(fileName); // open the file   
        if (iFile.is_open()) { 
            break;
        } else { 
            cout <<"Error: Invalid filename\n"; // file does not open 
            iFile.clear();
        }
     }
        
        cin >> fileName;
     /*
     
     while (true) {
        cout << "Enter input filename: ";
        cin >> inputFileName;
        iFile.open(inputFileName);  // try to open the file
        if (iFile.is_open()) {
            break;  // success! exit the loop
        } else {
            cout << "Character Break File\n";  // file didn't open
        }
    }
        
    */

     
    return 0; 
}