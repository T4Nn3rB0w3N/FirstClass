//
//  Runner.cpp
//  FirstClass
//
//  Created by Bowen, Tanner on 1/24/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

int main()
{
    // in order to comment multiple things and once, use "command + / (whack)"
//    Controller myFirstController;
//    myFirstController.start();
    
    //Pointer version
    Controller * myPointer = new Controller();
    myPointer->start();
    
    return 0;
}
