//
//  MainMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef MainMenu_h
#define MainMenu_h

#include "IMenu.h"
#include "MainMenuOptions.h"

class MainMenu:public IMenu{
public:
    static const int optNum = 5;
    Options* Opts[optNum] = {new NewGameOpt, new LoadOpt, new SettingsOpt, new AboutOpt, new QuitAppOpt};
    virtual void show();
    virtual int process();
};

#endif /* MainMenu_h */
