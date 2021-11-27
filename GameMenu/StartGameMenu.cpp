//
//  StartGameMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "Game.h"
#include "System.h"
#include "StartGameMenu.h"
#include "PauseMenu.h"

extern Game* nowGame;

void StartGameMenu::show(){
    cls();
    std::cout << "Your Step: " << nowGame -> Step << std::endl;
    for (int i = 0; i < optNum; i ++)
        if (i == act)
            Opts[i] -> active();
        else
            Opts[i] -> inactive();
}

int StartGameMenu::process(){ // 0:Next Step, 1:Pause, 2:Quit
    while (1){
        show();
        char ch = getch();
        if (ch == 's' || ch == 'S'){
            act ++;
            if (act == optNum) act = 0;
        }
        if (ch == 'w' || ch == 'W'){
            act --;
            if (act == -1) act = optNum - 1;
        }
        if (ch == 'f' || ch == 'F'){
            if (act == 0)
                Opts[act] -> process();
            if (act == 1){
                PauseMenu* pPM = new PauseMenu;
                int flag = pPM -> process();
                if (flag == 1) return 0;
                show();
            }
        }
    }
}
