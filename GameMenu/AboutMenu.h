//
//  AboutMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright © 2021 HocRiser. All rights reserved.
//

#ifndef AboutMenu_h
#define AboutMenu_h

#include "IMenu.h"

class AboutMenu:public IMenu{
public:
    virtual void show();
    virtual int process();
};

#endif /* AboutMenu_h */
