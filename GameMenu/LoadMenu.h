//
//  LoadMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef LoadMenu_h
#define LoadMenu_h

#include "IMenu.h"

class LoadMenu:public IMenu{
public:
    virtual void show();
    virtual int process();
};

#endif /* LoadMenu_h */
