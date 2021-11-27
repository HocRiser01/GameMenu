//
//  Game.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include "Game.h"

Game::Game():Step(0){
    time_t now = std::time(0);
    time = ctime(&now);
}

int Archives::gamesNum = 0;
Game* Archives::games = new Game[100];
Game* nowGame;

