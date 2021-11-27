//
//  StartGameMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef StartGameMenu_h
#define StartGameMenu_h

#include "IMenu.h"
#include "StartGameOptions.h"

class StartGameMenu:public IMenu{
public:
    static const int optNum = 2;
    Options* Opts[optNum] = {new NextStepOpt, new PauseOpt};
    virtual void show();
    virtual int process();
};

#endif /* StartGameMenu_h */
