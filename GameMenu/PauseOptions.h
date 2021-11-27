//
//  PauseOptions.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef PauseOptions_h
#define PauseOptions_h

#include "Options.h"

class ContinueOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

class SaveOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

class SettingsPausedOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

class QuitPausedGameOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

#endif /* PauseOptions_h */
