//
//  PauseMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef PauseMenu_h
#define PauseMenu_h

#include "IMenu.h"
#include "PauseOptions.h"

class PauseMenu:public IMenu{
public:
    static const int optNum = 4;
    Options* Opts[optNum] = {new ContinueOpt, new SaveOpt, new SettingsPausedOpt, new QuitPausedGameOpt};
    virtual void show();
    virtual int process();
};

#endif /* PauseMenu_h */
