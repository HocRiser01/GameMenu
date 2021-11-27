//
//  SettingsOptions.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef SettingsOptions_h
#define SettingsOptions_h

#include "Options.h"

class VolumnOpt:public Options{
public:
    static int volumn;
    virtual void inactive();
    virtual void active();
    static void init();
    void work(char);
    void louder();
    void lower();
};

class ResolutionOpt:public Options{
public:
    static int resolution;
    virtual void inactive();
    virtual void active();
    static void init();
    void work(char);
    void upper();
    void lower();
};

class QuitSettingsOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

#endif /* SettingsOptions_h */
