//
//  IMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef IMenu_h
#define IMenu_h

class IMenu{
public:
    int act = 0;
    virtual void show() = 0;
    virtual int process() = 0;
};

#endif /* IMenu_h */
