//
//  main.cpp
//  Sequencing threads with condition_variable
//
//  Created by Ryan Bond on 1/27/17.
//  Copyright © 2017 Ryan Bond. All rights reserved.
//

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

using namespace std;
mutex mtx;
condition_variable cv;

bool locked = true;
void counter1();
void counter2();

int main(int argc, const char * argv[]) {

    // Build and Launch Thread 1
    thread thd1 (counter1);
    thd1.join();
    cout << '\n';
    cout << '\n';
    locked = false;   // Set Locked to False

    // Build and Launch Thread 2
    thread thd2(counter2);
    thd2.join();
    cout << '\n';
    // Terminate Program
    return 0;
}

// Function to Count to 20
void counter1() {
    cout << "Count to 20: \n";
    for (int i=0; i <= 20; i++)
    cout << i << " ";
}

// Function to Countdown from 20
void counter2(){
    unique_lock<mutex> lck(mtx);  // Create a Locked Mutex
    while (locked) cv.wait(lck); // Halt this Thread Until Unlocked
    {
    cout << "Countdown from 20: \n";
    for (int i=20; i >= 0; i--)
        cout << i << " ";
    }
    cout << '\n';
}
