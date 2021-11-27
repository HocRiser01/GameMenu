//
//  MainMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <cstdio>
#include "System.h"
#include "MainMenu.h"
#include "StartGameMenu.h"
#include "LoadMenu.h"
#include "SettingsMenu.h"
#include "AboutMenu.h"
#include "SettingsOptions.h"

void MainMenu::show(){
    cls();
    puts("---Welcome to my GameMenu framework!---");
    puts("--Use 'WASD' to move and 'F' to enter---");
    for (int i = 0; i < optNum; i ++){
        if (act == i)
            Opts[i] -> active();
        else
            Opts[i] -> inactive();
    }
}

int MainMenu::process(){ // 0:New Game, 1:Load, 2:Settings, 3:About, 4:Quit
    act = 0;
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
            switch (act){
                case 0:{
                    Opts[act] -> process();
                    StartGameMenu* pSGM = new StartGameMenu;
                    pSGM -> process();
                    show();
                    break;
                }
                case 1:{
                    LoadMenu* pLM = new LoadMenu;
                    pLM -> process();
                    show();
                    break;
                }
                case 2:{
                    SettingsMenu* pSM = new SettingsMenu;
                    pSM -> process();
                    show();
                    break;
                }
                case 3:{
                    AboutMenu* pAM = new AboutMenu;
                    pAM -> process();
                    show();
                    break;
                }
                case 4:{
                    return 0;
                    break;
                }
            }
        }
    }
}
