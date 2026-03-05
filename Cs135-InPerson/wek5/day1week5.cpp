#include <iostream> 

using namespace std; 

int main() { 

    // cout <<"Hello world" << endl;
    int a = 0;
    int b = 0;
    cin >> a; 
    cin >> b;
    if(a > b) { 
        cout <<"The value of a is greater than the value of b " << endl; 
    }

    // delcare a double variable and name it as withdrawl_amount
    double withdrawl_amount; 
    // another vairable initial_amount
    double inital_amount; 

    // prompt user to input variables
    cout << "Withdraw amount ? "<< endl; 
        cin >> withdrawl_amount; 
    cout <<"Initial Amount? " << endl;
        cin >> inital_amount;
    
    // if statment withdrawl_amount is greater then 70% of the intial 
    if (withdrawl_amount > (0.07 * inital_amount) * 10) { 

        cout << "withdrawl not allowed" <<endl; 
    }
    else  {
// print out the remaining amount 
        cout << "  withdraw approved" << "\n Remaining Balace: $ " << (inital_amount - withdrawl_amount ) << endl;
    }
    return 0; 
}