//
//  main.cpp
//  File Operations & Reverse Iterators
//
//  Created by Ryan Bond on 1/4/17.
//  Copyright © 2017 Ryan Bond. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string GatherInput();  // Collect Input from User.
void AppendFile();    // Append the User Input to a File
void ReverseText();   // Reverse the File Contents and Write to New File

int main(int argc, const char * argv[]) {
    AppendFile();
    ReverseText();
    return 0;
}

string GatherInput()
{
    string UserInput = "";
    cout << "Append A Word To The File:  " << endl;
    getline(cin, UserInput);
    return UserInput;
}

void AppendFile()
{
    string UserInput = GatherInput();
    fstream mod;
    mod.open("~/source.txt", mod.app);
    mod << UserInput;
    mod << '\n';
    mod << '\n';

    cout << '\n';
    cout << "File Updated with:  " << UserInput << endl;
    cout << '\n';
    mod.close();
}

void ReverseText()
{
    ifstream rev_mod;
    ofstream rev_wrt;
    rev_mod.open("~/source.txt");
    rev_wrt.open("~/destination.txt");
    istream_iterator<string> i1 {rev_mod};
    istream_iterator<string>eosl1;
    vector<string> b {i1, eosl1};
    reverse(b.begin(), b.end() );
    for (auto i = b.begin(); i != b.end(); ++i)
        rev_wrt << *i << ' ';
    cout << '\n';
    cout << "The File in Reverse:" << '\n';

    istream_iterator<string> i2 {rev_mod};
    istream_iterator<string>eosl2;
    vector<string> c {i2, eosl2};
    for (auto i = b.begin(); i != b.end(); ++i)
        cout << *i << ' ';
    cout << '\n';
    cout << '\n';
}
