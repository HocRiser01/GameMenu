//
//  App.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef App_h
#define App_h

#include "MainMenu.h"

class App{
public:
    void run(){
        MainMenu* pMM = new MainMenu;
        pMM -> process();
    }
};

#endif /* App_h */
