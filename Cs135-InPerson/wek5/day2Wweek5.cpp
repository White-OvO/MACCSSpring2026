#include<iostream>

using namespace std;

int main() { 



int Year = 0;
 cout << "Enter a year: " << endl;
 cin >> Year;


 if (Year % 100 == 0 && Year % 400 == 0 || Year % 4 == 0)
{
    cout << Year << " is a leap year." << endl;
    }




else {
cout << Year << " is not a leap year." << endl;
}



//  // check if a loan should be approved or rejected . read salary and credit score from the user 
//  int salary = 0;
//  int creditScore = 0; 
//  //First check if the salary is at least 40,000.


//  cout << "Enter your salary " << endl; 
//      cin >> salary; 

//  cout <<"Enter your credit score " << endl; 
//     cin >> creditScore; 

//     if (salary >= 40000) {
//         //If yes, then check if the credit score is at least 700.
//         //If yes, print "Approved".
//         if (creditScore >= 700) { 

//             cout << "Approved" <<endl;
//         }
//         //Otherwise, print "Credit score too low".
 
//         else if (creditScore < 700){ 
//             cout << "Credit score too low" << endl; 
//         }
//     }
//     //credit score is at least 750
//     else if (creditScore >= 750) { 
//         cout << "Approved" << endl; 
//         if (creditScore < 750) { 
//             cout << "Reject" << endl;
//         }
//     }
// else { 
//     cout << "Rejected" << endl; 
// }
    //if no 
// cout << "hello world " << endl; ?


double GPA = 0.0;
int CompletedProjects = 0;
int InterviewScore = 0;
cout << "Enter your GPA" << endl; 
cin >> GPA;
cout << "Enter InterviewScore" << endl;
cin >> InterviewScore;

if (GPA >= 3.0){

    if (GPA >= 3.8){
    if (InterviewScore >= 70){
cout << "Selected (High Academic Excellence)" << endl;
}
else if (InterviewScore < 70){
    cout << "Rejected: Interview performance too low" << endl;
}
}


}
else if (GPA < 3.0) {
    cout << "Rejected: GPA too low" << endl; 
   // cout << "Rejected: Interview performance too low" << endl; 
}



// else (GPA < 3.0) {
// cout << "Rejected: GPA too low" << endl;
// }


    return 0; 
}