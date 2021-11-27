//
//  SettingsMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef SettingsMenu_h
#define SettingsMenu_h

#include "IMenu.h"
#include "SettingsOptions.h"

class SettingsMenu:public IMenu{
public:
    static const int optNum = 3;
    Options* Opts[optNum] = {new VolumnOpt, new ResolutionOpt, new QuitSettingsOpt};
    virtual void show();
    virtual int process();
};

#endif /* SettingsMenu_h */
