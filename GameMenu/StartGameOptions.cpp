//
//  StartGameOptions.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "Game.h"
#include "StartGameOptions.h"

extern Game* nowGame;

void NextStepOpt::inactive(){
    std::cout << "        Next Step" << std::endl;
}

void NextStepOpt::active(){
    std::cout << "==>    Next Step" << std::endl;
}

void NextStepOpt::process(){
    time_t now = time(0);
    nowGame -> time = ctime(&now);
    nowGame -> Step ++;
}

void PauseOpt::inactive(){
    std::cout << "          Pause" << std::endl;
}

void PauseOpt::active(){
    std::cout << "==>      Pause" << std::endl;
}
