//
//  main.cpp
//  Integer Pointers Program
//
//  Created by Ryan Bond on 12/18/16.
//  Copyright © 2016 Ryan Bond. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

// Define Variables
    int num1;
    int num2;
    int num3;

    int *myptr1 = new(int);
    int *myptr2 = new(int);
    int *myptr3 = new(int);

// Gather Integers from User And Store in Three Separate Variables
    cout << "Enter Integer 1:"<<'\n';
    cin >> num1;

    cout << "Enter Integer 2:"<<'\n';
    cin >> num2;

    cout << "Enter Integer 3:" << '\n';
    cin >> num3;

// Print Variable Values and Their Associated Memory Address
    myptr1 = &num1;
    cout << "Integer 1's Value is:  " <<*myptr1 << '\n';
    cout << "Integer 1's Location is:  "<< myptr1<< '\n';
    myptr1 = new int(num1);
    delete myptr1;
    cout << "myptr1 deleted";
    cout <<'\n';
    cout <<'\n';

    myptr2 = &num2;
    cout << "Integer 2's Value is:  " << *myptr2 << '\n';
    cout << "Integer 2's Location is:  "<< myptr2<< '\n';
    myptr2 = new int(num1);
    delete myptr2;
    cout << "myptr2 deleted";
    cout <<'\n';
    cout <<'\n';

    myptr3 = &num3;
    cout << "Integer 3's Value is:  " << *myptr3 << '\n';
    cout << "Integer 3's Location is:  "<< myptr3<<'\n';
    myptr3 = new int(num1);
    delete myptr3;
    cout << "myptr3 deleted";
    cout <<'\n';
    cout <<'\n';

    return 0;
}
