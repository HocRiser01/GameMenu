//
//  PauseMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include "System.h"
#include "PauseMenu.h"
#include "SaveMenu.h"
#include "SettingsMenu.h"
#include "QuitMenu.h"

void PauseMenu::show(){
    cls();
    for (int i = 0; i < optNum; i ++){
        if (i == act)
            Opts[i] -> active();
        else
            Opts[i] -> inactive();
    }
}

int PauseMenu::process(){ // 0:Continue, 1:Save, 2:Settings, 3:Quit
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
                    return 0;
                    break;
                }
                case 1:{
                    SaveMenu* pS = new SaveMenu;
                    pS -> process();
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
                    QuitMenu* pQM = new QuitMenu;
                    int flag = pQM -> process();
                    if (flag == 2)
                        return 0;
                    else
                        return 1;
                    break;
                }
            }
        }
    }
}
