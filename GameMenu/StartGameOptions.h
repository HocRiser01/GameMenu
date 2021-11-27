//
//  StartGameOptions.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef StartGameOptions_h
#define StartGameOptions_h

#include "Options.h"

class NextStepOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
    virtual void process();
};

class PauseOpt:public Options{
public:
    virtual void inactive();
    virtual void active();
};

#endif /* StartGameOptions_h */
