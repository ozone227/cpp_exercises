//
//  main.cpp
//
//  Salary Calculator
//  Created by Ryan Bond on 12/31/16.
//  Copyright © 2016 Ryan Bond. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {

//  Gather Values from User And Store in Three Separate Variables
    double stdHours;
    double otHours;
    double roPay;

    cout << "Please Enter Hours Worked:"<< '\n';
    cin >> stdHours;
    cout << '\n';

    cout << "Please Enter Overtime Hours Worked:" << '\n';
    cin >> otHours;
    cout << '\n';

    cout << "Please Enter your Hourly Wage:" << '\n';
    cin >> roPay;
    cout << '\n';

// Create Pointers
    double * pointer1;
    double * pointer2;
    double * pointer3;

    pointer1 = &stdHours;
    pointer2 = &otHours;
    pointer3 = &roPay;

//  Print Pointers
    cout << "Pointers:"<<'\n';
    cout << "(pointer1 = " << pointer1 << ")"<<'\n';
    cout << "(pointer2 = " << pointer2 << ")"<<'\n';
    cout << "(pointer3 = " << pointer3 << ")"<<'\n';
    cout << '\n';
    cout << '\n';

// Print Pointer Content
    pointer1 = new double(stdHours);
    pointer2 = new double(otHours);
    pointer3 = new double(roPay);

    cout << "Hours Submitted:  " << *pointer1 << '\n';
    cout << "OverTime Hours Submitted:  "<< *pointer2 << '\n';
    cout << "Employee Pay Rate:  "<< fixed << setprecision(2) <<"$" << *pointer3 << '\n';

// Calculate Pay and Store as Variables
    double stdPay (*pointer1  * *pointer3);
    double otPay (otHours * (roPay*1.5));

    cout << '\n';

// Calculate The Employees Pay
    cout << "Your Base Pay for this Period is:";
    cout << '\n';
    cout << '\n';
    cout << setw(20) << fixed << setprecision(2) <<"$"<<stdPay;
    cout << '\n';
    cout << '\n';
    cout << "Your Overtime Pay for this Period is:";
    cout << '\n';
    cout << '\n';
    cout  << setw(20) << fixed << setprecision(2) <<"$"<<otPay;
    cout << '\n';
    cout << '\n';
    cout << "Your Total Pay for this Period is:";
    cout << '\n';
    cout << '\n';
    cout  << setw(20) << fixed << setprecision(2) <<"$"<<(stdPay+otPay);
    cout << '\n';
    cout << '\n';

// Delete Pointers
    delete pointer1;
    delete pointer2;
    delete pointer3;

    return 0;
}
