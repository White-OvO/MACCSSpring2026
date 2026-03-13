#include<iostream> 
//#include<iomanip> 
#include<fstream>


using namespace std;

int main () { 

    int input ; 
    
    cout << "K/D File 1/2/3? " << endl;
    cin >> input; 
if (cin.fail() || (input != 1 && input != 2 && input != 3) {
    cin.clear();
    cout << "Error: invalid selection\n" << endl;

}



switch(input) { 
    
    case 1: 
    break;
    case 2: 
    break;
    case 3:
    break; 
} 

cout << "Average k/d:"<< endl;
    return 0; 
}