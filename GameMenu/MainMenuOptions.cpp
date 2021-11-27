//
//  MainMenuOptions.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/25.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <ctime>
#include <iostream>
#include "Game.h"
#include "MainMenuOptions.h"

extern Game* nowGame;

void NewGameOpt::inactive(){
    std::cout << "         New Game" << std::endl;
}

void NewGameOpt::active(){
    std::cout << "==>     New Game" << std::endl;
}

void NewGameOpt::process(){
    nowGame = new Game;
}

void LoadOpt::inactive(){
    std::cout << "            Load" << std::endl;
}

void LoadOpt::active(){
    std::cout << "==>        Load" << std::endl;
}

void SettingsOpt::inactive(){
    std::cout << "         Settings" << std::endl;
}

void SettingsOpt::active(){
    std::cout << "==>     Settings" << std::endl;
}

void AboutOpt::inactive(){
    std::cout << "           About" << std::endl;
}

void AboutOpt::active(){
    std::cout << "==>       About" << std::endl;
}

void QuitAppOpt::inactive(){
    std::cout << "            Quit" << std::endl;
}

void QuitAppOpt::active(){
    std::cout << "==>        Quit" << std::endl;
}
