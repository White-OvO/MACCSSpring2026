#include <iostream> 

using namespace std; 


int main () { 
int times = 0;
int a = 0; 
string name = "christopher"; 
    while (times <= 9){ 
        cout << name; 
        times ++;
        cout <<"\n";
}


// two inputs 
// base 
// exponents 

int base = 0; 
int exponent; 
int times2 = 0;
// this will not print the ans 
cout << " enter base " << endl; 
cin >> base; 

cout << " enter exponent" << endl; 
cin >> exponent; 
int result =1; 
while ( times2 <= exponent )  { 

   
    result = base * result; 
    
    times2++;
    
   
} 
cout << " Ans is : " << endl;
cout <<"\n"<< result << endl; 


// in class answer 
// ===========================
// Outer loop variable i= 0
//printing j= 0
//printing j=1

// ===========================
// Outer loop variable i= 1
//printing j= 0
//printing j=1

// ===========================
// Outer loop variable i= 2
//printing j= 0
//printing j=1
// ===========================
// Outer loop variable i= 3
//printing j= 0
//printing j=1
// ===========================
// Outer loop variable i= 4
//printing j= 0
//printing j=1

// The loop is done



// 

// string name = " " ;
// int numberEntered ;
// int count ; 
// count << "Enter name " << endl;
// cin >> name; 
// count << "Enter number of times" << endl; 
// cin >> numberEntered; 
// while (count < numberEntered ) { 
// cout << name ;
//     count ++;
// }
    return 0;
}