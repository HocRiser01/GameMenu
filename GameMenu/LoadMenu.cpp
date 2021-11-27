//
//  LoadMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "Game.h"
#include "System.h"
#include "LoadMenu.h"
#include "StartGameMenu.h"

extern Game* nowGame;

void LoadMenu::show(){
    cls();
    for (int i = 0; i < Archives::gamesNum; i ++){
        if (act == i)
            std::cout << "==>    ";
        else
            std::cout << "        ";
        std::cout << i << ":    Step:" << Archives::games[i].Step << "  Time:  " << Archives::games[i].time << std::endl;
    }
}

int LoadMenu::process(){
    if (Archives::gamesNum == 0){
        cls();
        std::cout << "No Archives" << std::endl;
        std::cout << "Press any key to return" << std::endl;
        pause();
        return 0;
    }
    while (1){
        show();
        char ch = getch();
        if (ch == 's' || ch == 'S'){
            act ++;
            if (act == Archives::gamesNum) act = 0;
        }
        if (ch == 'w' || ch == 'W'){
            act --;
            if (act == -1) act = Archives::gamesNum - 1;
        }
        if (ch == 'f' || ch == 'F'){
            nowGame = new Game(Archives::games[act]);
            StartGameMenu* pSGM = new StartGameMenu;
            pSGM -> process();
            return 0;
        }
    }
}
