//
//  main.cpp
//  Reversing a String in a While Loop
//  Created by Ryan Bond on 12/10/16.
//  Copyright © 2016 Ryan Bond. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int a = 0;

    while (a < 3 ) {
        string word;
        cout << "enter a word:\n";
        getline (cin, word);
        word = string(word.rbegin(), word.rend());
        cout << "The Reverse is:  " << word << endl;
        a++;
    }
}
