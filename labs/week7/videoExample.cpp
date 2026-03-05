#include <iostream> 
#include <fstream> 

using namespace std; 


int main () { 


    ifstream iFile; // input file 
    ofstream oFile; // output file 


    // open the input file 
    iFile.open("Error.txt"); 

    if(iFile.is_open()) { 
        if(!oFile.is_open()) { 
            cout << "Error opening input file \n" << endl; 
            return 0; 
        }

    // after the file opens 
    oFile.open("out.txt"); 
    if (!oFile.is_open()) { 
        cout << "Error opening output file \n" << endl; 

    }  
    
    //read input from file 
int i_fromFile = 0; 
while (iFile >> i_fromFile) { 
    // mutiply data by 2
    oFile << i_fromFile * 2 << endl; 

}

// 
    }

    iFile.close(); 
    oFile.close();

    return 0;
}