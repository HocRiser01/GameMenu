//
//  MainMenuOptions.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef MainMenuOptions_h
#define MainMenuOptions_h

#include "Options.h"

class NewGameOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
    virtual void process();
};

class LoadOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

class SettingsOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

class AboutOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

class QuitAppOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

#endif /* MainMenuOptions_h */
