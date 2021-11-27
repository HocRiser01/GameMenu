//
//  PauseOptions.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "PauseOptions.h"

void ContinueOpt::inactive(){
    std::cout << "        Continue" << std::endl;
}

void ContinueOpt::active(){
    std::cout << "==>    Continue" << std::endl;
}

void SaveOpt::inactive(){
    std::cout << "          Save" << std::endl;
}

void SaveOpt::active(){
    std::cout << "==>      Save" << std::endl;
}

void SettingsPausedOpt::inactive(){
    std::cout << "        Settings" << std::endl;
}

void SettingsPausedOpt::active(){
    std::cout << "==>    Settings" << std::endl;
}

void QuitPausedGameOpt::inactive(){
    std::cout << "          Quit" << std::endl;
}

void QuitPausedGameOpt::active(){
    std::cout << "==>      Quit" << std::endl;
}
