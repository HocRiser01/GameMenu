//
//  SettingsMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include "System.h"
#include "SettingsMenu.h"

void SettingsMenu::show(){
    cls();
    for (int i = 0; i < optNum; i ++){
        if (i == act)
            Opts[i] -> active();
        else
            Opts[i] -> inactive();
    }
}

int SettingsMenu::process(){ // 0:Volumn  1:Resolution  2:Quit
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
        if ((ch == 'f' || ch == 'F') && act == 2)
            return 0;
        if ((ch == 'a' || ch == 'A') || (ch == 'd' || ch == 'D')){
            if (act == 0) (dynamic_cast<VolumnOpt*> (Opts[act])) -> work(ch);
            if (act == 1) (dynamic_cast<ResolutionOpt*> (Opts[act])) -> work(ch);
        }
    }
}
