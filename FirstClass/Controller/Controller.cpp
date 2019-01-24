//
//  Controller.cpp
//  FirstClass
//
//  Created by Bowen, Tanner on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    this->specialNumber = 21456;
}

void Controller :: start()
{
    cout << "This is in the start method" << endl;
    cout << "I want some food..." << specialNumber << " Like some Little Ceasars pizza!" << endl;
    string input;
    cout << "Type your name" << endl;
    getline(cin, input);
    cout << input << endl;
    cout << "isn't it weird that the program exit code line pops up before?" << endl;
    cout << "Type in a number" << endl;
    cin >> specialNumber;
    cout << "Here is the number you typed: " << specialNumber << endl;
}
