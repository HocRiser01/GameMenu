//
//  SaveMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef SaveMenu_h
#define SaveMenu_h

#include "IMenu.h"

class SaveMenu:public IMenu{
public:
    virtual void show();
    virtual int process();
};

#endif /* SaveMenu_h */
