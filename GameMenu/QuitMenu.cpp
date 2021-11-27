//
//  QuitMenu.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "System.h"
#include "SaveMenu.h"
#include "QuitMenu.h"

void QuitMenu::show(){
    cls();
    std::cout << "Save or not?" << std::endl;
    if (act == 0)
        std::cout << " > Save    |    Don't Save    |    Cancel" << std::endl;
    if (act == 1)
        std::cout << "    Save    | > Don't Save    |    Cancel" << std::endl;
    if (act == 2)
        std::cout << "    Save    |    Don't Save    | > Cancel" << std::endl;
}

int QuitMenu::process(){
    while (1){
        show();
        char ch = getch();
        if ((ch == 'd' || ch == 'D') && act < 2) act ++;
        if ((ch == 'a' || ch == 'A') && act > 0) act --;
        if (ch == 'f' || ch == 'F'){
            switch (act){
                case 0:{
                    SaveMenu* pS = new SaveMenu;
                    pS -> process();
                    return 0;
                    break;
                }
                case 1:{
                    return 1;
                    break;
                }
                case 2:{
                    return 2;
                    break;
                }
            }
        }
    }
}
