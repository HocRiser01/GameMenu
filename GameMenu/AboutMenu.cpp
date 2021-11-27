//
//  AboutMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "AboutMenu.h"
#include "System.h"

void AboutMenu::show(){
    cls();
    std::cout << "---------------- Made by HocRiser --------------" << std::endl;
    std::cout << "--- Compatible with Linux, MacOS and Windows ---" << std::endl;
    std::cout << "------------ Undivided View and Model ----------" << std::endl;
    std::cout << std::endl << "Press any key to return" << std::endl;
}

int AboutMenu::process(){
    show();
    getch();
    return 0;
}
