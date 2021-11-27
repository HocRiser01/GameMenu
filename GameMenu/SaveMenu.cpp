//
//  SaveMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <ctime>
#include <iostream>
#include "Game.h"
#include "System.h"
#include "SaveMenu.h"

extern Game* nowGame;

void SaveMenu::show(){
    cls();
    for (int i = 0; i < Archives::gamesNum; i ++){
        if (act == i)
            std::cout << "==>    ";
        else
            std::cout << "        ";
        std::cout << i << ":    Step:" << Archives::games[i].Step << "  Time:  " << Archives::games[i].time << std::endl;
    }
    if (act == Archives::gamesNum)
        std::cout << "==>    ";
    else
        std::cout << "        ";
    std::cout << Archives::gamesNum << ": New" << std::endl;
    if (act == Archives::gamesNum + 1)
        std::cout << "==>    Cancel" << std::endl;
    else
        std::cout << "        Cancel" << std::endl;
}

int SaveMenu::process(){
    while (1){
        show();
        char ch = getch();
        if (ch == 's' || ch == 'S'){
            act ++;
            if (act == Archives::gamesNum + 2) act = 0;
        }
        if (ch == 'w' || ch == 'W'){
            act --;
            if (act == -1) act = Archives::gamesNum + 1;
        }
        if (ch == 'f' || ch == 'F'){
            if (act < Archives::gamesNum)
                Archives::games[act] = *nowGame;
            if (act == Archives::gamesNum)
                Archives::games[Archives::gamesNum ++] = *nowGame;
            return 0;
        }
    }
}
