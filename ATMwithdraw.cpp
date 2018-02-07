//  main.cpp
//  ATM Withdrawl

#include <cmath>
#include <iostream>
    using namespace std;

int main()
{
    int outputA, // Represents # of $50s
    outputB, // Represents # of $20s
    outputC, // Represents # of $10s
    outputD, // Represents # of $5s
    outputE; // Represents # of $1s
        
    double input;   // the number the user inputs when prompted to enter amount for withdrawl
    double amt;     // the changing number used for each if statement
    char answer;    // either 'Y' or 'y', used for answering whether the user would like to make another transaction
    
    // Begins Code: Prompts user for input and gives instructions on terminating the program
    cout << " When You Are Finished With The Transaction Press 0 To Exit " << endl;
    do { // Do While: User is asked for another transaction, if their answer is yes (y) then the programs runs again until 0 or another character is pressed
        cout << " Please Enter An Amount For Withdrawl " << endl; // User is prompted to enter withdrawl amount
        cin >> input;
        amt = input;
            
        if(amt <= 300 && amt >= 1)  // If the amount the user enters is between $1 and $300 then the programs continues, if not see line 70
        {
            if (amt >= 50) // If the intial amount is greater than or equal to $50 this if-statement is ran, if not it moves to the next if-statement
            {
                outputA = amt/50; // outputA(# of $50s) is equal to the amount entered divided by 50
                cout << outputA << " $50 bill(s) will be withdrawn " << endl; // prints outputA(# of $50s)
                    
                amt = amt - (50*outputA); // the amount of $50s is subtracted from the original amount to get the remaining amount
            }
    
            if (amt >= 20) // If the new amount is greater than or equal to $20 this if-statement is ran, if not it moves to the next if-statement
            {
                outputB = amt/20; // outputB(# of $20s) is equal to the amount entered divided by 20
                cout << outputB << " $20 bill(s) will be withdrawn " << endl; // prints outputB(# of $20s)
                    
                amt = amt - (20*outputB); // the amount of $20s is subtracted from the remaining amount to get the new remaining amount
            }
    
            if (amt >= 10) // If the new amount is greater than or equal to $10 this if-statement is ran, if not it moves to the next if-statement
            {
                outputC = amt/10; // outputC(# of $10s) is equal to the amount entered divided by 10
                cout << outputC << " $10 bill(s) will be withdrawn " << endl; // prints outputC(# of $10s)
                
                amt = amt - (10*outputC); // the amount of $10s is subtracted from the remaining amount to get the new remaining amount
            }
                
            if (amt >= 5) // If the new amount is greater than or equal to $5 this if-statement is ran, if not it moves to the next if-statement
            {
                outputD = amt/5; // outputD(# of $5s) is equal to the amount entered divided by 5
                cout << outputD << " $5  bill(s) will be withdrawn " << endl; // prints outputD(# of $5s)
                    
                amt = amt - (5*outputD); // the amount of $5s is subtracted from the remaining amount to get the new remaining amount
            }
                
            if (amt >= 1) // If the new amount is greater than or equal to $1 this if-statement is ran regardless the program moves to line 74
                {
                    outputE = (amt/1); // outputE(# of $1s) is equal to the amount entered divided by 1
                    cout << outputE << " $1  bill(s) will be withdrawn " << endl; // prints outputE(# of $1s)
                }
        }
        else // If the amount enter by the user is not between $1 and $300 then the else statement is ran
        {
        cout << "Invalid Amount Withdrawls must be between $1 and $300" << endl; // User is prompted they've entered a number outside of the range
        }
        cout << "Do You Want To Complete Another Transaction?" << endl; // User is asked if they would like to complete another transaction
        cin >> answer;
    }
    while (answer == 'Y' || answer == 'y'); // If user does not enter 'Y' or 'y' the programs terminates
    
    cout << " Thank You! " << endl;
    
    return 0;
}
