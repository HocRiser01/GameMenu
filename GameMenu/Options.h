//
//  Options.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef Options_h
#define Options_h

class Options{
public:
    virtual void inactive() = 0;
    virtual void active() = 0;
    virtual void process(){}
};

#endif /* Options_h */
