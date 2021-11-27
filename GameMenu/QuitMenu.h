//
//  QuitMenu.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef QuitMenu_h
#define QuitMenu_h

#include "IMenu.h"

class QuitMenu:public IMenu{
public:
    virtual void show();
    virtual int process();
};

#endif /* QuitMenu_h */
